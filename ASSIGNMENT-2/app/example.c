#include <stdio.h>
#include <stdlib.h>
#include "../lib/order1/soln1.h"
#include "../lib/order2/soln2.h"
#include "../lib/order3/soln3.h"

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    recrel1 r1;
    recrel2 r2;
    recrel3 r3;
    r1.a0 = 0;
    r1.c1 = 2;
    r1.d = 1;

    printf("ToH(%d) = %d\n", n, findterm1(r1,n));

    r2.a0 = 5;
    r2.a1 = 6;
    r2.c1 = 1;
    r2.c2 = 1;
    r2.d = -5;

    printf("Fib(%d) + 5 = %d\n", n,findterm2(r2,n));

    r3.a0 = 0;
    r3.a1 = 1;
    r3.a2= 1;
    r3.c1 = 0;
    r3.c2 = 2;
    r3.c3 = 1;
    r3.d = 0;

    printf("Fib(%d) = %d\n", n, findterm3(r3,n));
    // exit(0);

    return 0;
}