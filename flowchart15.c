#include<stdio.h>
int main()
{
    int A, B;
    printf("Enter two numbers");
    scanf("%d%d", &A, &B);
    if(A%B==0)
    printf("divisible");
    else
    printf("not divisible");
    return 0;

}
