/**
 * @file        chapter_02.h
 * @brief       Hacker's Delight Chapter 2 Basics
 * @author      m2enu
 * @date        2020/12/27
 * @copyright   Copyright (c) 2020 m2enu
 * @par         License
 *              https://github.com/m2enu/HackersDelight/blob/main/LICENSE
 */

#ifndef CHAPTER_02_01_H
#define CHAPTER_02_01_H

#include <stdint.h>

uint8_t TurnOffRightmost1Bit(uint8_t);
uint8_t TurnOnRightmost0Bit(uint8_t);
uint8_t TurnOffTrailing1Bits(uint8_t);
uint8_t TurnOnTrailing0Bits(uint8_t);
uint8_t Rightmost0BitPosition(uint8_t);
uint8_t Rightmost1BitPosition(uint8_t);
uint8_t Trailing0BitsPosition(uint8_t);
uint8_t Trailing1BitsPosition(uint8_t);
uint8_t IsolateRightmost1Bit(uint8_t);

uint8_t PositiveAbsolute(int8_t);
uint8_t NegativeAbsolute(int8_t);

uint8_t FloorAverageOfTwoUnsigned(uint8_t, uint8_t);
uint8_t CeilAverageOfTwoUnsigned(uint8_t, uint8_t);
int8_t FloorAverageOfTwoSigned(int8_t, int8_t);
int8_t CeilAverageOfTwoSigned(int8_t, int8_t);

int8_t SignExtension1(uint8_t);
int8_t SignExtension2(uint8_t);
int8_t SignExtension3(uint8_t);

uint8_t DecordingZeroMeans2To3rdPower(uint8_t);

#endif  // CHAPTER_02_01_H

// end of file {{{1
// vim:ft=cpp:et:nowrap:fdm=marker
