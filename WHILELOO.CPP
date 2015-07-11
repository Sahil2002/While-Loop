#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=0;
int b=0;
scanf("%d",&a);
while(a>0){
b =b+ ((a%10)*(a%10)*(a%10));
a = a/10;

}
printf("%d",b);
getch();
}