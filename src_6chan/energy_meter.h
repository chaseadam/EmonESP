/*
   -------------------------------------------------------------------
   EmonESP Serial to Emoncms gateway
   -------------------------------------------------------------------
   Created for use with the CircuitSetup.us Split Phase Energy Meter by jdeglavina

   All adaptation GNU General Public License as below.

   -------------------------------------------------------------------

   This file is part of OpenEnergyMonitor.org project.
   EmonESP is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.
   EmonESP is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with EmonESP; see the file COPYING.  If not, write to the
   Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.
*/

#ifndef _ENERGY_METER
#define _ENERGY_METER

//#define ENABLE_OLED_DISPLAY

/* If JP9-JP11 are bridged, this means voltage is copied to registers, and power can be read directly from the meter 
   vs being calculated in software. Other metering values can also be read. */
//#define JP9_JP11_SET
//#define ADDON_BOARDS
#ifdef ADDON_BOARDS
/* Change to total number of Add-On Boards - Can not be more than 6 */
#define NUM_OF_ADDON_BOARDS 1
#endif

/*
    Uncomment to send metering values to EmonCMS, like Fundamental, Harmonic, Reactive, Apparent Power, and Phase Angle
*/
//#define EXPORT_METERING_VALS

/*
   The following calibration values can be set here or in the EmonESP interface
   EmonESP values take priority if they are set
*/

/*
   5231 for 60 hz 6 channel meter 
   135 for 50 hz 6 channel meter
*/

#define LINE_FREQ 5231

/*
   0 for 10A (1x)
   21 for 100A (2x)
   42 for between 100A - 200A (4x)
*/
#define PGA_GAIN 0

/*
   For meter <= v1.2:
      42080 - 9v AC Transformer - Jameco 112336
      32428 - 12v AC Transformer - Jameco 167151
   For meter > v1.3:
      7305 - 9v AC Transformer - Jameco 157041
*/
#define VOLTAGE_GAIN 7305
#define VOLTAGE_GAIN2 7305

/*
  30A/1V SCT-013-030: 8650
  50A/1V SCT-013-050: 15420
  100A/50ma SCT-013-000: 32498
*/
#define CURRENT_GAIN_CT1 32498
#define CURRENT_GAIN_CT2 32498
#define CURRENT_GAIN_CT3 32498
#define CURRENT_GAIN_CT4 32498
#define CURRENT_GAIN_CT5 32498
#define CURRENT_GAIN_CT6 32498


extern void energy_meter_setup();
extern void energy_meter_loop();

#endif
