/*
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където x e интервала [0; +∞). Да се намерят първите 10 нечетни числа делители на x и да се запишат в масив. Масивът да се изведе на екрана и да се намерят простите числа в този масив.
*/

#include<stdio.h>

int main() {
	int x, arr[10];
	int c, i;
	while (x > 0) {
	printf("Vavedete x: ");
	scanf("%d", &x);
	}

	c = 0;
	i = 1;
	while (c<10) {
		if (x%i == 0) {
			arr[c] = i;
			printf("%d ", arr[c]);
			c++;
			i = i+2;
		}
		else i=i+2;
	}	
	printf("\n");

	int result;
	for (i=0; i<10; i++) {
		result = check_prime(arr[i]);
		if (result == 1) printf("%d ", arr[i]);
	}
	printf("\n");
}

int check_prime(int x) {
	int c;
	for ( c = 2 ; c <= x - 1 ; c++ ) {
		if ( x%c == 0 )
		return 0;
	}
	if ( c == x )
		return 1;
}
