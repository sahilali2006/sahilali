/*
 Take 2 number from keyboard and display which one is greater
*/ 


#include<stdio.h>
int main (){

int num1,num2;

printf("Enter first number = ");
scanf("%d",&num1);

printf("Enter secound number= ");
scanf("%d",&num2);

if (num1>=num2)
{
    printf("num1 is greater ");

} else 
{
    printf("num2 is gereater");
}

}
