#include <stdio.h>
#include<stdlib.h>

int i=0;
int hanoi(int n, char A, char B, char C);

int main() {
	int n;
	printf("請輸入盤數：");
	scanf_s("%d", &n);
	printf("總共%d次\n", hanoi(n, 'A', 'B', 'C'));

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
