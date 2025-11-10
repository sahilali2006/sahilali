/*
write a program that take a number as input and show if the number is +ve or -ve
*/

#include<stdio.h>
int main(){

int num;

   
printf("Enput a number = ");
scanf("%d",&num);

if (num>0)
{
     printf("It's is positiv number ");
}else if (num==0)
{
    printf("It's is equal to 0");
}else
{
    printf("It is negative");
}
}



