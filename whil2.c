/*
Write a program that take a number as input and print it's table.
*/

#include<stdio.h>
void main(){

int num,i=1;

    
printf("Enter number = ");
scanf("%d",&num);

while (i<=10)
{
    printf("%d \n",i*num);
    i++;
}
} 
