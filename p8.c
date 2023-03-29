
//. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int i,num,flag=0;
    printf("Enter any number\n");
    scanf("%d",&num);
    for(i=2;i<num-1;i++)
    {
        if(num%i==0)
        flag=1;
    }
    if(flag==1)
    printf("Not Prime\n");
    else
    printf("Prime\n");

    return 0;
}

/*
Enter any number
12
Not Prime
*/