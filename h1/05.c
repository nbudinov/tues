/*
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се разработи програма, която изисква от потребителя да въведе целочислено число, x, където 0 < x < 10. Да се инициализират масива от 10 елемента. Стойностите на елементите на масива да са равни на косинус от индекса на елемента. Да се изведе масивът, след което да се сортира в низходящ ред и отново да се изведе.
*/

#include<stdio.h>
#include<math.h>

void selectSort(int *a,int length ) {
//sortirane chrez priaka selekcia
	int k, i, j;
	double min;
	for(i = 0; i < length-1; i++) {
		min = a[i];
		k = i;	
		for(j = i+1; j < length; j++)
			if(a[j] < min) {
				k = j;
				min = a[k];
			}
		a[k] = a[i];
		a[i] = min;
	}
}

int main() {
	int x, arr[10];
	while ((x<=0) || (x>=10)) {
	pritnf("Vavedete x: ");	
	scanf("%d", &x);
	}

	int i;
	for(i=0; i<10; i++) {
		arr[i] = cos(i);
		printf("%d ", arr[i]);	
	}
	printf("\n");

	selectSort(arr,10);
	for(i=0; i<10; i++) {
		printf("%d ", arr[i]);	
	}
	printf("\n");	
}
