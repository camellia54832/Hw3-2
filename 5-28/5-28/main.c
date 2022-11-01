#include <stdio.h>
#include<stdlib.h>

int main()
{
	char word, small;

	scanf_s("%c", &word);
	if (word < 91)
		printf("%c\n", word + 32);

	else if (word > 90)
		printf("%c\n", word - 32);


	system("pause");
	return 0;
}