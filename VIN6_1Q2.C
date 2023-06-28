// 6.1-Q2 write a programe to print n to 1 using a while loop.


#include<stdio.h>
#include<conio.h>

void main(){
int a,b;
clrscr();
b=1;
printf("Enter any number:");
scanf("%d",&a);
printf("Number from %d to 1\n",a);
while (a>=b){
  printf("%d\n",a);
  a--;
}
getch();
}