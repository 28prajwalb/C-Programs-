#include<stdio.h>
int main()
{
    int age;
    printf("enter the age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not Eligible");
    }
}

output: 1. enter the age: 20
Eligible to vote

2. enter the age: 13
Not Eligible
