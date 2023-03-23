// C++ program to find Determinant of a matrix
#include <bits/stdc++.h>
int determinantOfMatrix(int mat[N][N], int n)
{
	int num1, num2, det = 1, index,
					total = 1;
	int temp[n + 1];

	
	for (int i = 0; i < n; i++)
	{
		index = i; 
		
		while (index < n && mat[index][i] == 0)
		{
			index++;
		}
		if (index == n) 
		{
			
			continue;
		}
		if (index != i)
		{
			
			for (int j = 0; j < n; j++)
			{
				swap(mat[index][j], mat[i][j]);
			}
			
			det = det * pow(-1, index - i);
		}

		
		for (int j = 0; j < n; j++)
		{
			temp[j] = mat[i][j];
		}
		
		for (int j = i + 1; j < n; j++)
		{
			num1 = temp[i]; 
			num2 = mat[j][i]; 
			for (int k = 0; k < n; k++)
			{
				
				mat[j][k]
					= (num1 * mat[j][k]) - (num2 * temp[k]);
			}
			total = total * num1; 
		}
	}


	for (int i = 0; i < n; i++)
	{
		det = det * mat[i][i];
	}
	return (det / total); 
}


int main()
{

	int mat[N][N] = { { 1, 0, 2, -1 },
					{ 3, 0, 0, 5 },
					{ 2, 1, 4, -3 },
					{ 1, 0, 5, 0 } };

	
	printf("Determinant of the matrix is : %d",
		determinantOfMatrix(mat, N));
	return 0;
}
