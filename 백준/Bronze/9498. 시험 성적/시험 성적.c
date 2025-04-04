#include <stdio.h>

int main()
{
	int s;

	scanf("%d", &s);

	if (90 <= s && s <= 100) printf("A\n");
	else if (80 <= s && s <= 89) printf("B\n");
	else if (70 <= s && s <= 79) printf("C\n");
	else if (60 <= s && s <= 69) printf("D\n");
	else printf("F\n");

	return 0;
}