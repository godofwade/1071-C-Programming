#include<stdio.h>

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

int main()
{
	int m[8][8]={0};
	
	prarr(m);
	
	return 0;
}


