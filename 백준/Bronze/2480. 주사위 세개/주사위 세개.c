#include <stdio.h>

int main()
{
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);
	
	if (A == B && B == C) printf("%d\n", 10000 + A * 1000);
	else if (A == B || B == C || C == A)
	{
		if (A == B) printf("%d\n", 1000 + A * 100);
		else if(B == C) printf("%d\n", 1000 + B * 100);
		else printf("%d\n", 1000 + C * 100);
	}
	else
	{
		int max = A > B ? (A > C ? A : C) : (B > C ? B : C);
		printf("%d\n", max * 100);
	}

	return 0;
}