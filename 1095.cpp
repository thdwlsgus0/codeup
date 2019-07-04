#include <cstdio>
using namespace std;

int main(void)
{
	int count[24], n,min=999;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &count[i]);
		if (min >= count[i])min = count[i];
	}
	printf("%d", min);
	return 0;
}