#include <stdio.h>
int main(){

int num,i;
printf("Enter the value of Number:");
scanf("%d",&num);

int fact=1;
for(i=1;i<=num;i++)
{
fact=fact*i;
}
printf("Factorial=%d",fact);
return 0;
}
  
