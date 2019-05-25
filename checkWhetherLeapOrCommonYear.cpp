#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if(year%4!=0)
    {
    printf("It is a common year");
    }
    
    else if(year%4==0)
    {
    printf("It is a leap year");
    }
    
    getchar();
    getchar();
    getchar();
    return 0;
}
                 
