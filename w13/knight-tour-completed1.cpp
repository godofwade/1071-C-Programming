#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct Pos
{
	int row;
	int col;
};

void prarr(int m[][8])
{
	printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n");
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			printf("|  %3d",m[i][j]);
			if(j==7)
			printf("|");
		}
		printf("\n");
		printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n");
	}
}

void prarrc(int cou[][8])
{
	printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n");
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			printf("|  %3d",cou[i][j]);
			if(j==7)
			printf("|");
		}
		printf("\n");
		printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n");
	}
}

Pos next(int m[][8],int row,int col,int acc[][8])
{
	int w[8]={2,1,-1,-2,-2,-1,1,2};
	int h[8]={-1,-2,-2,-1,1,2,2,1};
	Pos pos;
	int nrow,ncol;
	int min=9;
	int mr=-1,mc=-1;
	acc[row][col]=0;
	
	for(int i=0;i<8;i++)
	{
		nrow=row+h[i];
		ncol=col+w[i];
		
		if(nrow>=0&&nrow<=7&&ncol>=0&&ncol<=7&&acc[nrow][ncol]>0)
		{
			acc[nrow][ncol]--;
			if(acc[nrow][ncol]<min)
			{
				min=acc[nrow][ncol];
				mr=nrow;
				mc=ncol;
			}
		}
	}
	pos.row=mr;
	pos.col=mc;
	return pos;
}

int allcases(int m[][8],int acc[][8])
{
	Pos pos;
	
	int row,col;
	int moves=1;
	for(int i=2;i<=64;i++)
	{

		pos=next(m,row,col,acc);
			
		
			
		if(pos.row==-1&&pos.col==-1)
		{
			break;
		}
		else
		{
			m[pos.row][pos.col]=i;
			moves++;
			row=pos.row;
			col=pos.col;
			
		}
		return moves;			
	}
	

}

int main()
{
	int c;
	int m[8][8]={0};
	int acc[8][8]=
	{2,3,4,4,4,4,3,2,
	 3,4,6,6,6,6,4,3,
	 4,6,8,8,8,8,6,4,
	 4,6,8,8,8,8,6,4,
	 4,6,8,8,8,8,6,4,
	 4,6,8,8,8,8,6,4,
	 3,4,6,6,6,6,4,3,
	 2,3,4,4,4,4,3,2		
	};
		
	Pos pos;

	int row;
	int col;
	int moves=1;
	
	int cou[8][8]={0};

while(1)
{

	printf("1. Knight Tour by entering position\n");
	printf("2. Check 64 cases\n");
	printf("3. Exit\n");
	printf("=> choice: ");
	scanf("%d",&c);
	
	if(c==3)
	{
		break;
	}
	
	switch(c)
	{

		
		case 1:
		
			printf("Enter row and col for number 1: ");
			scanf("%d %d",&row,&col);
			printf("The board for this test is:\n");
			
			m[row][col]=1;
			
			for(int i=2;i<=64;i++)
			{
				pos=next(m,row,col,acc);
		
				if(pos.row==-1&&pos.col==-1)
				{
					break;
				}
				else
				{
					m[pos.row][pos.col]=i;
					moves++;
					row=pos.row;
					col=pos.col;
				}
			}
			prarr(m);
			printf("\n");
			printf("The tour ended with %d moves.\n",moves);
			printf("This was a full tour!\n");
			printf("\n");
			
				break;
				
		case 2:
			
			for(int i=0;i<8;i++)
			{
				for(int j=0;j<8;j++)
				{
					m[i][j]=1;
					row=i;
					col=j;
					cou[i][j]=allcases(m,acc);
				}
			}
			prarrc(cou);
			printf("\n");
			
				break;
	}
	
	printf("Menu\n");
	
}	
	
	

	
	
		
	return 0;
}
