/*
 Read two numbers and an operator, calculate result according to operator and display result. 

   ( its like a calculator program)
*/

#include<stdio.h>
void main(){

int num1,num2;
char ch;

printf("Enter first number =");
scanf("%d",&num1);

printf("Enter secound number =");
scanf("%d",&num2);
fflush(stdin);

printf("Enter operator = ");
scanf("%c",&ch);

float output;

if (ch == '+')
{
  output = num1+num2;
} else if (ch == '-')
{
  output = num1-num2;
}else if (ch == '*')
{
  output = num1 * num2;
} else if (ch == '/')
{
  output = num1 / num2;
}
else
{
  printf("Not a valid opretor");
}
printf("%f ",output);

}
