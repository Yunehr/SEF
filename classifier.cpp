#include <stdio.h>

void train(void);
void predict(void);

int main(void) {

	train(void);
	predict(void);

	return 0;
}

void train(void) {
	printf("train");
	printf("The second feature is added");
}

void predict(void) {
	printf("predict");
}