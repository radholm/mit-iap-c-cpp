#include "stdio.h"

void amaze1() {
	printf("amaze1:\t");
	for (int i = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

void amaze2() {
	int i = 0;
	printf("amaze2:\t");
  do {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
    i++;
  } while (i < 11);
	printf("\n");
}

void amaze3() {
  int i = 0;
	printf("amaze3:\t");
  while (i < 11) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
    i++;
  }
	printf("\n");
}

void amaze4() {
}

int main() {
  amaze1();
  amaze2();
  amaze3();

  return 0;
}
