#include<stdio.h>

int gcd(int a,int b)
{
	if(a==0)
	return b;
	else
	return gcd(b%a,a);
	
}


int main()
{
	int a,b;
	
	printf("gcd(48,126)=%d\n",gcd(48,126));
	printf("gcd(48,128)=%d\n",gcd(48,128));
	printf("gcd(48,144)=%d\n",gcd(48,144));
	printf("gcd(48,48)=%d\n",gcd(48,48));
	
	return 0;
}
