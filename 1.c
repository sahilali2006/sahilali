/*
Write a program that take user age as input ( ex: 25 ) and show if they can vote or not.
*/ 

#include<stdio.h>
int main(){

int age;
  
printf("Enter age = ");
scanf("%d",&age);

age>18 ? printf("you can vote ") : printf("you can't vote ");

}
