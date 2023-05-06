#include<stdio.h>

#include "ppa.h"

int main()
{
    struct Demo obj;

    printf("Inside main\n");
    printf("Rate of Interest is : %f\n", ROI);

    printf("Fees of LB is : %d\n", FEES);

    printf("Size of demo structure is : %d\n", sizeof(obj));


    return 0;
}