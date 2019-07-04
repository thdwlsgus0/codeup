#include <cstdio>
using namespace std;

int main(void)
{
	char ch;
	scanf("%c", &ch);
	for (char i = 'a'; i <= ch; i++)
	{
		printf("%c ", i);
	}
	return 0;
}