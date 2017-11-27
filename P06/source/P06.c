#include<stdio.h>
#include<stdlib.h>

int cubebyvalue(int n);

int main(void)
{
	int num = 5;
	printf("the original value of number is %d", num);

	num = cubebyvalue(num);

	printf("\nthe new value of number is %d\n", num);
	system("pause");
	return 0;
}

int cubebyvalue(int n)
{
	return n*n*n;
}
