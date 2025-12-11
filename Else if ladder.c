#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks: ");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("Congratulations,You got distinction");
    }
    else if(marks>=80)
    {
        printf("Great, You got first class");
    }
    else if(marks>=70)
    {
        printf("Good, You got second class");
    }
    else if(marks>=50)
    {
        printf("Good, But not up to the mark");
    }
    else 
    {
        printf("Disappointed.. You are failed");
    }
    
}
