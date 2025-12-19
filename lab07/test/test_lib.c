#include "unity.h"
#include "lib.h"
#include <math.h>

/* Define PI as a compile-time constant */
#define PI 3.141592653589793

void setUp(void) {}
void tearDown(void) {}

/* ===== func1 tests ===== */

void test_func1_case1(void) {
    double x = 2.0;
    double y = 1.0;
    double z = 3.0;
    double w = 0.5;
    double v = 4.0;

    double expected = -0.13243837482183318;
    TEST_ASSERT_DOUBLE_WITHIN(1e-9, expected, func1(x, y, z, w, v));
}

void test_func1_case2(void) {
    double x = 1.5;
    double y = 0.3;
    double z = 2.25;
    double w = -0.2;
    double v = 0.0;

    double expected = -0.9879889369300087;
    TEST_ASSERT_DOUBLE_WITHIN(1e-9, expected, func1(x, y, z, w, v));
}

/* ===== func2 tests ===== */

void test_func2_case1(void) {
    double x = 1.0;
    double y = 2.0;
    double z = 3.0;
    double w = 0.5;
    double v = 0.2;

    double expected = 4.008806262038432;
    TEST_ASSERT_DOUBLE_WITHIN(1e-9, expected, func2(x, y, z, w, v));
}

void test_func2_case2(void) {
    double x = 0.1;
    double y = 0.2;
    double z = 4.0;
    double w = 0.0;
    double v = 0.5;

    double expected = 4.62620248433186;
    TEST_ASSERT_DOUBLE_WITHIN(1e-9, expected, func2(x, y, z, w, v));
}

/* ===== func3 tests ===== */

void test_func3_case1(void) {
    double x = 1.0;
    double y = 2.0;
    double z = 3.0;
    double w = PI / 4.0;
    double v = 4.0;

    double expected = 1.662866185587327;
    TEST_ASSERT_DOUBLE_WITHIN(1e-9, expected, func3(x, y, z, w, v));
}

void test_func3_case2(void) {
    double x = 0.2;
    double y = 1.1;
    double z = 0.7;
    double w = 0.3;
    double v = 2.0;

    double expected = 0.3092205109876526;
    TEST_ASSERT_DOUBLE_WITHIN(1e-9, expected, func3(x, y, z, w, v));
}

/* ===== func4 tests ===== */

void test_func4_case1(void) {
    double x = 2.0;
    double y = 3.0;
    double z = 4.0;
    double w = PI / 3.0;
    double v = 0.0;

    double expected = 2.386294361119891;
    TEST_ASSERT_DOUBLE_WITHIN(1e-9, expected, func4(x, y, z, w, v));
}

void test_func4_case2(void) {
    double x = 0.5;
    double y = 0.2;
    double z = 9.0;
    double w = PI / 6.0;
    double v = 0.0;

    double expected = -1.9157546545593616;
    TEST_ASSERT_DOUBLE_WITHIN(1e-9, expected, func4(x, y, z, w, v));
}