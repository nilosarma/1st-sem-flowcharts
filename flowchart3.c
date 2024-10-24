#include<stdio.h>
int main()
{
    int P,five, ten, twenty, fifty;
    printf("enter a price ");
    scanf("%d",&P);
    fifty=(P/50);
    twenty=(P-fifty*50)/20;
    ten=(P-fifty*50-twenty*20)/10;
    five=(P-fifty*50-twenty*20-ten*10)/5;
    printf("fifty = %d\ntwenty = %d\nten = %d\nfive = %d\n",fifty,twenty,ten,five);
    return 0;
}   