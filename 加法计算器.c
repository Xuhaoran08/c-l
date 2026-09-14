#include <stdio.h>
int main()
{
	double a=0;
	double b=0;
	printf("请输入两个数: ");
	scanf_s("%lf %lf", &a, &b);
	printf("结果为:%lf", a + b);
	return 0;
}