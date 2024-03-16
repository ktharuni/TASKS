//square of 2 numbers in function in c
#include<stdio.h>
int square(int a,int b)
{
 int result;
 clrscr();
 result=(a*a)+(b*b)+2*a*b;
 printf("square of two numbers=%d\n",result);
 getch();
 return 0;
}
int main()
{
 square(4,5);
 square(288,789);
 return 0;
}