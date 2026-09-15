#include <stdio.h>
int main(void)
{
	double bill = 0;
	double numble = 0;
	printf("请输入您的商品账单和您支付的总金额(二者之间用空格隔开):");
	scanf_s("%lf %lf", &bill, &numble);
	if (bill <= numble) {
		printf("找您的金额为:%lf", numble-bill);}
	else {
		printf("您的钱不足");
	}
	return 0;
}