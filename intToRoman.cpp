#include<stdlib.h>
#include<stdio.h>
int main()
{
int year,ones,tens,hundreds,thousands;

printf("Enter the year: ");
scanf("%d",&year);
//Since they started using the Vbar after 3999
if(year>3999)
{
printf("Enter a year before 4000");
}

else
{
ones=year%10;
tens=(year%100-ones)/10;
hundreds=(year%1000-tens-ones)/100;
thousands=(year%10000-hundreds-tens-ones)/1000;

for(thousands;thousands>0;thousands--)
{
printf("M");
}

if (hundreds==4)
printf("CD");
else if(hundreds==9)
printf("CM");
else
{
if(hundreds<=3)
for(hundreds;hundreds>0;hundreds--)
printf("C");
else if(hundreds>=5)
printf("D");
for(hundreds;hundreds>5;hundreds--)
printf("C");
}

if (tens==4)
printf("XL");
else if(tens==9)
printf("XC");
else
{
if(tens<=3)
for(tens;tens>0;tens--)
printf("X");
else if(tens>=5)
printf("L");
for(tens;tens>5;tens--)
printf("I");
}

if (ones==4)
printf("IV");
else if(ones==9)
printf("IX");
else
{
if(ones<=3)
for(ones;ones>0;ones--)
printf("I");
else if(ones>=5)
printf("V");
for(ones;ones>5;ones--)
printf("I");
}
}
printf("\n");
system("pause");
return 0;
}
