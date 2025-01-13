/*
Write a program to take 5 number as input and print which one is positive and which one is negative.
*/


#include<stdio.h>
void main (){

int num,i =1;

while (i<=5)

{
      i++;
    printf("Enput a number =");  
    scanf("%d",&num);

    if (num>0)
    {
        printf("This is positive number\n");
    }else if (num==0)
    {
        printf("it's zero \n");
    }
    else
    {
        printf("This in negative\n");
    }
  
}
}


