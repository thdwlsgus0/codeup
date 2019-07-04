#include <cstdio>
using namespace std;

int main(void)
{
	int a, r, n,cnt=0;
	scanf("%d %d %d", &a, &r, &n);
	for (int i = a; i <= 1000000; i = i * r)
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