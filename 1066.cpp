#include <cstdio>
using namespace std;

int main(void)
{
	int arr[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 0)printf("even\n");
		else printf("odd\n");
	}
	return 0;
}