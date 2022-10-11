#include<stdio.h>
#include"sip.h"

int turn(int len, int* a) {
	for (int i = 0; i < 9; i++) {
		int temp = 0;
		for (int j = 0; j < len - 1 - i; j++)
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	}
	return a[len];
}