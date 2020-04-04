
#include <bits/stdc++.h>
using namespace std;

int isEmpty(int mat[5][5], int &i, int &j, int n)
{
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j] == 0)
			{	
			return 1;}
		}
	}
	
	
	return 0;
}


int trace(int mat[5][5], int n)
{
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		sum+=mat[i][i];
	}
	return sum;
}


int uniqueRow(int mat[5][5], int r, int a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(mat[r][i] == a )
		{
			return 0;
		}
	}
	return 1;
}

int uniqueCol(int mat[5][5], int c, int a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(mat[i][c] == a )
		{
			return 0;
		}
	}
	return 1;
}
int generateMatrix(int mat[5][5], int n, int k)
{	
	int i,r, c, a, sum;
	
	if(isEmpty(mat,r,c,n) == 0)
	{
		return 1;
	}
	
	for(a=1;a<=n;a++)
	{
		if(uniqueRow(mat, r, a, n) * uniqueCol(mat, c, a , n) == 1)
			{	
				mat[r][c] = a;
				
				
				
				
				
				
				if(generateMatrix(mat, n,k) == 1 && trace(mat,n) == k)
				{
					return 1;
				}
				mat[r][c] = 0;
			}
			
		
	}
	
	return 0;
	
}







int main()
{
	int i,j,l,t;
	cin >> t;
	int n[t],k[t];
	
	int grid [44][5][5] = {0};
	
	
	
	for(i=0;i<t;i++)
	{
		cin >> n[i] >> k[i];
		
		
	}
	
	
	
	
	
	for(i=0;i<t;i++)
	{
		
		if(generateMatrix(grid[i], n[i], k[i]) == 1)
		{
			printf("Case #%d: POSSIBLE\n",i+1);
			for(j=0; j<n[i]; j++)
			{
				for(l=0; l<n[i]; l++)
				{
					printf("%d ", grid[i][j][l]);
				}
				cout << "\n";
			}
		}
		
		else
			printf("Case #%d: IMPOSSIBLE\n",i+1);	
		
	}
	
}
