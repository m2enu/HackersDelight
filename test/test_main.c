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
static void test_TurnOffTrailing1Bits(void);
static void test_TurnOnTrailing0Bits(void);
static void test_Rightmost0BitPosition(void);
static void test_Rightmost1BitPosition(void);
static void test_Trailing0BitsPosition(void);
static void test_Trailing1BitsPosition(void);
static void test_IsolateRightmost1Bit(void);

/**
 * @brief       Test for TurnOffRightmost1Bit
 */
static void test_TurnOffRightmost1Bit(void)
{
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffRightmost1Bit(0b00000000u));
    TEST_ASSERT_EQUAL_HEX8(0b11111110u, TurnOffRightmost1Bit(0b11111111u));

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
 * @brief       Test for TurnOnRightmost0Bit
 */
static void test_TurnOnRightmost0Bit(void)
{
    TEST_ASSERT_EQUAL_HEX8(0b00000001u, TurnOnRightmost0Bit(0b00000000u));
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
 * @brief       Test for TurnOffTrailing1Bits
 */
static void test_TurnOffTrailing1Bits(void)
{
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffTrailing1Bits(0b00000000u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffTrailing1Bits(0b11111111u));

    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffTrailing1Bits(0b00000001u));
    TEST_ASSERT_EQUAL_HEX8(0b00000010u, TurnOffTrailing1Bits(0b00000010u));
    TEST_ASSERT_EQUAL_HEX8(0b00000100u, TurnOffTrailing1Bits(0b00000100u));
    TEST_ASSERT_EQUAL_HEX8(0b00001000u, TurnOffTrailing1Bits(0b00001000u));
    TEST_ASSERT_EQUAL_HEX8(0b00010000u, TurnOffTrailing1Bits(0b00010000u));
    TEST_ASSERT_EQUAL_HEX8(0b00100000u, TurnOffTrailing1Bits(0b00100000u));
    TEST_ASSERT_EQUAL_HEX8(0b01000000u, TurnOffTrailing1Bits(0b01000000u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffTrailing1Bits(0b10000000u));

    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffTrailing1Bits(0b00000001u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffTrailing1Bits(0b00000011u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffTrailing1Bits(0b00000111u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffTrailing1Bits(0b00001111u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffTrailing1Bits(0b00011111u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffTrailing1Bits(0b00111111u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, TurnOffTrailing1Bits(0b01111111u));

    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffTrailing1Bits(0b10000000u));
    TEST_ASSERT_EQUAL_HEX8(0b11000000u, TurnOffTrailing1Bits(0b11000000u));
    TEST_ASSERT_EQUAL_HEX8(0b11100000u, TurnOffTrailing1Bits(0b11100000u));
    TEST_ASSERT_EQUAL_HEX8(0b11110000u, TurnOffTrailing1Bits(0b11110000u));
    TEST_ASSERT_EQUAL_HEX8(0b11111000u, TurnOffTrailing1Bits(0b11111000u));
    TEST_ASSERT_EQUAL_HEX8(0b11111100u, TurnOffTrailing1Bits(0b11111100u));
    TEST_ASSERT_EQUAL_HEX8(0b11111110u, TurnOffTrailing1Bits(0b11111110u));

    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffTrailing1Bits(0b10000001u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffTrailing1Bits(0b10000011u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffTrailing1Bits(0b10000111u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffTrailing1Bits(0b10001111u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffTrailing1Bits(0b10011111u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, TurnOffTrailing1Bits(0b10111111u));

    TEST_ASSERT_EQUAL_HEX8(0b10100000u, TurnOffTrailing1Bits(0b10100111u));
}

/**
 * @brief       Test for TurnOnTrailing0Bits
 */
static void test_TurnOnTrailing0Bits(void)
{
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnTrailing0Bits(0b00000000u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnTrailing0Bits(0b11111111u));

    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnTrailing0Bits(0b11111110u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnTrailing0Bits(0b11111100u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnTrailing0Bits(0b11111000u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnTrailing0Bits(0b11110000u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnTrailing0Bits(0b11100000u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnTrailing0Bits(0b11000000u));
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, TurnOnTrailing0Bits(0b10000000u));

    TEST_ASSERT_EQUAL_HEX8(0b00000001u, TurnOnTrailing0Bits(0b00000001u));
    TEST_ASSERT_EQUAL_HEX8(0b00000011u, TurnOnTrailing0Bits(0b00000011u));
    TEST_ASSERT_EQUAL_HEX8(0b00000111u, TurnOnTrailing0Bits(0b00000111u));
    TEST_ASSERT_EQUAL_HEX8(0b00001111u, TurnOnTrailing0Bits(0b00001111u));
    TEST_ASSERT_EQUAL_HEX8(0b00011111u, TurnOnTrailing0Bits(0b00011111u));
    TEST_ASSERT_EQUAL_HEX8(0b00111111u, TurnOnTrailing0Bits(0b00111111u));
    TEST_ASSERT_EQUAL_HEX8(0b01111111u, TurnOnTrailing0Bits(0b01111111u));

    TEST_ASSERT_EQUAL_HEX8(0b01111111u, TurnOnTrailing0Bits(0b01111110u));
    TEST_ASSERT_EQUAL_HEX8(0b01111111u, TurnOnTrailing0Bits(0b01111100u));
    TEST_ASSERT_EQUAL_HEX8(0b01111111u, TurnOnTrailing0Bits(0b01111000u));
    TEST_ASSERT_EQUAL_HEX8(0b01111111u, TurnOnTrailing0Bits(0b01110000u));
    TEST_ASSERT_EQUAL_HEX8(0b01111111u, TurnOnTrailing0Bits(0b01100000u));
    TEST_ASSERT_EQUAL_HEX8(0b01111111u, TurnOnTrailing0Bits(0b01000000u));

    TEST_ASSERT_EQUAL_HEX8(0b01101111u, TurnOnTrailing0Bits(0b01101110u));
    TEST_ASSERT_EQUAL_HEX8(0b01101111u, TurnOnTrailing0Bits(0b01101100u));
    TEST_ASSERT_EQUAL_HEX8(0b01101111u, TurnOnTrailing0Bits(0b01101000u));

    TEST_ASSERT_EQUAL_HEX8(0b10101111u, TurnOnTrailing0Bits(0b10101000u));
}

/**
 * @brief       Test for Rightmost0BitPosition
 */
static void test_Rightmost0BitPosition(void)
{
    TEST_ASSERT_EQUAL_HEX8(0b00000001u, Rightmost0BitPosition(0b00000000u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, Rightmost0BitPosition(0b11111111u));

    TEST_ASSERT_EQUAL_HEX8(0b00000010u, Rightmost0BitPosition(0b00000001u));
    TEST_ASSERT_EQUAL_HEX8(0b00000100u, Rightmost0BitPosition(0b00000011u));
    TEST_ASSERT_EQUAL_HEX8(0b00001000u, Rightmost0BitPosition(0b00000111u));
    TEST_ASSERT_EQUAL_HEX8(0b00010000u, Rightmost0BitPosition(0b00001111u));
    TEST_ASSERT_EQUAL_HEX8(0b00100000u, Rightmost0BitPosition(0b00011111u));
    TEST_ASSERT_EQUAL_HEX8(0b01000000u, Rightmost0BitPosition(0b00111111u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, Rightmost0BitPosition(0b01111111u));

    TEST_ASSERT_EQUAL_HEX8(0b00001000u, Rightmost0BitPosition(0b10100111u));
}

/**
 * @brief       Test for Rightmost1BitPosition
 */
static void test_Rightmost1BitPosition(void)
{
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, Rightmost1BitPosition(0b00000000u));
    TEST_ASSERT_EQUAL_HEX8(0b11111110u, Rightmost1BitPosition(0b11111111u));

    TEST_ASSERT_EQUAL_HEX8(0b11111110u, Rightmost1BitPosition(0b00000001u));
    TEST_ASSERT_EQUAL_HEX8(0b11111101u, Rightmost1BitPosition(0b00000010u));
    TEST_ASSERT_EQUAL_HEX8(0b11111011u, Rightmost1BitPosition(0b00000100u));
    TEST_ASSERT_EQUAL_HEX8(0b11110111u, Rightmost1BitPosition(0b00001000u));
    TEST_ASSERT_EQUAL_HEX8(0b11101111u, Rightmost1BitPosition(0b00010000u));
    TEST_ASSERT_EQUAL_HEX8(0b11011111u, Rightmost1BitPosition(0b00100000u));
    TEST_ASSERT_EQUAL_HEX8(0b10111111u, Rightmost1BitPosition(0b01000000u));
    TEST_ASSERT_EQUAL_HEX8(0b01111111u, Rightmost1BitPosition(0b10000000u));

    TEST_ASSERT_EQUAL_HEX8(0b11111110u, Rightmost1BitPosition(0b10000001u));
    TEST_ASSERT_EQUAL_HEX8(0b11111101u, Rightmost1BitPosition(0b10000010u));
    TEST_ASSERT_EQUAL_HEX8(0b11111011u, Rightmost1BitPosition(0b10000100u));
    TEST_ASSERT_EQUAL_HEX8(0b11110111u, Rightmost1BitPosition(0b10001000u));
    TEST_ASSERT_EQUAL_HEX8(0b11101111u, Rightmost1BitPosition(0b10010000u));
    TEST_ASSERT_EQUAL_HEX8(0b11011111u, Rightmost1BitPosition(0b10100000u));
    TEST_ASSERT_EQUAL_HEX8(0b10111111u, Rightmost1BitPosition(0b11000000u));

    TEST_ASSERT_EQUAL_HEX8(0b11110111u, Rightmost1BitPosition(0b10101000u));
}

/**
 * @brief       Test for Trailing0BitsPosition
 */
static void test_Trailing0BitsPosition(void)
{
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, Trailing0BitsPosition(0b00000000u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, Trailing0BitsPosition(0b11111111u));

    TEST_ASSERT_EQUAL_HEX8(0b00000001u, Trailing0BitsPosition(0b11111110u));
    TEST_ASSERT_EQUAL_HEX8(0b00000011u, Trailing0BitsPosition(0b11111100u));
    TEST_ASSERT_EQUAL_HEX8(0b00000111u, Trailing0BitsPosition(0b11111000u));
    TEST_ASSERT_EQUAL_HEX8(0b00001111u, Trailing0BitsPosition(0b11110000u));
    TEST_ASSERT_EQUAL_HEX8(0b00011111u, Trailing0BitsPosition(0b11100000u));
    TEST_ASSERT_EQUAL_HEX8(0b00111111u, Trailing0BitsPosition(0b11000000u));
    TEST_ASSERT_EQUAL_HEX8(0b01111111u, Trailing0BitsPosition(0b10000000u));

    TEST_ASSERT_EQUAL_HEX8(0b00000001u, Trailing0BitsPosition(0b01111110u));
    TEST_ASSERT_EQUAL_HEX8(0b00000011u, Trailing0BitsPosition(0b01111100u));
    TEST_ASSERT_EQUAL_HEX8(0b00000111u, Trailing0BitsPosition(0b01111000u));
    TEST_ASSERT_EQUAL_HEX8(0b00001111u, Trailing0BitsPosition(0b01110000u));
    TEST_ASSERT_EQUAL_HEX8(0b00011111u, Trailing0BitsPosition(0b01100000u));
    TEST_ASSERT_EQUAL_HEX8(0b00111111u, Trailing0BitsPosition(0b01000000u));

    TEST_ASSERT_EQUAL_HEX8(0b00000111u, Trailing0BitsPosition(0b01101000u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, Trailing0BitsPosition(0b01101001u));

    TEST_ASSERT_EQUAL_HEX8(0b00000111u, Trailing0BitsPosition(0b01011000u));
}

/**
 * @brief       Test for Trailing1BitsPosition
 */
static void test_Trailing1BitsPosition(void)
{
    TEST_ASSERT_EQUAL_HEX8(0b11111111u, Trailing1BitsPosition(0b00000000u));
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, Trailing1BitsPosition(0b11111111u));

    TEST_ASSERT_EQUAL_HEX8(0b11111110u, Trailing1BitsPosition(0b00000001u));
    TEST_ASSERT_EQUAL_HEX8(0b11111100u, Trailing1BitsPosition(0b00000011u));
    TEST_ASSERT_EQUAL_HEX8(0b11111000u, Trailing1BitsPosition(0b00000111u));
    TEST_ASSERT_EQUAL_HEX8(0b11110000u, Trailing1BitsPosition(0b00001111u));
    TEST_ASSERT_EQUAL_HEX8(0b11100000u, Trailing1BitsPosition(0b00011111u));
    TEST_ASSERT_EQUAL_HEX8(0b11000000u, Trailing1BitsPosition(0b00111111u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, Trailing1BitsPosition(0b01111111u));

    TEST_ASSERT_EQUAL_HEX8(0b11111110u, Trailing1BitsPosition(0b10000001u));
    TEST_ASSERT_EQUAL_HEX8(0b11111100u, Trailing1BitsPosition(0b10000011u));
    TEST_ASSERT_EQUAL_HEX8(0b11111000u, Trailing1BitsPosition(0b10000111u));
    TEST_ASSERT_EQUAL_HEX8(0b11110000u, Trailing1BitsPosition(0b10001111u));
    TEST_ASSERT_EQUAL_HEX8(0b11100000u, Trailing1BitsPosition(0b10011111u));
    TEST_ASSERT_EQUAL_HEX8(0b11000000u, Trailing1BitsPosition(0b10111111u));

    TEST_ASSERT_EQUAL_HEX8(0b11111000u, Trailing1BitsPosition(0b10100111u));
}

/**
 * @brief       Test for IsolateRightmost1Bit
 */
static void test_IsolateRightmost1Bit(void)
{
    TEST_ASSERT_EQUAL_HEX8(0b00000000u, IsolateRightmost1Bit(0b00000000u));
    TEST_ASSERT_EQUAL_HEX8(0b00000001u, IsolateRightmost1Bit(0b11111111u));

    TEST_ASSERT_EQUAL_HEX8(0b00000001u, IsolateRightmost1Bit(0b00000001u));
    TEST_ASSERT_EQUAL_HEX8(0b00000010u, IsolateRightmost1Bit(0b00000010u));
    TEST_ASSERT_EQUAL_HEX8(0b00000100u, IsolateRightmost1Bit(0b00000100u));
    TEST_ASSERT_EQUAL_HEX8(0b00001000u, IsolateRightmost1Bit(0b00001000u));
    TEST_ASSERT_EQUAL_HEX8(0b00010000u, IsolateRightmost1Bit(0b00010000u));
    TEST_ASSERT_EQUAL_HEX8(0b00100000u, IsolateRightmost1Bit(0b00100000u));
    TEST_ASSERT_EQUAL_HEX8(0b01000000u, IsolateRightmost1Bit(0b01000000u));
    TEST_ASSERT_EQUAL_HEX8(0b10000000u, IsolateRightmost1Bit(0b10000000u));


    TEST_ASSERT_EQUAL_HEX8(0b00000001u, IsolateRightmost1Bit(0b10000001u));
    TEST_ASSERT_EQUAL_HEX8(0b00000010u, IsolateRightmost1Bit(0b10000010u));
    TEST_ASSERT_EQUAL_HEX8(0b00000100u, IsolateRightmost1Bit(0b10000100u));
    TEST_ASSERT_EQUAL_HEX8(0b00001000u, IsolateRightmost1Bit(0b10001000u));
    TEST_ASSERT_EQUAL_HEX8(0b00010000u, IsolateRightmost1Bit(0b10010000u));
    TEST_ASSERT_EQUAL_HEX8(0b00100000u, IsolateRightmost1Bit(0b10100000u));
    TEST_ASSERT_EQUAL_HEX8(0b01000000u, IsolateRightmost1Bit(0b11000000u));

    TEST_ASSERT_EQUAL_HEX8(0b00001000u, IsolateRightmost1Bit(0b00011000u));
    TEST_ASSERT_EQUAL_HEX8(0b00001000u, IsolateRightmost1Bit(0b01111000u));

    TEST_ASSERT_EQUAL_HEX8(0b00001000u, IsolateRightmost1Bit(0b01011000u));
}

/**
 * @brief Unittest main
 */
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_TurnOffRightmost1Bit                                  );
    RUN_TEST(test_TurnOnRightmost0Bit                                   );
    RUN_TEST(test_TurnOffTrailing1Bits                                  );
    RUN_TEST(test_TurnOnTrailing0Bits                                   );
    RUN_TEST(test_Rightmost0BitPosition                                 );
    RUN_TEST(test_Rightmost1BitPosition                                 );
    RUN_TEST(test_Trailing0BitsPosition                                 );
    RUN_TEST(test_Trailing1BitsPosition                                 );
    RUN_TEST(test_IsolateRightmost1Bit                                  );
    return UNITY_END();
}

// end of file {{{1
// vim:ft=c:et:ts=4:nowrap:fdm=marker
