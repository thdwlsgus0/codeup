#include <cstdio>
using namespace std;

int main(void)
{
	int count[24] = { 0, }, n, data;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data);
		count[data]++;
	}
	for (int i = 1; i <= 23; i++)
	{
		printf("%d ", count[i]);
	}
	return 0;
}