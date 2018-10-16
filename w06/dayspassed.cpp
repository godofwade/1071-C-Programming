#include<stdio.h>
#include<ctype.h>



int leap(int y)
{
	if(y%400==0 || (y%4==0 && y%100!=0))
	return 1;
	else
	return 0;
}


int main()
{
	int m,d,ds,y;
	ds=0;
	char cont= 'Y';
	
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	while(cont=='Y')
	{
		ds=0;
		printf("Enter year:");
		scanf("%d",&y);
		printf("Enter month and day:");
		scanf("%d %d",&m,&d);
		a[1]=28;
		if(leap(y))
		{
			a[1]++;	
		}
		
		
		for(int i=0;i<m-1;i++)
		{
			ds+=a[i];
		}
		
		
		printf("%d days passed since 1/1/%d\n",ds+d,y);
		printf("Continue (Y/N)? ");	
		getchar();
		cont=toupper(getchar());

		

	}
	
	
	
	return 0;
}
