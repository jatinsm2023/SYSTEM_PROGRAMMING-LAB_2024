#include <stdio.h>
#include <stdlib.h>
#include "settype.h"

struct numset setinit(int N)
{
    struct numset SET;
    SET.S = (int *)calloc(N+1, sizeof(int));
    SET.S[0] = N;
    return SET;
}

struct numset setdestroy(struct numset SET)
{
    free(SET.S);
    return SET;
}

struct numset setrand(int N)
{
    struct numset SET = setinit(N);
    for (int i = 1; i <= N; i++)
    {
        SET.S[i] = rand() % 2;
    }
    return SET;
}
