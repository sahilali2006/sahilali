/*
 Write a program to calculate the salary of a sales person based on the bonus and incentive to be offered him based on the sale they made.
If the sale exceeds Rs. 100000/- then follow table 1 else follow table 2.

Table 1:
Basic       = 3000
Hra         = 20% of Basic
Da          = 110% of Basic
Conveyance  = 500
Incentive   = 10% of sales
Bonus       = 500

Table 2: 
Basic       = 3000
Hra         = 20% of Basic
Da          = 110% of Basic
Conveyance  = 500
Incentive   = 5% of sales
Bonus       = 500
*/

#include<stdio.h>
int main(){
    
int sale;
printf("Enter sale = ");
scanf("%d",&sale);

int basic_salary = 3000;
int hra = basic_salary*20/100;
int da = basic_salary*110/100;
int coveyance = 500;
int bonus = 500;
float incentive;

if (sale>100000)
{
     incentive = sale*10/100;  
}else{
     incentive = sale*5/100;
}

 int total_sale = basic_salary+hra+da+coveyance+bonus+ incentive;

printf("%d",total_sale);
}
