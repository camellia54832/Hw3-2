#include <stdlib.h>
#include <stdio.h>

int ans=1;
int a(int x,int i);

int main()
{
	int base, power;

	scanf_s("%d %d", &base, &power);
	printf("%d\n",a(base, power));
	system("pause");

}
int a(int x, int i)
{
	if(i>0)
		ans=x * a(x, (i - 1));
	else
	return ans;
}