#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 4

int path_exists(int mat[][N], int rows, int cols);

void main() {
	int mat[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
				printf("enter num [row %d][col %d]: ", i + 1, j + 1);
				scanf("%d", &mat[i][j]);
				while (mat[i][j] != 1 && mat[i][j] != 0)
				{
					printf("you entered wrong num, please enter only 1 or 0: ");
					scanf("%d", &mat[i][j]);
				}
		}
	}
	int res = path_exists(mat, 0, 0);
	if (res > 1)
		res = 1;
	printf("%d", res);
}

int path_exists(int mat[][N], int rows, int cols) {
	if (rows == N - 1 && cols == N - 1)
	{
		if (mat[rows][cols] == 0)
		{
			return 0;
		}
		if (mat[rows][cols] == 1)
		{
			return 1;
		}
	}
	if (mat[rows][cols] == 1 && (mat[rows + 1][cols] == 1 || mat[rows][cols + 1] == 1 || mat[rows + 1][cols + 1] == 1))
	{
		return path_exists(mat, rows + 1, cols) + path_exists(mat, rows, cols + 1) + path_exists(mat, rows + 1, cols + 1);
	}return 0;
}