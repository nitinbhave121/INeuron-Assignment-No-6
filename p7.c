
// . Write a program to count digits in a given number

#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter any number\n");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        count++;
    }

    printf("Number of digits are %d ",count);
    return 0;

}

/*
Enter any number
1234
Number of digits are 4
*/