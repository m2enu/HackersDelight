/******************************************************************************
 * Copyright (c) 2020 m2enu
 * Released under the MIT License
 * https://github.com/m2enu/HackersDelight/blob/master/LICENSE.txt
 *****************************************************************************/

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
