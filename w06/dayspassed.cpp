#include<stdio.h>
#include<ctype.h>
#include<conio.h>


int leap(int ye)
{
	if(ye%400==0 || (ye%4==0 && ye%100!=0))
	return 1;
	else
	return 0;
}


int main()
{
	int m,d,ds,ye;
	ds=0;
	char cont='y';
	
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	while(cont=='y')
	{

		printf("Enter year:");
		scanf("%d",&ye);
		printf("Enter month and day:");
		scanf("%d %d",&m,&d);
		a[1]=28;
		if(leap(ye))
		a[1]++;
		
		for(int i=0;i<m-1;i++)
		ds+=a[i];
		
		printf("%d days passed since 1/1/%d\n",ds+d,ye);
		printf("Continue (Y/N)? ");	
		cont=toupper(getche());

		

	}
	
	
	
	return 0;
}
