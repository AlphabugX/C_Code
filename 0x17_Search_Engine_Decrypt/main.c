/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Seacrh Engines
 *
 *        Version:  1.0
 *        Created:  2017年07月01日 22时57分01秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  F4sker
 *        Company:  
 *
 * =====================================================================================
 */
#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

struct point { int row,col; } stack[512];

int top = 0;

void push(struct point p)
{
	stack[top++] = p;
}

struct point pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return top == 0;
}

int maze[MAX_ROW][MAX_ROW] = {
	0,1,0,0,0,
	0,1,0,1,0,
	0,0,0,0,0,
	0,1,1,1,0,
	0,0,0,1,0,
};

void print_maz(void)
{
	int i,j;
	for (i = 0; i<MAX;i++){
		for (j = 0; j < MAX_ROW;j++)
			printf("%d",maze[i][j]);
		putchar('\n');
	}
	printf("**********\n");
}

struct point predecessor[MAX_ROW][MAX_COL] = {
	{{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
	{{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
	{{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
	{{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
	{{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}},
}

void visit(int row , int col ,struct point pre)
{
	struct point visit_point = { row , col};
	maze[row][col] = pre;
	push(visit_point);
}

int main(void)
{
	struct point p = {0,0};

	mae[p.row][p.col] = 2;
	push(p);

	while(!is_empty()) {
		p = pop();
		if (p.row == MAX_ROW - 1 && p.col == MAX_COL - 1) breack;

	}
}


