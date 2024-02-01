#include "soln1.h"

int findterm1(recrel1 r1, int n)
{
    if(n==0)return r1.a0;
    return (r1.c1)*findterm1(r1,n-1)+r1.d;
}
