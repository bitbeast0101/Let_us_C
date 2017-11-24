#include<stdio.h>
int main()
{
 int i,number;
 printf("enter the number");
 scanf("%d",&number);
 long long int fact=1;
 for(i=1;i<=number;i++)
 {
  fact=fact*i;
  }
 printf("factorial is %Ld",fact);
}
