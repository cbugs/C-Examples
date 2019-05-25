#include<stdio.h>
int main()
{
    int numb,first_digit,last_digit,sum;
    
    printf("Enter a four-digit number\n");
    scanf("%d",&numb);
    first_digit=(numb-(numb%1000))/1000;
    last_digit=(numb%10);
    sum=first_digit+last_digit;
    printf("Sum of first and last digit=%d",sum);
    getchar();
    getchar();
    return 0;
}
