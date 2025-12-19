#include "unity.h"

void setUp(void);
void tearDown(void);

void test_func1_case1(void);
void test_func1_case2(void);

void test_func2_case1(void);
void test_func2_case2(void);

void test_func3_case1(void);
void test_func3_case2(void);

void test_func4_case1(void);
void test_func4_case2(void);

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_func1_case1);
    RUN_TEST(test_func1_case2);

    RUN_TEST(test_func2_case1);
    RUN_TEST(test_func2_case2);

    RUN_TEST(test_func3_case1);
    RUN_TEST(test_func3_case2);

    RUN_TEST(test_func4_case1);
    RUN_TEST(test_func4_case2);

    return UNITY_END();
}