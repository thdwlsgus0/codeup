#include <cstdio>
using namespace std;

int main(void)
{
	int count[24],n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &count[i]);
	}
	for (int i = n; i >= 1; i--)
	{
		printf("%d ", count[i]);
	}
	return 0;
}