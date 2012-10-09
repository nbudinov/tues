/*
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 100 целочислени елемента. Стойностите на елементите да са случайни числа в интервала [0, 100). Елементите на масива да се подредят така, че числата завършващи на x да са в началото.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
	int x, i, arr[100];
	while ((x<=0) || (x>=10)) {
	pritnf("Vavedete x: ");	
	scanf("%d", &x);
	}

	for(i=0; i<100; i++) {
		arr[i]=random_in_range (0,100);
		printf("%d ", arr[i]);
	}
	printf("\n End of Random Numbers \n");

	int z, n, f, m=0;
	for(n=0; n<10; n++) {	
		for(i=0; i<100; i++) {
			z=x+10*n;
			if (arr[i] == z) {
				f=arr[m];
				arr[m]=arr[i];
				arr[i]=f;
				m=m+1;
			}
		}
	}

	for(i=0; i<100; i++) {
		printf("%d ", arr[i]);
	}
			
	printf("\n");
}

int random_in_range (int min, int max){
  	int base_random = rand(); /* in [0, RAND_MAX] */
  	if (RAND_MAX == base_random) return random_in_range(min, max);
  	/* now guaranteed to be in [0, RAND_MAX) */
  	int range = max - min,
 	remainder = RAND_MAX % range,
 	bucket = RAND_MAX / range;
	/* There are range buckets, plus one smaller interval
	within remainder of RAND_MAX */
	if (base_random < RAND_MAX - remainder) {
		return min + base_random/bucket;
	} else {
		return random_in_range (min, max);
	}  	
}
