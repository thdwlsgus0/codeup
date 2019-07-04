#include <cstdio>
using namespace std;

int graph[11][11];
int main(void)
{
	int x_start=2,y_start=2;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			scanf("%d", &graph[i][j]);
		}
	}
	graph[x_start][y_start] = 9;
	for (int i = 0; i < 20; i++)
	{
		if (graph[x_start][y_start+1] == 0)
		{
			graph[x_start][y_start+1] = 9;
			y_start = y_start + 1;
		}
		else if (graph[x_start+1][y_start] == 0)
		{
			graph[x_start+1][y_start] = 9;
			x_start = x_start + 1;
		}
		else if (graph[x_start][y_start + 1] == 2)
		{
			graph[x_start][y_start + 1] = 9;
			break;
		}
		else if (graph[x_start + 1][y_start] == 2)
		{
			graph[x_start+1][y_start] = 9;
			break;
		}
		else
		{
			break;
		}
	}
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}
	return 0;
}