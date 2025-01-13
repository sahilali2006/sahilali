/*
Write a program that take a number as input and print counting till that number.
*/


#include<stdio.h>
int main(){

int num,i=1;

printf("Enter number = ");
scanf("%d",&num);

while (i<=num)
{
     printf("%d\n",i++);
}
}