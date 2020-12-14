#include <stdio.h>


int main() {

	char str[10000];
	int n;
	int i = 0;
	int j = 0;
	int mid;
	int null = 0;
	int max = 1;
	int k = 0;

	scanf("%d", &n);
	
	scanf("%s",str);
	mid = n / 2;

	for (i = 0; i<mid+1; i++) {
		for (j = 0; j<mid - i; j++) {
			printf(" ");
		}

		if (i == 0) {
			printf("%c", str[mid + i]);
		}
		else {
			printf("%c", str[mid - k]);
			for (null = 0; null<max; null++) {
				printf("*");
			}
			printf("%c", str[mid + k]);
			max++;
			max++;
		}
		printf("\n");
		k++;
	}

	return 0;
}
