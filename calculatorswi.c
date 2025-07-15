/*
Read two numbers and an operator, calculate result according to operator and display result. 

   ( its like a calculator program)
*/ 

#include<stdio.h>
void main(){
 float num1,num2;
 char ch;

 printf("Enter first number = ");
 scanf("%f",&num1);

 printf("Enter second number = ");
 scanf("%f",&num2);
 fflush(stdin);

 printf("Enter operator = ");
 scanf("%c",&ch);

 switch(ch){
   case '+' :
   printf("%f",num1+num2); 
   break;
   
   case '-':
    printf("%f",num1-num2);
    break;

    case '*':
    printf("%f",num1*num2);
    break;

    case '/':
    printf("%f",num1/num2);
    break;

    default :
    printf("Not a valid operator");
    break;
 }



}
