#include "soln3.h"

int findterm3(recrel3 r3, int n)
{
    if (n == 0)
        return r3.a0;
    if (n == 1)
        return r3.a1;
    if (n == 2)
        return r3.a2;
    return r3.c3 * findterm3(r3, n - 3) + r3.c2 * findterm3(r3, n - 2) + r3.c1 * findterm3(r3, n - 1) + r3.d;
}

