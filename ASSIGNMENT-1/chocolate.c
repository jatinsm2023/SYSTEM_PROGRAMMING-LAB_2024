#include <stdio.h>
#include <stdlib.h>
#include "setops.h"
#include "settype.h"
#include <time.h>
// unsigned int t;
// t = srand((unsigned int)time(NULL));
int howmanypackets(int N)
{
    int x = 1;
    int randnum;
    struct numset SET = setinit(N);

    while (setsize(SET) < N)
    {
        randnum = (rand() % (N)) + 1;
        SET = setaddelt(SET, randnum);
#ifndef STAT_MODE
        printf("packet %d has copoun %d, Available coupons: ", x, randnum);
        printf("{");
        setprint(SET);
        printf("}");
        printf("\n");
#endif
        x++;
    }
    return x - 1;
}

int main()
{
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
#ifndef STAT_MODE
    printf("+++ Interactive mode \n");
    int numpackets = howmanypackets(N);
    printf("... %d packets were bought\n", numpackets);
#endif
#ifdef STAT_MODE
    printf("+++ Statistics mode \n");
    long long int sum = 0;
    for (int i = 1; i <= 1000; i++)
    {
        sum += howmanypackets(N);
    }
    printf("--- Average number of packets to buy = %lf\n", sum *(1.0)/1000 * (1.0));
#endif
exit(0);
}
