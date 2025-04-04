#include <stdio.h>

int main()
{
	int N, v, cnt = 0;

	scanf("%d", &N);
	
	int a[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &v);

	for (int i = 0; i < N; i++)
	{
		if (a[i] == v) cnt++;
	}
	printf("%d\n", cnt);

	return 0;
}
