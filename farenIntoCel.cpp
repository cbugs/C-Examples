#include<stdio.h>
#include<conio.h>

int main()
{
    float far,cel;
    printf("What's the temperature in farenheit\n");
    scanf("%f",&far);
    cel=((far-32)*5)/9;
    printf("The temperature in celsius is therefore: %f\n",cel);
    getchar();
    getchar();
    return 0;
}
