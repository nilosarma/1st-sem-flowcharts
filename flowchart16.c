#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Enter three numbers");
    scanf("%d%d%d", &A, &B, &C);
    if ((A > B && B > C)|| (C>B && B>A))
        printf("%d is second largest \n", B);
    else if ((B>A && A>C)||(C>A && A>B))
        printf("%d is secod largest \n", A);
    else
        printf("%d is second largest \n", C);
    return 0;
}
