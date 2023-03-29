

// Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n*2;i++)
    {
        if(i%2==1)
        sum=sum+i;
    }
    printf("sum =%d",sum);
    return 0;
}

/*
Enter the value of n
5
sum =25
*/