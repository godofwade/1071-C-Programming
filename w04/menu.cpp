#include<stdio.h>

int main()
{
	int c;
	int h,w;
	int t;
	
	while(1)
	{
		printf("Main menu\n");
	printf("1.Rectangle\n");
	printf("2.Triangle(直角)\n");
	printf("3.Exit\n");
	printf("=> ");
	scanf("%d",&c);
	
	if(c==3)
	break;
	
	switch(c)
	{
		case 1:
			printf("Enter height and width:");
			scanf("%d %d",&h,&w);
			for(int i=1;i<=h;i++)
			{
				for(int j=1;j<=w;j++)
				{
					if(i==1||i==h||j==1||j==w)
					printf("*");
					else
					printf(" ");
				}
				printf("\n");
			}
			
			break;
		case 2:
		    printf("Enter height and type:");
			scanf("%d %d",&h,&t);
			for()
			{
				
			}
			
			break;	
	}
	
	}
	
	
	return 0;
}
