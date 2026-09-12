#include <stdio.h>
int main()
{
	int price = 0;int hello = 0;
	printf("输入产品金额:");
	scanf_s("%d", &price);

	printf("支付金额:");
	scanf_s("%d", &hello);

	int change = hello - price;
	printf("找零金额：%d", change);

	return 0;


}