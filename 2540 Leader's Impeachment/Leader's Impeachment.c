#include <stdio.h>

int main ()
{

	int tmp;
	int i, n;

	while (scanf("%d", &n) != EOF)
	{

		int vet[2] = { 0 };
		for (i = 0; i < n; ++i)
			scanf("%d", &tmp), vet[tmp]++;

		if (vet[1] >= (n / (3 * 1.0f)) * 2)
			printf("impeachment\n");
		else
			printf("acusacao arquivada\n");

	}
	return 0;

}
