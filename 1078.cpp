#include <cstdio>
using namespace std;

int main(void)
{
	int sum = 0,data;
	scanf("%d", &data);
	for (int i = 1; i <= data; i++)
	{
		if (i % 2 == 0)sum += i;
	}
	printf("%d", sum);
	return 0;
}