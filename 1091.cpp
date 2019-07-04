#include <cstdio>
using namespace std;

int main(void)
{
	int a, m, d, n,start,after;
	scanf("%d %d %d %d", &a, &m, &d, &n);
	start = a;
	for (int i = 1; i < n; i++)
	{
		after = start * m + d;
		start = after;
	}
	printf("%d", after);
	return 0;
}