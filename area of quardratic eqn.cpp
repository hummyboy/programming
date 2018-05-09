#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float a,b,c,d,x,y;
    printf("enter the value of x2 ,x,and constant term");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
	if (d<0);
    printf("the value of roort are imaginary");
    {
      if(d==0);
    	 printf("both root are real and equal");
    	 x=-b/(2.0*a);
    	 scanf("root is %f",a);
   }
        {
		  if(d=0);
          printf("both root are real and distinct");
          x=(-b+sqrt(d));
          y=(-b-sqrt(d));
          getch();
    
	}
}
