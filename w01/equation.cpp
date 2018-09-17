#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	double x1,x2;
	printf("Enter a b c:");
	scanf("%d %d %d",&a,&b,&c);
	if(b*b-4*a*c>=0){
	
	printf("For equation %d x^2 + %d x + %d=0,two roots are\n",a,b,c);
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("x1=%.1f\n",x1);
	printf("x2=%.1f",x2);	
}
 else{
  
 
 	printf("NO real roots");
 }
 	return 0;
 }
 
 
 /*
 Enter a b c: 2 -3 1
For equation 2 x^2 -3 x + 1 =0, two roots are
x1 = 1.0
x2 = 0.5
 */
 
