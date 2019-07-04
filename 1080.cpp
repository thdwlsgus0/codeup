#include <cstdio>
using namespace std;

int main(void)
{
	int sum=0,goal;
	scanf("%d", &goal);
	for (int i = 1; i <= 1000; i++)
	{
		sum += i;
		if (goal <= sum)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;
}