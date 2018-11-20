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
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			printf("%3d",m[i][j]);
		}
		printf("\n");
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

int main()
{
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
	srand(time(NULL));
	int row=rand()%8;
	int col=rand()%8;
	int moves=1;
	
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
	printf("Total moves: %d\n",moves);
		
	return 0;
}
