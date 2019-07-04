#include <cstdio>
using namespace std;

int main(void)
{
	int data;
	while (1)
	{
		scanf("%d", &data);
		if (data == 0)
		{
			printf("%d\n", data);
			break;
		}
		printf("%d\n", data);
	}
	return 0;
}