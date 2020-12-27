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
 *
 * @param[in]   (val)   Value to check
 * @return      Value that turned off the rightmost 1 bit
 * @retval      (0)     There is no 1 bit in value
 *
 * @note        This can be used to determine if specified value is a power
 *              of 2 or 0.
 */
uint8_t TurnOffRightmost1Bit(uint8_t val)
{
    return val & (val - 1u);
}

/**
 * @brief       Turn on the rightmost 0 bit
 *
 * @param[in]   (val)   Value to check
 * @return      Value that turned on the rightmost 0 bit
 * @retval      (1)     There is no 0 bit in value
 */
uint8_t TurnOnRightmost0Bit(uint8_t val)
{
    return val | (val + 1u);
}

// end of file {{{1
// vim:ft=c:et:nowrap:fdm=marker
