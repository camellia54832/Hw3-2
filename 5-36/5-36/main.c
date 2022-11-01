#include <stdio.h>
#include<stdlib.h>

int i=0;
int hanoi(int n, char A, char B, char C);

int main() {
	int n;
	printf("�п�J�L�ơG");
	scanf_s("%d", &n);
	printf("�`�@%d��\n", hanoi(n, 'A', 'B', 'C'));

	system("pause");
	return 0;
}

int hanoi(int n, char A, char B, char C) 
{
	if (n == 1) 
	{
		printf("\%c --> %c\n", A, C);
		i++;
	}
	else 
	{
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
	return i;
}
