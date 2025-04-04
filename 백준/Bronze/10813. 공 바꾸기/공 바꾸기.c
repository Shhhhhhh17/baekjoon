#include <stdio.h>

int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);

	int baskets[101];
	for (int i = 0; i <= N; i++)
	{
		baskets[i] = i;
	}

	for (int i = 0; i < M; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		int temp = baskets[a];
		baskets[a] = baskets[b];
		baskets[b] = temp;
	}

	for (int i = 1; i <= N; i++) 
	{
		printf("%d ", baskets[i]);
	}

	return 0;
}