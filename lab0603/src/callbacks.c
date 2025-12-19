#include "callbacks.h"

void for_range(int from, int to, ActionInt act) {
    if (!act) return;      
    if (from > to) return;  

    for (int i = from; i <= to; ++i) {
        act(i);             
    }
}