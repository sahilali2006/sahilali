/*
write a program that take a student marks as input and show if he passed the exam or not. ( >33 are passed )
*/


#include<stdio.h>
int main(){
 
int mark; 

printf("Enter marks = ");
scanf("%d",&mark);

if (mark>33)
{
    printf("pass");
}else
{
    printf("not pass");
}
}
