#include<stdio.h>
int main() {
	int digit = 0, numbers[11] = {};
	scanf_s("%d", &digit);
	if (digit >= 2 && digit <= 1000) {
		int zero = 0, k=0, count = 0, d=0;
		for (int i = 0; i < digit; i++) { // scan number
			int num;
			scanf_s("%d", &num);
			if (num >= 0 && num <= 9) numbers[num]++;
			else return 0;
		}
		//output
		for (int n = 1; n < 10; n++) {
			if (count == 1) {
				for (int m = 0; m < numbers[0]; m++) {
					printf("0");
				}
				if (k > 0 && d > 0) {
					for (int p = 0; p < k; p++) {
						printf("%d", d);
					}
				}
				count++;
			}
			if (numbers[n] > 0) {
				if (count == 0) {
					if (numbers[n] > 1) {
						k = numbers[n] - 1;//for first least number
						d = n;
					}
					printf("%d", n);
					count++;
				}
				else if (count > 1) {
					for (int p = 0; p < numbers[n]; p++) {
						printf("%d", n);
					}
				}
			}
			else if (numbers[n] == 0) continue;
		}
	}
	return 0;
}