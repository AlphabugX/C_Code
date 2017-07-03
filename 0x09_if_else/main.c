#include <stdio.h>
void print_parity(int x)//parity为奇偶性
{
	if (x % 2 ==0)
		printf("x is even.\n");//even为偶数
	else
		printf("x is odd.\n");//odd为奇数
}

int main(void)
{
	print_parity(17);
	print_parity(18);
	return 0;
}
