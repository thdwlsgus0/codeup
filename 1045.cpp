// codeup 1045 problem // 
#include <cstdio>
int main(void)
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n%d\n%d\n%d\n%d\n%.2f\n", a+b, a-b, a*b, a/b, a%b,float(a)/float(b));
	
	return 0;
}
