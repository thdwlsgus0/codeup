#include <cstdio>
using namespace std;

int main(void)
{
	char ch;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == ' ')continue;
		if (ch == 'q')
		{
			printf("%c\n", ch);
			break;
		}
		printf("%c\n", ch);
	}
	return 0;
}