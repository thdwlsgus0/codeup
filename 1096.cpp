#include <cstdio>
using namespace std;

int main(void)
{
	int gotoxy[20][20] = { 0, }, n,x,y;
	scanf("%d", &n);
	for (int i = 0; i < 5; i++)
	{
		scanf("%d %d", &x, &y);
		gotoxy[x][y] = 1;
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