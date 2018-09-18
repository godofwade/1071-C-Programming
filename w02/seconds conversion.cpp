#include<stdio.h>

int main()
{
	int sec,h,m,s;
	printf("Enter seconds:");
	scanf("%d",&sec);
	h=sec/3600;
	m=(sec%3600)/60;
	s=sec-h*3600-m*60;
	printf("%d seconds = %02d:%02d:%02d",sec,h,m,s);
	return 0;
}
