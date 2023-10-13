#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float z(float x, float a)
{

	return fmin(fmin(atan(exp(x)/100),
		log(fabs(cbrt(x-a)))),
		(a*sqrt(x) + sin(x-pow(a,2)))/abs(x));
}


int main()
{
	for(float x = 1; x<=3; x+=1.3)
	{
		for(float a = 2; a <= 4; a+=1.2)
		{
			printf("x = %f a = %f z(x,a) = %f\n",x,a,z(x,a));
		}
	}
	return 0;
}
