#include <stdio.h>
#include <math.h>

int main()
{
	int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	double average = 0.00;
	
	for(int i = 0; i < 10; i++)
	{
		average += sqrt((double)array[i]);
	}
	average /= 10;
	printf("%.2f\n", average);
}
