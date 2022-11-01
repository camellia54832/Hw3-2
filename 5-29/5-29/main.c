#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, ans=0, i=2;

	scanf_s("%d %d", &a, &b);

	if ((a == 0) || (a == 1) || (b == 0) || (b == 1))
		printf("%d", a*b);


	else
	{
		while (ans==0)
		{
			if ((i%a == 0) && (i%b == 0))
			{
				printf("%d\n", i);
				break;
			}
			i++;
		}
	}

	system("pause");
	return 0;

}