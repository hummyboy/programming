
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,r;
	printf("enter a number:\n");
	scanf("%d",&a);
	r=a%2;
	if(r==0)
	{
		printf("a is even");
	}
	else
	{
		printf("a is odd");
	}
	getch();
}
