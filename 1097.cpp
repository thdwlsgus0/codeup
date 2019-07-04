#include <cstdio>
using namespace std;

int main(void)
{
	int gotoxy[20][20], n, x, y;
	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			scanf_s("%d", &gotoxy[i][j]);
		}
	}
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &x, &y);
		for (int j = 1; j <= 19; j++)
		{
			if (gotoxy[x][j] == 0)gotoxy[x][j] = 1;
			else gotoxy[x][j] = 0;
		}
		for (int j = 1; j <= 19; j++)
		{
			if (gotoxy[j][y] == 0)gotoxy[j][y] = 1;
			else gotoxy[j][y] = 0;
		}
	}
	for (int i = 1; i <= 19; i++)
	{
		for (int j = 1; j <= 19; j++)
		{
			printf("%d ", gotoxy[i][j]);
		}
		printf("\n");
	}
	return 0;
}