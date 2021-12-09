/*1-1000中能整除3的数的集合*/
#include <stdio.h>
int main()
{
	int i;
	int sum = 0;
	for (i = 3; i <= 100; ++i)//for语句里句与句之间用";" !
	{
		if (i%3 == 0)
			sum = sum + i;
	
	printf("sum=%d\n", sum);
	}
	return 0;
}