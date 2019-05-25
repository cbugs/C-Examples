
#include<stdio.h>
#include<stdlib.h>
int centuryOffset(int );
int yearOffset(int );
int monthOffset(int );
int checkIfCorrect(int ,int );
int giveMonthDays(int ,int );
int printCalender(int ,int );
int main()
{
int year,month,century,yearMiCent,co,mo,yo,weekday,check,days;
printf("Please enter the year: ");
scanf("%d",&year);
printf("Please enter the month in numerical equivalent: ");
scanf("%d",&month);
printf("\n\n\n");
check=checkIfCorrect(year,month);
if (check==1)
{
yearMiCent=year%100;
century=year-yearMiCent;
co=centuryOffset(century);
mo=monthOffset(month);
yo=yearOffset(yearMiCent);
weekday=(co+mo+yo+1)%7;
days=giveMonthDays(month,year);
//Check whether year is leap to minus 1 if month is 1 or 2.If weekday is 0 then it is returned to 6.
if((month<=2)&&((year%4==0 && year%100!=0)||(year%400==0)))
{
                           if(weekday>0)
                           {
                                     weekday=weekday-1;
                                     }
                           else
                           {
                               weekday=6;
                               }
                                     }
                                     
printf("\t\t\t  %d\n",year);
switch(month)
{
case 1:
     printf("\t\t\tJanuary\n\n");
     break;
case 2:
     printf("\t\t\tFebruary\n\n");
     break;
case 3:
     printf("\t\t\tMarch\n\n");
     break;
case 4:
     printf("\t\t\tApril\n\n");
     break;
case 5:
     printf("\t\t\tMay\n\n");
     break;
case 6:
     printf("\t\t\tJune\n\n");
     break;
case 7:
     printf("\t\t\tJuly\n\n");
     break;
case 8:
     printf("\t\t\tAugust\n\n");
     break;
case 9:
     printf("\t\t\tSeptember\n\n");
     break;
case 10:
     printf("\t\t\tOctober\n\n");
     break;
case 11:
     printf("\t\t\tNovember\n\n");
     break;
case 12:
     printf("\t\t\tDecember\n\n");
     break;                                     
}
             
printCalender(weekday,days);
}

else
{
    printf("Invalid entry\n");
}

return 0;   
}


//This function will calculate century offset by getting the next highest numltiple of 4(neHiMu) and use the appropriate algorithm
//to calculate century offset.
int centuryOffset(int century)
{
    int neHiMu,centOff,centuryMiCent;
    centuryMiCent=century/100;
    neHiMu=centuryMiCent+1;


    while(neHiMu%4!=0)
    {
                      neHiMu++;
                      }
    //for(nhm=centuryMiCent+1;nhm<=index+4;nhm++)
    //{
    //                             if(nhm%4==0)
    //                             {
    //                             neHiMu=nhm;
    //                            }
    //                            else
    //                           {
    //                               continue;
    //                                }
    
    centOff=((neHiMu-1)-centuryMiCent)*2;
    return(centOff);
    
}



//This function will calculate year offset and will make use of the appropriate algorithm
int yearOffset(int yearMiCent)
{
    int yearOff;
    yearOff=(yearMiCent+(yearMiCent/4))%7;
    return(yearOff);
}


//This function will calculate month offset which makes use of a table set by calculating each month's additional days since january
int monthOffset(int month)
{
    int monthOff;
    if(month==1||month==10)
    {
    monthOff=0;
    }
    
    else if(month==2||month==3||month==11)
    {
    monthOff=3;
    }
    
    else if(month==4||month==7)
    {
    monthOff=6;
    }
    
    else if(month==5)
    {
    monthOff=1;
    }
    
    else if(month==6)
    {
    monthOff=4;
    }
    
    else if(month==8)
    {
    monthOff=2;
    }
    
    //if(month==9||month==12)
    else
    {
    monthOff=5;
    }
    return(monthOff);
}




//This function will check if the year and month entered are valid.
int checkIfCorrect(int year, int month)
{
if(year<0||month<0||month>12)
{
return 0;
}
                             
else
{
    return 1;
}
}


//This function will give the number of days in the month
int giveMonthDays(int month, int year)
{
    int days;
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
    days=31;
    }
    else if(month==4||month==6||month==9||month==11)
    {
    days=30;
    }
    else
    {
        if ((year%4==0 && year%100!=0)||(year%400==0))
        {
                       days=29;
                       }
        else
        {
            days=28;
            }
    }
    return(days);
}

//This function will simply print the Month of the selected month and year
int printCalender(int weekday ,int days)
{
printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
int dayc=0,count=-1,i,j;

for(i=1;i<=6;i++)
{
for(j=1;j<=7;j++)
{
count++;
if(count>=weekday && count<days+weekday)
{
 dayc++;
 printf("%d\t",dayc);                
}
else
{
printf("\t");
}
}
printf("\n");
}
system("pause");
return 0;
}
