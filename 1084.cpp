#include <cstdio>
using namespace std;

int main(void)
{
	int r, g, b,cnt=0;
	scanf("%d %d %d", &r, &g, &b);
	for (int i = 0; i <= r - 1; i++)
	{
		for (int j = 0; j <= g - 1; j++)
		{
			for (int k = 0; k <= b - 1; k++)
			{
				printf("%d %d %d\n", i, j, k);
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}