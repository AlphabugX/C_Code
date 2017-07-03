/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  0x13_funciton_recutsive
 *
 *        Version:  1.0
 *        Created:  2017年07月01日 17时00分02秒
 *       Revision:  1.0
 *       Compiler:  gcc
 *
 *         Author:  F4kser
 *        Company:  
 *
 * =====================================================================================
 */
#include	<stdio.h>
int function(int n)
{
	if (n == 0)
	{	printf("\n");
		return 0;
	}
	else
	{	
		printf("%d ",n);
		n--;
	}
	function(n);
}
int main()
{
	function(3);
	return 0;
}
