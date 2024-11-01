#include<stdio.h>
int main()
{
    int A;
    printf("Enter a number");
    scanf("%d", &A);
    if(A%7==0)
    printf("divisible");
    else
    printf("not divisible");
    return 0;
}