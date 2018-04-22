#include<stdio.h>
#include<conio.h>
int main()
{
	int l,b,perimeter;
	printf("enter the length,bredth,l,b");
	scanf("%d%d",&l,&b);
    perimeter=2*(l+b);
	printf("perimeter of rectangle %d%d is %d",l,b,perimeter);
	getch();	
}
