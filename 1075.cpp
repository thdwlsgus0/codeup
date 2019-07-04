#include <cstdio>
using namespace std;

int main(void)
{
	int number;
	scanf("%d", &number);
	for (int i = number - 1; i >= 0; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}