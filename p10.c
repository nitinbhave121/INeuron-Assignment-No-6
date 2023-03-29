

// . Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int i,n,rem,rev=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The Reversed Number = %d ",rev);
    return 0;
}

/*
Enter any number
12345
The Reversed Number = 54321
*/