#include<stdio.h>
#include"sip.h"
int main() {
	int len = 10;
	int a[10];

	for (int i = 0; i < 10; i++)

	{
		printf("请输入第%d个数 = ", i + 1);
		scanf_s("%d", &a[i]);
	}
	turn(len, a);

	for (int i = 0; i < len; i++) {
		printf("%d\t", a[i]);
	}

	printf("\nSTAR NB");
	return 0;
}
