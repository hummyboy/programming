
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a==b)&&(b==c))
	{
		printf("Triangle is equilateral");
	}
	else
	{
		printf("Triangle is note quilateral");
	}
	getch();
}
