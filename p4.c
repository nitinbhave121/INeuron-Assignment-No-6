

//Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>

int main()
{
    int i,sum=0,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    sum=sum+i*i;
    printf("Sum=%d\n",sum);
    return 0;
}

/*
Enter the value of n
5
Sum=55
*/