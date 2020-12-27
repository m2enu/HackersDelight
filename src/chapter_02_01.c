/**
 * @file        chapter_02_01.c
 * @brief       Hacker's Delight Chapter 2-1 Manipulating Rightmost Bits
 * @author      m2enu
 * @date        2020/12/27
 * @copyright   Copyright (c) 2020 m2enu
 * @par         License
 *              https://github.com/m2enu/HackersDelight/blob/main/LICENSE
 */

#include "chapter_02_01.h"

/**
 * @brief       Turn off the rightmost 1 bit
 * @param[in]   (val)   Value to check
 * @return      Value that turned off the rightmost 1 bit
 * @retval      (0)     There is no 1 in value
 */
uint8_t TurnOffRightmost1Bit(uint8_t val)
{
    return val & (val - 1);
}

// end of file {{{1
// vim:ft=c:et:nowrap:fdm=marker
