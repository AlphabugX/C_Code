/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Prime Number
 *
 *        Version:  1.0
 *        Created:  2017年07月01日 17时51分16秒
 *       Revision:  1.0
 *       Compiler:  gcc
 *
 *         Author:  F4sker 
 *        Company:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int prime(int n)
{
	int i,j,t=0;
	for (i=1;i<=n;i++){
		for (j=2; j<i;j++){
			if (i % j == 0) 
				break;
		}
		if (j == i)
		{	
			printf("%d\t",i);
			t++;
			if (t % 5 ==0) printf("\n");
		}
	}
}

int main()
{
	prime(200);
	printf("\n");
	return 0;
}
