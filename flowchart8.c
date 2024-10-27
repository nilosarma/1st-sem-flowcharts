#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d", &n);
    if (n > 0)
        printf("The number is positive");
    else if (n < 0)
        printf("The number is negetive");
    else
        printf("the number is 0");
    return 0;
}