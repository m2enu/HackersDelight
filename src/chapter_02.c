/**
 * @file        chapter_02.c
 * @brief       Hacker's Delight Chapter 2 Basics
 * @author      m2enu
 * @date        2020/12/27
 * @copyright   Copyright (c) 2020 m2enu
 * @par         License
 *              https://github.com/m2enu/HackersDelight/blob/main/LICENSE
 */

#include "chapter_02.h"

/**
 * @brief       Turn off the rightmost 1 bit
 *
 * @param[in]   (val)   Value to check
 * @return      Value that turned off the rightmost 1 bit
 * @retval      (0)     There is no 1 bit in value
 *
 * @note        This can be used to determine if specified value is a power
 *              of 2 or 0.
 *
 * @par         Chapter
 *              2-1
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
 *
 * @par         Chapter
 *              2-1
 */
uint8_t TurnOnRightmost0Bit(uint8_t val)
{
    return val | (val + 1u);
}

/**
 * @brief       Turn off the trailing 1 bits
 * 
 * @param[in]   (val) Value to check
 * @return      Value that turned off the trailing 1 bits
 *
 * @note        This can be used to determine if specified value is of the 
 *              form (2**n - 1).
 *
 * @par         Chapter
 *              2-1
 */
uint8_t TurnOffTrailing1Bits(uint8_t val)
{
    return val & (val + 1u);
}

/**
 * @brief       Turn on the trailing 0 bits
 * 
 * @param[in]   (val) Value to check
 * @return      Value that turned on the trailing 0 bits
 * 
 * @note        Return (val) itself if no trailing 0 bits in (val).
 *
 * @par         Chapter
 *              2-1
 */
uint8_t TurnOnTrailing0Bits(uint8_t val)
{
    return val | (val - 1u);
}

/**
 * @brief       Create a single 1-bit at the position of the rightmost 0-bit.
 * 
 * @param[in]   (val) Value to check
 * @return      A single 1-bit at the position of the rightmost 0-bit
 * @retval      (0) There is no 0-bit in (val).
 *
 * @par         Chapter
 *              2-1
 */
uint8_t Rightmost0BitPosition(uint8_t val)
{
    return ~val & (val + 1u);
}

/**
 * @brief       Create a single 0-bit at the position of the rightmost 1-bit.
 * 
 * @param[in]   (val) Value to check
 * @return      A single 0-bit at the position of the rightmost 1-bit
 * @retval      (0xff) There is no 1-bit in (val).
 *
 * @par         Chapter
 *              2-1
 */
uint8_t Rightmost1BitPosition(uint8_t val)
{
    return ~val | (val - 1u);
}

/**
 * @brief       Create 1-bits at the position of the trailing 0-bits.
 * 
 * @param[in]   (val) Value to check
 * @return      1-bits at the position of the trailing 0-bits.
 * @retval      (0) There is no trailing 0-bits in (val).
 *
 * @par         Chapter
 *              2-1
 */
uint8_t Trailing0BitsPosition(uint8_t val)
{
    return ~val & (val - 1u);
}

/**
 * @brief       Create 0-bits at the position of the trailing 1-bits.
 * 
 * @param[in]   (val) Value to check
 * @return      0-bits at the position of the trailing 1-bits.
 * @retval      (0xff) There is no trailing 1-bits in (val).
 *
 * @par         Chapter
 *              2-1
 */
uint8_t Trailing1BitsPosition(uint8_t val)
{
    return ~val | (val + 1u);
}

/**
 * @brief       Isolate the rightmost 1-bit.
 * 
 * @param[in]   (val) Value to check
 * @return      Value that the rightmost 1-bit isolated.
 * @retval      (0) There is no rightmost 1-bit.
 *
 * @par         Chapter
 *              2-1
 */
uint8_t IsolateRightmost1Bit(uint8_t val)
{
    return val & -val;
}

/**
 * @brief       Computing the positive absolute value
 *
 * @param[in]   (val) Value to convert to the positive absolute value.
 * @return      Positive absolute value
 *
 * @par         Chapter
 *              2-4
 */
uint8_t PositiveAbsolute(int8_t val)
{
    uint8_t y = val >> 7;
    return (val ^ y) - y;
}

/**
 * @brief       Computing the negative absolute value
 *
 * @param[in]   (val) Value to convert to the negative absolute value.
 * @return      Negative absolute value
 *
 * @par         Chapter
 *              2-4
 */
uint8_t NegativeAbsolute(int8_t val)
{
    uint8_t y = val >> 7;
    return y - (val ^ y);
}

/**
 * @brief       Computing the floor average of two unsigned value.
 *
 * @param[in]   (x) Value 1
 * @param[in]   (y) Value 2
 * @return      Unsigned floor average value
 *
 * @par         Chapter
 *              2-5
 */
uint8_t FloorAverageOfTwoUnsigned(uint8_t x, uint8_t y)
{
    return (x & y) + ((x ^ y) >> 1);
}

/**
 * @brief       Computing the ceil average of two unsigned value.
 *
 * @param[in]   (x) Value 1
 * @param[in]   (y) Value 2
 * @return      Unsigned ceil average value
 *
 * @par         Chapter
 *              2-5
 */
uint8_t CeilAverageOfTwoUnsigned(uint8_t x, uint8_t y)
{
    return (x | y) - ((x ^ y) >> 1);
}

/**
 * @brief       Computing the floor average of two signed value.
 *
 * @param[in]   (x) Value 1
 * @param[in]   (y) Value 2
 * @return      Signed floor average value
 *
 * @par         Chapter
 *              2-5
 */
int8_t FloorAverageOfTwoSigned(int8_t x, int8_t y)
{
    return (x & y) + ((x ^ y) >> 1);
}

/**
 * @brief       Computing the ceil average of two signed value.
 *
 * @param[in]   (x) Value 1
 * @param[in]   (y) Value 2
 * @return      Signed ceil average value
 *
 * @par         Chapter
 *              2-5
 */
int8_t CeilAverageOfTwoSigned(int8_t x, int8_t y)
{
    return (x | y) - ((x ^ y) >> 1);
}

/**
 * @brief       Extend unsigned to signed: formula 1.
 *
 * @param[in]   (val) Value to be extended to signed
 * @return      Sign extended value
 */
int8_t SignExtension1(uint8_t val)
{
    return ((val + 0x80) & 0xff) - 0x80;
}

/**
 * @brief       Extend unsigned to signed: formula 2.
 *
 * @param[in]   (val) Value to be extended to signed
 * @return      Sign extended value
 */
int8_t SignExtension2(uint8_t val)
{
#if 1
    /** when known the unwanted high-order bits are all 0. */
    return ( val         ^ 0x80) - 0x80;
#else
    return ((val & 0xff) ^ 0x80) - 0x80;
#endif
}

/**
 * @brief       Extend unsigned to signed: formula 3.
 *
 * @param[in]   (val) Value to be extended to signed
 * @return      Sign extended value
 */
int8_t SignExtension3(uint8_t val)
{
    return (val & 0x7f) - (val & 0x80);
}

/**
 * @brief       Decord 0 to 8 as the maximum value of 2 to the 3rd power.
 *
 * @param[in]   (val) Value to be decorded
 * @return      Decorded value
 * @retval      (1to7) When specified 1 to 7.
 * @retval      (8) When specified 0.
 */
uint8_t DecordingZeroMeans2To3rdPower(uint8_t val)
{
    return ((val - 1u) & 0x7u) + 1u;
}

// end of file {{{1
// vim:ft=c:et:nowrap:fdm=marker
