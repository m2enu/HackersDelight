/**
 * @file        chapter_05.c
 * @brief       Hacker's Delight Chapter 5 Counting Bits
 * @author      m2enu
 * @date        2020/12/31
 * @copyright   Copyright (c) 2020 m2enu
 * @par         License
 *              https://github.com/m2enu/HackersDelight/blob/main/LICENSE
 */

#include "chapter_05.h"

/**
 * @brief       Count 1-bits in a word: formula 1
 *
 * @param[in]   (val)   Value to check
 * @return      Count of 1-bits in a word
 *
 * @par         Chapter
 *              5-1
 */
uint8_t Counting1BitsInWord1(uint32_t x)
{
    x = (x & 0x55555555u) + ((x >>  1) & 0x55555555u);
    x = (x & 0x33333333u) + ((x >>  2) & 0x33333333u);
    x = (x & 0x0f0f0f0fu) + ((x >>  4) & 0x0f0f0f0fu);
    x = (x & 0x00ff00ffu) + ((x >>  8) & 0x00ff00ffu);
    x = (x & 0x0000ffffu) + ((x >> 16) & 0x0000ffffu);
    return (uint8_t)x;
}

/**
 * @brief       Count 1-bits in a word: formula 2
 *
 * @param[in]   (val)   Value to check
 * @return      Count of 1-bits in a word
 *
 * @par         Chapter
 *              5-1
 */
uint8_t Counting1BitsInWord2(uint32_t x)
{
    x =  x                - ((x >>  1)  & 0x55555555u);
    x = (x & 0x33333333u) + ((x >>  2)  & 0x33333333u);
    x = (x                +  (x >>  4)) & 0x0f0f0f0fu ;
    x =  x                + ((x >>  8)               );
    x =  x                + ((x >> 16)               );
    return (uint8_t)(x & 0x0000003fu);
}
