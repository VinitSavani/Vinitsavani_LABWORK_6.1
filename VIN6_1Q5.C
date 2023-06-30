// 6.1-Q5 write a program to print leap years between two given numbers using a while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int a,startyear,endyear;
clrscr();

printf("Enter the start year: ");
scanf("%d",&startyear);

printf("Enter the end year: ");
scanf("%d",&endyear);

printf("Leap years between %d and %d\n",startyear,endyear);
a=startyear;
while(a<=endyear){
    if(a % 4 == 0 || a % 100 == 0 || a%400 == 0);
    {
     printf("%d\n",a);
     }a++;
}
getch();

}