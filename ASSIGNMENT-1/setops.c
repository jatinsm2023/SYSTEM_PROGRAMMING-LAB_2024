#include <stdio.h>
#include <stdlib.h>
#include "setops.h"
#include "settype.h"

void setprint(struct numset SET)
{
    for (int i = 1; i <= SET.S[0]; i++)
    {
        if (SET.S[i] == 1)
        {
            printf("%d ", i);
        }
    }
}

int setsize(struct numset SET)
{
    int n = 0;
    for (int i = 1; i <= SET.S[0]; i++)
    {
        if (SET.S[i] == 1)
            n++;
    }
    return n;
}

struct numset setaddelt(struct numset SET, int x)
{
    SET.S[x] = 1;
    return SET;
}

struct numset setunion(struct numset A, struct numset B)
{
    struct numset SET = setinit(A.S[0]);
    SET.S[0] = A.S[0];
    for (int i = 1; i <= SET.S[0]; i++)
    {
        if (A.S[i] == 1 || B.S[i] == 1)
        {
            SET.S[i] = 1;
        }
    }
    return SET;
}

struct numset setintersection(struct numset A, struct numset B)
{
    struct numset SET = setinit(A.S[0]);
    SET.S[0] = A.S[0];
    for (int i = 1; i <= SET.S[0]; i++)
    {
        if (A.S[i] == 1 && B.S[i] == 1)
        {
            SET.S[i] = 1;
        }
    }
    return SET;
}