#include <stdio.h>

int main() 
{
	int N, M;
	scanf("%d %d", &N, &M);

	int baskets[N];
	for (int i = 0; i < N; i++) 
	{
		baskets[i] = i + 1; 
	}

	for (int i = 0; i < M; i++) 
	{
		int start, end;
		scanf("%d %d", &start, &end);

		start -= 1;
		end -= 1;

		while (start < end) 
		{
			int temp = baskets[start];
			baskets[start] = baskets[end];
			baskets[end] = temp;
			start++;
			end--;
		}
	}

	for (int i = 0; i < N; i++) 
	{
		printf("%d ", baskets[i]);
	}
	printf("\n");

	return 0;
}