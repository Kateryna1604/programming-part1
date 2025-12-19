#include "unity.h"
#include "lib.h"
#include <math.h>

#define PI 3.14159265358979323846

void setUp() {}
void tearDown() {}

void test_func1() {
    double x=2, y=1, z=3, w=0.5, v=4;
    TEST_ASSERT_EQUAL_DOUBLE(
        x * (sin(y) - sqrt(z)) + exp(w),
        func1(x,y,z,w,v)
    );
}

void test_func2() {
    double x=0, y=PI/2;
    TEST_ASSERT_EQUAL_DOUBLE(
        sin(x) + cos(y),
        func2(x,y,0,0,0)
    );
}

void test_func3() {
    double x=1, y=2, z=3, w=PI/4, v=4;
    TEST_ASSERT_EQUAL_DOUBLE(
        (exp(x)+y*y-z) * tan(w) / sqrt(v+1),
        func3(x,y,z,w,v)
    );
}

void test_func4() {
    double x=2, y=3, z=4, w=PI/3;
    TEST_ASSERT_EQUAL_DOUBLE(
        x + log(y+1) - sqrt(z)*cos(w),
        func4(x,y,z,w,0)
    );
}