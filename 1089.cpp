#include <cstdio>
using namespace std;

int main(void)
{
	int a, d, n,cnt=0;
	scanf("%d %d %d", &a, &d, &n);
	for (int i = a; i <= 10001; i = i + d)
	{
		cnt++;
		if (cnt == n)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}