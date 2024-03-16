//square of 2 numbers in non function in c
#include<stdio.h>
int main(){
int a,b,result;
a=5;
b=10;
clrscr();
result=(a*a)+(b*b)+2*a*b;
printf("result=%d\n",result);
a=23,b=34;
result=(a*a)+(b*b)+2*a*b;
printf("result=%d",result);
getch();
return 0;
}