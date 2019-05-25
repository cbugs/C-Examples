#include<stdio.h>
int main()
{
    float hardness,carbon,strength;
    printf("Enter the hardness: ");
    scanf("%f",&hardness);
    printf("Enter the carbon: ");
    scanf("%f",&carbon);
    printf("Enter the strength: ");
    scanf("%f",&strength);
    printf("\n");
    
    if((hardness>50)&&(carbon<0.7)&&(strength>5600))
    {
         printf("Grade 10");
         }
    else if((hardness>50)&&(carbon<0.7))
    {
         printf("Grade 9");
         }
    else if((carbon<0.7)&&(strength>5600))
    {
         printf("Grade 8");
         }
    else if((hardness>50)&&(strength>5600))
    {
         printf("Grade 7");
         }
    else if((hardness>50)||(carbon<0.7)||(strength>5600))
    {
         printf("Grade 6");
         }
    else 
    {
         printf("Grade 5");
         }
         
    getchar();
    getchar();
    return 0;
}
