#include <cstdio>
using namespace std;

int main(void)
{
	int a;
	scanf("%d", &a);
	if (a < 0)
	{
		if (a % 2 == 0)printf("minus\neven");
		else printf("minus\nodd");
	}
	else if (a > 0)
	{
		if (a % 2 == 0)printf("plus\neven");
		else printf("plus\nodd");
	}
	return 0;
}