
//. Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
    int i,n;
    long fact=1;
    printf("Enter a number to find its factorial\n");
    scanf("%d",&n);
    if(n<0)
    printf("Factorial not possibel\n");
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%ld",fact);
    return 0;
}

/*
Enter a number to find its factorial
10
3628800
*/