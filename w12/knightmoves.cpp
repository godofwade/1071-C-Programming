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

Pos next(int m[][8],int row,int col)
{
	int w[8]={2,1,-1,-2,-2,-1,1,2};
	int h[8]={-1,-2,-2,-1,1,2,2,1};
	Pos pos;
	int nrow,ncol;
	for(int i=0;i<8;i++)
	{
		nrow=row+h[i];
		ncol=col+w[i];
		
		if(nrow>=0&&nrow<=7&&ncol>=0&&ncol<=7&&m[nrow][ncol]==0)
		{
			pos.row=nrow;
			pos.col=ncol;
			return pos;
		}
	}
	pos.row=-1;
	pos.col=-1;
	return pos;
}

int main()
{
	int m[8][8]={0};
	
	Pos pos;
	srand(time(NULL));
	int row=rand()%8;
	int col=rand()%8;
	m[row][col]=1;
	for(int i=2;i<=64;i++)
	{
		pos=next(m,row,col);
		m[pos.row][pos.col]=i;
		row=pos.row;
		col=pos.col;
		if(pos.row==-1&&pos.col==-1)
		{
			prarr(m);
			printf("\n");
			printf("Total moves: %d\n",i-1);
			break;
		}
	}
	
	return 0;
}

