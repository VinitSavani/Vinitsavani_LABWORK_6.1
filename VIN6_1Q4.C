//6.1-Q4 write a programe to print odd numbers from N to 1 using a while loop.

#include<stdio.h>
#include<conio.h>

void main(){
int N;
    printf("Enter any positiv number: ");
    scanf("%d",&N);

    printf("odd numbers from % to 1.\n",N);

while (N>=1){
     if (N % 2 != 0){
	printf("%d\n",N);
     }N--;
}
getch();
}