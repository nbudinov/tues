/*
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намерят и изведат всички числа на Фибоначи в интервала [x, y].
*/

#include<stdio.h>

int main() {
	int x, y;
	printf("Vavedete x: ");
	scanf("%d", &x);
	printf("Vavedete y: ");
	scanf("%d", &y);
    while (x >= y) {
	printf("Vavedete y: ");
	scanf("%d", &y);
	}

	if (x == 0) printf("0 1 ");
	if (x == 1) printf("1 ");

	int s,d,c;
	s=0;
	d=1;
	while (c < y) {
		c=s+d;
		s=d;
		d=c;
		if ((c>=x) && (c<=y)) printf("%d ", c); 
	}
	printf("\n");

}
