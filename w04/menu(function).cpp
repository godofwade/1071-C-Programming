#include<stdio.h>

void drawrectangle(int h,int w)
{
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
		
}

void drawverticaltriangle(int h,int t)
{
	if(t==1)
			{
				for(int i=1;i<=h;i++)
			{
				for(int j=1;j<=i;j++)
				{
					if(i==1||i==h||j==1||j==i)
					printf("*");
					else
					printf(" ");
				}
				printf("\n");
			}
			
			}
			else if(t==2)
			{
				for(int i=h;i>=1;i--)
				{
					for(int j=1;j<=h;j++)
					{
						if(i==1||j==h||j==i)
						printf("*");
					    else
					    printf(" ");
					}
					printf("\n");
				}
			}
			else if(t==3)
			{
				for(int i=1;i<=h;i++)
				{
					for(int j=h;j>=1;j--)
					{
						if(i==1||j==h||j==i)
						printf("*");
					    else
					    printf(" ");
					}
					printf("\n");
				}
			}
			else if(t==4)
			{
				for(int i=h;i>=1;i--)
				{
					for(int j=h;j>=1;j--)
					{
						if(i==h||j==1||j==i)
						printf("*");
					    else
					    printf(" ");
					}
					printf("\n");
				}
			}
}

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
			drawrectangle(h,w);
			break;
			case 2:
		    printf("Enter height and type:");
			scanf("%d %d",&h,&t);
			drawverticaltriangle(h,t);
			break;
	}
	
	}
	return 0;
}
