#include<stdio.h>
int main()
{
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);
    if(N==10)
         printf("%d is equal 10",N);
    else if(N>10)
         printf("%d is greater than 10",N);
    else
         printf("%d is lesser than 10",N);
    return 0;
}