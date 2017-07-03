//求两点之间的距离，距离公式。distance=sqrt((x2-x1)^2 + (y2-y1)^2)
#include <math.h>
#include <stdio.h>
double distance(double x1,double y1,double x2,double y2)
{
	double dx = x2 - x1;
	double dy = y2 - y1;
	double dsquared = dx * dx + dy * dy;
	double result = sqrt(dsquared);

	return result;
}

int main(void)
{
	printf("distance is %f\n",distance(1.0,2.0,4.0,6.0));
	return 0;
}
