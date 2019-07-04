#include <cstdio>
using namespace std;

int main(void)
{
	int goal,sum=0;
	scanf("%d", &goal);
	for (int i = 1; i <= 1000; i++)
	{
		sum += i;
		if (sum >= goal)
		{
			break;
		}
	}
	printf("%d", sum);
	return 0;
}