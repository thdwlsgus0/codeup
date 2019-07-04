#include <cstdio>
using namespace std;

int main(void)
{
	int h, w, n, l, d, x, y;
	int graph[101][101] = { 0, };
	scanf("%d %d %d", &h, &w, &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (d == 0)
		{
			for (int j = 0; j < l; j++)
			{
				graph[x][y + j] = 1;
			}
		}
		else
		{
			for (int j = 0; j < l; j++)
			{
				graph[x + j][y] = 1;
			}
		}
	}
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}
	return 0;
}