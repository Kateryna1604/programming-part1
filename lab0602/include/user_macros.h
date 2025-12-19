#ifndef USER_MACROS_H
#define USER_MACROS_H

#define POLY3(out, a, b, c, d, x) \
do { \
    double _x = (x); \
    (out) = (a)*_x*_x*_x + (b)*_x*_x + (c)*_x + (d); \
} while (0)

#define DOLY3(out, a, b, c, d, x) \
do { \
    double _x = (x); \
    (out) = 3*(a)*_x*_x + 2*(b)*_x + (c); \
} while (0)

#endif 