#include<stdio.h>
int main()
{
int var = 5 ;
var = 40 ;
int *ptr ;
ptr=&var ;
printf("%d \n",*ptr);
printf("%p \n",ptr);
printf("%p \n",&var);
}
