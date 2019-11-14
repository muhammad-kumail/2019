#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,count=0;
	printf("x, y & z are odd numbers\n");
	printf("x^2 + y^2 + z^2 = 2019\n\n");
	printf("x\ty\tz\n__________________\n");
	
	for(a=1;a<=99;a+=2)
	{
		for(b=1;b<=99;b+=2)
		{
			for(c=1;c<=99;c+=2)
			{
				if((a*a)+(b*b)+(c*c)==2019)
				{
					printf("%2d\t%2d\t%2d \n",a,b,c);
					count++;
				}
			}
		}
	}
	printf("No of combination: %d",count/6);
	getch();
}
