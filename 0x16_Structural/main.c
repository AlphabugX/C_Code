/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  structural 
 *
 *        Version:  1.0
 *        Created:  2017年07月01日 18时25分03秒
 *       Revision:  1.0
 *       Compiler:  gcc
 *
 *         Author:  F4sker
 *        Company:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int main()
{
	struct complex_struct {double x,y;};
	//struct complex_struct {double x,y}z,z1;
	double x = 3.0;
	struct complex_struct z1 = { x, 4.0};
	//z.x = x;
	//z.y = x + 1.0;
	if (z1.y < 0)
		printf("z=%f%f\n",z1.x,z1.y);
	else
		printf("z=%f+%f\n",z1.x,z1.y);

	return 0;
}
