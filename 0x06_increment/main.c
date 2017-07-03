#include <stdio.h>
void increment(int x);
int main(void)
{
	int i = 1,j = 2;
	increment(i);
	increment(j);
	printf("i=%d,j=%d\n",i,j);
	return 0;
}
void increment(int x)
{
	x = x + 1;
}
