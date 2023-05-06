#include<stdio.h>
int main()
{
    int Std=0;

    printf("Enter your standard\n");
    scanf("%d",&Std);

    switch(Std)
    {
        case 1:
        printf("Your exam is at 1PM\n");
        break;

        case 2:
        printf("Your exam is at 2PM\n");
        break;

        case 3:
        printf("Your exam is at 3PM\n");
        break;

        case 4:
        printf("Your exam is at 4PM\n");
        break;

        default:
        printf("Invalid standard...\n");
        
    }
    return 0;
}