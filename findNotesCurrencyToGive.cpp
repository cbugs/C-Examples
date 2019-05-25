#include<stdio.h>
int main()
{
    int N1=1,N2=10,N3=50,N4=100,qtyN1,qtyN2,qtyN3,qtyN4,drawing;
    
    printf("Enter amount withdrawn\n");
    scanf("%d",&drawing);
    qtyN4=drawing/100;
    drawing=drawing-(qtyN4*100);
    qtyN3=drawing/50;
    drawing=drawing-(qtyN3*50);
    qtyN2=drawing/10;
    drawing=drawing-(qtyN2*10);
    qtyN1=drawing;
    
    printf("\nNumber of 100 notes=%d\nNumber of 50 notes=%d\nNumber of 10 notes=%d\nNumber of 1 notes=%d\n",qtyN4,qtyN3,qtyN2,qtyN1);
    
    getchar();
    getchar();
    getchar();
    return 0;
}
