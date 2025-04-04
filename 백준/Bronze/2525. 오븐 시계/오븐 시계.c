#include <stdio.h>

int main()
{
	int A, B, C;

	scanf("%d %d", &A, &B);
	scanf("%d", &C);

	int currenttime = A * 60 + B;
	int endtime = currenttime + C;

	int endhour = (endtime / 60) % 24;
	int endminute = endtime % 60;

	printf("%d %d\n", endhour, endminute);

	return 0;
}