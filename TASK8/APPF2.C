//average of 3 numbers in functions in c
#include<stdio.h>
int avg(int a,int b,int c)
{
 float average;
 clrscr();
 average=(a+b+c)/3;
 printf("average of three numbers=%f\n",average);
 getch();
 return 0;
}
int main()
{
 avg(6,7,9);
 avg(67,90,78);
 return 0;
}


