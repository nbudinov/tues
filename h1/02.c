/*
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намери и изведе сумата на числатa делящи се на 17 в интервал [x, y].
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

	int t=0;
    for( x; x<=y; x++) {
        if (x%17 == 0) t=x+t;
	}
    printf("TOTAL: %d\n", t);
}
