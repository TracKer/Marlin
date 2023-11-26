/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

<<<<<<<< HEAD:Marlin/src/pins/stm32f4/pins_FYSETC_SPIDER_V2_2.h
#define BOARD_INFO_NAME "FYSETC SPIDER V22"
#define DEFAULT_MACHINE_NAME BOARD_INFO_NAME

#define TEMP_3_PIN                          PC3
#define TEMP_4_PIN                          PB1
#define TEMP_BED_PIN                        PB0

#define FAN0_PIN                            PA13
#define FAN1_PIN                            PA14

#include "pins_FYSETC_SPIDER.h"
========
namespace DGUSSetupHandler {

  #if ENABLED(SDSUPPORT)
    bool Print();
  #endif
  bool PrintStatus();
  bool PrintAdjust();
  bool LevelingMenu();
  bool LevelingOffset();
  bool LevelingManual();
  bool LevelingAutomatic();
  bool LevelingProbing();
  bool Filament();
  bool Move();
  bool Gcode();
  bool PID();
  bool Infos();

}
>>>>>>>> 09d0b4d15228b3efb6fd765f1e1574f521df2e27:Marlin/src/lcd/extui/dgus_reloaded/DGUSSetupHandler.h
