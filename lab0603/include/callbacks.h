#ifndef CALLBACKS_H
#define CALLBACKS_H

typedef void (*ActionInt)(int);

void for_range(int from, int to, ActionInt act);

#endif