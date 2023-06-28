//6.1-Q1 write a programe to print 1 to n using a while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int a,b;
clrscr();
b=1;
printf("Enter any number:");
scanf("%d",&a);
printf("Number from 1 to %d\n",a);
while (b<=a){
  printf("%d\n",b);
  b++;
}
getch();
}