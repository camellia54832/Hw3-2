#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned long long int a0 = 0, a1 = 1, a2 = 999, range = 1;
	printf("%d\n", a0);
	printf("%d\n", a1);

	for (int i = 0; i < 63; i++)
	{
		range *= 2;

	}

	while (a2 < range)
	{
		a2 = a0 + a1;
		a0 = a1;
		a1 = a2;
		printf("%lld\n", a2);

	}

	system("pause");
	return 0;
}