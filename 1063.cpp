#include <cstdio>
using namespace std;

int main(void)
{
	int a, b,result;
	scanf_s("%d %d", &a, &b);
	result = a > b ? a : b;
	printf("%d", result);
	return 0;
}