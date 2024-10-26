#include<stdio.h>
int main()
{
    int A, B;
    printf("Enter the value of A and B: ");
    scanf("%d%d", &A, &B);
    printf("Before interchange:\nA = %d B = %d", A, B);
    A = A + B;
    B = A - B;
    A = A - B;
    printf("\nAfter interchange:\nA = %d B = %d", A, B);
    return 0;
}