#include<stdio.h>
int main()
{
    int days;
    printf("Enter the amount of days late");
    scanf("%d: ",&days);
    if((days<=5)&&(days>0))
    {
               printf("Fine 50 paise");
               }
    else if((days>5)&&(days<=10))
    {
         printf("Fine Rupees 1");
         }
    else if(days>10)
    {
         printf("Fine Rupees 10");
         }
    else
    {
        printf("No need to fine");
        }
    getchar();
    getchar();
    return 0;
}
