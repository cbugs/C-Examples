#include<stdio.h>
#include<conio.h>
int main()
{
    int mat,eng,fre,sci,eco,avg;
    printf("Enter the marks obtained in Maths\n");
    scanf("%d",&mat);
    printf("Enter the marks obtained in English\n");
    scanf("%d",&eng);
    printf("Enter the marks obtained in French\n");
    scanf("%d",&fre);
    printf("Enter the marks obtained in Science\n");
    scanf("%d",&sci);
    printf("Enter the marks obtained in Economics\n");
    scanf("%d",&eco);
    avg=(mat+eng+fre+sci+eco)/5;
    printf("\n");
    printf("Average marks obtained=%d\n",avg);
    getchar();
    getchar();
    getchar();
    return 0;
}
