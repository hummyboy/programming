
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	printf("enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("%d&%d is %d",a,b,c);
	d=a|b;
	printf("\n%d|%d is %d",a,b,d);
	getch();
}
