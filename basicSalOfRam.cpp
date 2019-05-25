#include<stdio.h>
int main()
{
    float Basic_Salary,Dearness_Allowance=0.4,House_Rent_Allowance=0.2,Taxation_Charge=0.25
    ,Gross_Salary_Tax_Charge_Included,Gross_Salary;
    printf("Enter the basic salary of Ramesh");
    scanf("%f",&Basic_Salary);
    Gross_Salary_Tax_Charge_Included=Basic_Salary+(Basic_Salary*Dearness_Allowance)+
    (Basic_Salary*House_Rent_Allowance);
    Gross_Salary=Gross_Salary_Tax_Charge_Included-(Gross_Salary_Tax_Charge_Included*Taxation_Charge);
    printf("The Basic Salary of Ramesh is: %f",Gross_Salary);
    getchar();
    getchar();
    return 0;
}

    
    
