#include <stdio.h>

int main(void)
{
	int submitted[30] = { 0 };

	for (int i = 0; i < 28; i++) 
	{
		int num;
		scanf("%d", &num);
		submitted[num - 1] = 1; 
	}

	for (int i = 0; i < 30; i++) 
	{
		if (submitted[i] == 0) 
		{ 
			printf("%d\n", i + 1); 
		}
	}

	return 0;
}