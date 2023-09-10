#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=num;i>0;i--)
    {
        printf("%d\n",i);
    }
    printf("Blast off to the moon!\n");
    return 0;
}

