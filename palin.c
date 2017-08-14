#include<stdio.h>
int main()
{
int n,reverse integer =0,remainder,original integer;
printf("enter an integer :");
scanf("%d",&n);
original integer =n;
while(n !=0)
{
remainder= n%10;
reversed integer = reversed integer*10 + remainder ;
n /=10;
}
if(original integer== reversed integer);
printf("5d is a palindrome.",original integer);
else
printf("%d is not a palindrome .",original integer);
return 0;
}
