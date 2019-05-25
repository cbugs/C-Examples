#include<stdio.h>
#include<conio.h>
int main()
{
    int numb,fird,secd,thid,ford,fifd,sumd;
    printf("Enter a five digit number");
    scanf("%d",&numb);
    fird=numb%10;
    secd=((numb%100)-(numb%10))/10;
    thid=((numb%1000)-(numb%100))/100;
    ford=((numb%10000)-(numb%1000))/1000;
    fifd=((numb%100000)-(numb%10000))/10000;
    sumd=fird+secd+thid+ford+fifd;
    printf("The sum of the digits=%d",sumd);
    getchar();
    getchar();
    return 0;
}
    
    
