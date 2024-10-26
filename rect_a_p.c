#include<stdio.h>
int main()
{
    int l, b, A, P;
    printf("Enter the length ");
    scanf("%d",&l);
    printf("Enter the breadth ");
    scanf("%d",&b);
    A = l * b;
    P = 2*l + 2*b;
    printf("The area of the rectangle is %d\nThe parameter of the rectangle is %d\n", A, P);
    return 0;
}
