/**
 * @file        test_main.c
 * @brief       Unittest runner main
 * @author      m2enu
 * @date        2020/12/27
 * @copyright   Copyright (c) 2020 m2enu
 * @par         License
 *              https://github.com/m2enu/HackersDelight/blob/main/LICENSE
 */

#include <unity.h>
#include "chapter_02_01.h"

/**
 * @brief Test for TurnOffRightmost1Bit
 */
void test_TurnOffRightmost1Bit(void)
{
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffRightmost1Bit(0b00000000u));

    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffRightmost1Bit(0b00000001u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffRightmost1Bit(0b00000010u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffRightmost1Bit(0b00000100u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffRightmost1Bit(0b00001000u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffRightmost1Bit(0b00010000u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffRightmost1Bit(0b00100000u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffRightmost1Bit(0b01000000u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffRightmost1Bit(0b10000000u));

    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffRightmost1Bit(0b10000001u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffRightmost1Bit(0b10000010u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffRightmost1Bit(0b10000100u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffRightmost1Bit(0b10001000u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffRightmost1Bit(0b10010000u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffRightmost1Bit(0b10100000u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffRightmost1Bit(0b11000000u));
}

/**
 * @brief Unittest main
 */
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_TurnOffRightmost1Bit);
    return UNITY_END();
}

// end of file {{{1
// vim:ft=c:noet:ts=4:nowrap:fdm=marker
