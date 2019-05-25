#include<stdio.h>
int main()
{
    char A;
    int B;
    printf("Enter: ");
    scanf("%c",&A);
    B=A;
    if((B>=65)&&(B<=90))
    {
                        printf("It is a capital letter");
                        }
    else if((B>=97)&&(B<=122))
    {
         printf("It is a small letter");
         }
    else if((B>=48)&&(B<=57))
    {
         printf("It is an integer");
         }
    else 
    {
         printf("It is a special symbol");
         }
    getchar();
    getchar();
    getchar();
    return 0;
}
