#include <cstdio>
using namespace std;

int main(void)
{
	int a, b, c,result;
	scanf("%d %d %d", &a, &b, &c);
	result = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	printf("%d", result);
	return 0;
}