#include <stdio.h>
#include "simvarDefs.h"

const char* versionString = "v1.3.3";

const char* SimVarDefs[][2] = {
    { "Indicated Altitude", "feet" },
    { "Kohlsman Setting Hg", "inHg" },
    { "Attitude Indicator Pitch Degrees", "degrees" },
    { "Attitude Indicator Bank Degrees", "degrees" },
    { "Airspeed Indicated", "knots" },
    { "Airspeed Mach", "mach" },
    { "Airspeed True Calibrate", "degrees" },
    { "Plane Heading Degrees Magnetic", "degrees" },
    { "Vertical Speed", "feet per second" },
    { "Turn Indicator Rate", "radians per second" },
    { "Turn Coordinator Ball", "position" },
    { "Elevator Trim Position", "degrees" },
    { "Flaps Num Handle Positions", "number" },
    { "Flaps Handle Index", "number" },
    { "Zulu Time", "seconds" },
    { "Local Time", "seconds" },
    { "Absolute Time", "seconds" },
    { "Electrical Main Bus Voltage", "volts" },
    { "Ambient Temperature", "celsius" },
    { "Electrical Battery Load", "amperes" },
    { "General Eng Rpm:1", "rpm" },
    { "Eng Rpm Animation Percent:1", "percent" },
    { "General Eng Elapsed Time:1", "hours" },
    { "Fuel Tank Left Main Level", "percent" },
    { "Fuel Tank Right Main Level", "percent" },
    { "Nav Obs:1", "degrees" },
    { "Nav Radial Error:1", "degrees" },
    { "Nav Glide Slope Error:1", "degrees" },
    { "Nav ToFrom:1", "enum" },
    { "Nav Gs Flag:1", "bool" },
    { "Nav Obs:2", "degrees" },
    { "Nav Radial Error:2", "degrees" },
    { "Nav ToFrom:2", "enum" },
    { "Adf Radial:1", "degrees" },
    { "Adf Card", "degrees" },
    { "Com Status:1", "enum" },
    { "Com Transmit:1", "bool" },
    { "Com Active Frequency:1", "mhz" },
    { "Com Standby Frequency:1", "mhz" },
    { "Nav Active Frequency:1", "mhz" },
    { "Nav Standby Frequency:1", "mhz" },
    { "Com Status:2", "enum" },
    { "Com Transmit:2", "bool" },
    { "Com Active Frequency:2", "mhz" },
    { "Com Standby Frequency:2", "mhz" },
    { "Nav Active Frequency:2", "mhz" },
    { "Nav Standby Frequency:2", "mhz" },
    { "Adf Active Frequency:1", "khz" },
    { "Adf Standby Frequency:1", "khz" },
    { "Transponder Code:1", "bco16" },
    { "Autopilot Available", "bool" },
    { "Autopilot Master", "bool" },
    { "Autopilot Heading Lock Dir", "degrees" },
    { "Autopilot Heading Lock", "bool" },
    { "Autopilot Wing Leveler", "bool" },
    { "Autopilot Altitude Lock Var", "feet" },
    { "Autopilot Altitude Lock", "bool" },
    { "Autopilot Pitch Hold", "bool" },
    { "Autopilot Vertical Hold Var", "feet/minute" },
    { "Autopilot Vertical Hold", "bool" },
    { "Autopilot Airspeed Hold Var", "knots" },
    { "Autopilot Mach Hold Var", "number" },
    { "Autopilot Airspeed Hold", "bool" },
    { "Autothrottle Active", "bool" },
    { "Is Gear Retractable", "bool" },
    { "Gear Left Position", "percent" },
    { "Gear Center Position", "percent" },
    { "Gear Right Position", "percent" },
    { "Brake Parking Position", "bool" },
    { "Estimated Cruise Speed", "knots" },
    { "General Eng Oil Temperature:1", "fahrenheit" },
    { "General Eng Oil Pressure:1", "psi" },
    { "General Eng Exhaust Gas Temperature:1", "celsius" },
    { "Eng Exhaust Gas Temperature GES:1", "percent scaler 16k" },
    { "Eng Fuel Flow GPH:1", "gallon per hour" },
    { "Suction Pressure", "inch of mercury" },
    { "Atc Id", "string64" },
    { "Atc Airline", "string64" },
    { "Atc Flight Number", "string8" },
    { "Atc Heavy", "bool" },
    { "Title", "string256" },
    { NULL, NULL }
};

WriteEvent WriteEvents[] = {
    { KEY_TRUE_AIRSPEED_CAL_SET, "TRUE_AIRSPEED_CAL_SET" },
    { KEY_KOHLSMAN_SET, "KOHLSMAN_SET" },
    { KEY_VOR1_SET, "VOR1_SET" },
    { KEY_VOR2_SET, "VOR2_SET" },
    { KEY_ELEV_TRIM_UP, "ELEV_TRIM_UP" },
    { KEY_ELEV_TRIM_DN, "ELEV_TRIM_DN" },
    { KEY_FLAPS_INCR, "FLAPS_INCR" },
    { KEY_FLAPS_DECR, "FLAPS_DECR" },
    { KEY_ADF_CARD_SET, "ADF_CARD_SET" },
    { KEY_COM1_TRANSMIT_SELECT, "COM1_TRANSMIT_SELECT" },
    { KEY_COM1_STBY_RADIO_SET, "COM_STBY_RADIO_SET" },
    { KEY_COM1_RADIO_FRACT_INC, "COM_RADIO_FRACT_INC" },
    { KEY_COM1_RADIO_SWAP, "COM1_RADIO_SWAP" },
    { KEY_COM2_TRANSMIT_SELECT, "COM2_TRANSMIT_SELECT" },
    { KEY_COM2_STBY_RADIO_SET, "COM2_STBY_RADIO_SET" },
    { KEY_COM2_RADIO_FRACT_INC, "COM2_RADIO_FRACT_INC" },
    { KEY_COM2_RADIO_SWAP, "COM2_RADIO_SWAP" },
    { KEY_NAV1_STBY_SET, "NAV1_STBY_SET" },
    { KEY_NAV1_RADIO_SWAP, "NAV1_RADIO_SWAP" },
    { KEY_NAV2_STBY_SET, "NAV2_STBY_SET" },
    { KEY_NAV2_RADIO_SWAP, "NAV2_RADIO_SWAP" },
    { KEY_ADF_COMPLETE_SET, "ADF_COMPLETE_SET" },
    { KEY_ADF1_PRIMARY_SET, "ADF1_PRIMARY_SET" },       // ADF1_PRIMARY_SET not working (SDK bug)
    { KEY_XPNDR_SET, "XPNDR_SET" },
    { KEY_AP_MASTER, "AP_MASTER" },
    { KEY_AP_SPD_VAR_SET, "AP_SPD_VAR_SET" },
    { KEY_AP_MACH_VAR_SET, "AP_MACH_VAR_SET" },
    { KEY_HEADING_BUG_SET, "HEADING_BUG_SET" },
    { KEY_AP_ALT_VAR_SET_ENGLISH, "AP_ALT_VAR_SET_ENGLISH" },
    { KEY_AP_VS_VAR_SET_ENGLISH, "AP_VS_VAR_SET_ENGLISH" },
    { KEY_AP_AIRSPEED_ON, "AP_AIRSPEED_ON" },
    { KEY_AP_AIRSPEED_OFF, "AP_AIRSPEED_OFF" },
    { KEY_AP_HDG_HOLD_ON, "AP_HDG_HOLD_ON" },
    { KEY_AP_HDG_HOLD_OFF, "AP_HDG_HOLD_OFF" },
    { KEY_AP_ALT_HOLD_ON, "AP_ALT_HOLD_ON" },
    { KEY_AP_ALT_HOLD_OFF, "AP_ALT_HOLD_OFF" },
    { KEY_AP_PANEL_ALTITUDE_ON, "AP_PANEL_ALTITUDE_ON" },
    { KEY_AUTO_THROTTLE_ARM, "AUTO_THROTTLE_ARM" },
    { SIM_STOP, NULL }
};
