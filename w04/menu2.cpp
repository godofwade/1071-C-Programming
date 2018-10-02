#include<stdio.h>

int main()
{
	int c;
	int h,w;
	int t;
	int f;
	
	while(1)
	{
		printf("Main menu\n");
	printf("1.Rectangle\n");
	printf("2.Vertical Triangle\n");
	printf("3.Exit\n");
	printf("=> ");
	scanf("%d",&c);
	
	if(c==3)
	break;
	
	switch(c)
	{
		case 1:
			printf("Enter height and width filled:");
			scanf("%d %d %d",&h,&w,&f);
			switch(f)
			{
				case 0:
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
				case 1:
					for(int i=1;i<=h;i++)
					{
						for(int j=1;j<=w;j++)
						{
							
							printf("*");
						}
						printf("\n");
					}
				    break;	
			}
			
			
			break;
		case 2:
		    printf("Enter height and type and filled:");
			scanf("%d %d %d",&h,&t,&f);
			switch(f)
			{
			case 0:
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
				break;
			
			case 1:
				
				break;
			}
			
			
			break;	
	}
	
	}
	
	
	return 0;
}
