// 6.1-Q3 write a programe to prient 1 to N using a do while loop.


#include<stdio.h>
#include<conio.h>

void main(){
int a,b;
clrscr();
b=1;
printf("Enter any number:");
scanf("%d",&a);
printf("Number from 1 to %d\n",a);
do{
   printf("%d\n",b);
   b++;
} while (b<=a);
getch();

}