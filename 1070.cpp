#include <cstdio>
using namespace std;

int main(void)
{
	int season;
	scanf("%d", &season);
	if (season == 12 || season == 1 || season == 2)printf("winter");
	else if (season == 3 || season == 4 || season == 5)printf("spring");
	else if (season == 6 || season == 7 || season == 8)printf("summer");
	else if (season == 9 || season == 10 || season == 11)printf("fall");
	return 0;
}