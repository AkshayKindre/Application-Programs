#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int Arr[5];                 //static memory allocation

    int *p =NULL;
    p = (int*)malloc(5 * sizeof(int));      // Dynamic memory allocation using malloc

    int *q =NULL;
    q = (int *)calloc(5,sizeof(int));       //Dynamic allocation using calloc
    

    return 0;
}