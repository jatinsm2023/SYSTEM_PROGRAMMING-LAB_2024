#include "soln2.h"

int findterm2(recrel2 r2, int n)
{
    if (n == 0)
        return r2.a0;
    if (n == 1)
        return r2.a1;
    return r2.c2 * findterm2(r2, n - 2) + r2.c1 * findterm2(r2, n - 1) + r2.d;
}

