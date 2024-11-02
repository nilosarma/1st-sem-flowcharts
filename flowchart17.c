#include <stdio.h>
int main()
{
    int N;
    printf("Enter a number");
    scanf("%d", &N);
    if ((N < 0) || (N > 29))
        printf("Invalid");
    else if (N <= 9)
        printf("0-9 group");
    else if (N <= 19)
        printf("10-19 group");
    else
        printf("20-29 group");
    return 0;
}