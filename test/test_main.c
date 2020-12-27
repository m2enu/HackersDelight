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

static void test_TurnOffRightmost1Bit(void);
static void test_TurnOnRightmost0Bit(void);

/**
 * @brief Test for TurnOffRightmost1Bit
 */
static void test_TurnOffRightmost1Bit(void)
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
 * @brief Test for TurnOnRightmost0Bit
 */
static void test_TurnOnRightmost0Bit(void)
{
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnRightmost0Bit(0b11111111u));

    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnRightmost0Bit(0b11111110u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnRightmost0Bit(0b11111101u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnRightmost0Bit(0b11111011u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnRightmost0Bit(0b11110111u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnRightmost0Bit(0b11101111u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnRightmost0Bit(0b11011111u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnRightmost0Bit(0b10111111u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnRightmost0Bit(0b01111111u));

    TEST_ASSERT_EQUAL_HEX8(0b10101111u, TurnOnRightmost0Bit(0b10100111u));
}

/**
 * @brief Unittest main
 */
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_TurnOffRightmost1Bit                                  );
    RUN_TEST(test_TurnOnRightmost0Bit                                   );
    return UNITY_END();
}

// end of file {{{1
// vim:ft=c:et:ts=4:nowrap:fdm=marker
