/*
 * =====================================================================================
 *
 *       Filename:  mian.c
 *
 *    Description:  斐波那契数列(Fibonacci sequence)
 *
 *        Version:  1.0
 *        Created:  2017年07月01日 17时20分34秒
 *       Revision:  
 *       Compiler:  gcc
 *
 *         Author:  F4sker 
 *        Company:  
 *
 * =====================================================================================
 */
int a=0,b=1;
#include <stdio.h>
int fs(int n)
{
	if (n == 0)
	{	
		printf("\n");
		return 1;
	}
	else
	{	
		int c=a+b;
		a=c;
		b=b+c;
		printf("%d %d ",a,b);
		n--;
	}
	fs(n);
}
int main()
{
	fs(100);
	return 0;
}
