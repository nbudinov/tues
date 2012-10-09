/*
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намерят и изведат всички прости числа завършващи на 3 в интервал [x,y].
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

	int result, z, n=0;
	for( x; x<=y; x++) {
		result = check_prime(x);
		if (result == 1) {
			z=3+10*n;
			result = check_prime(z);
			if (result == 1) {
				if (x == z) printf("%d ", x), n++;
			}
			else n++;		
		}
	};
	printf("\n");
}

int check_prime(int a) {
	int b;
	for ( b = 2 ; b <= a - 1 ; b++ ) {
		if ( a%b == 0 )
		return 0;
	}
	if ( b == a )
		return 1;
}
