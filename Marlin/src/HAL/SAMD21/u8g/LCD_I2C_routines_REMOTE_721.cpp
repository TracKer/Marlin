/**
 * Marlin 3D Printer Firmware
<<<<<<<< HEAD:Marlin/src/lcd/e3v2/proui/printstats.h
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
========
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
>>>>>>>> 09d0b4d15228b3efb6fd765f1e1574f521df2e27:Marlin/src/HAL/SAMD21/u8g/LCD_I2C_routines.cpp
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

/**
<<<<<<<< HEAD:Marlin/src/lcd/e3v2/proui/printstats.h
 * Print Stats page for PRO UI
 * Author: Miguel A. Risco-Castillo (MRISCOC)
 * Version: 1.4.2
 * Date: 2022/12/03
 */

class PrintStatsClass {
public:
  static void Draw();
  static void Reset();
};

extern PrintStatsClass PrintStats;

void Goto_PrintStats();
void PrintStatsReset();
========
 * SAMD21 HAL developed by Bart Meijer (brupje)
 * Based on SAMD51 HAL by Giuliano Zaro (AKA GMagician)
 */
// adapted from  I2C/master/master.c example
//   https://www-users.cs.york.ac.uk/~pcc/MCP/HAPR-Course-web/CMSIS/examples/html/master_8c_source.html

#ifdef __SAMD21__

#endif // __SAMD21__
>>>>>>>> 09d0b4d15228b3efb6fd765f1e1574f521df2e27:Marlin/src/HAL/SAMD21/u8g/LCD_I2C_routines.cpp
