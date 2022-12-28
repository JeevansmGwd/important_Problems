#include <stdio.h>
int main(void) {
	float kilometers;

	printf("Please enter kilometers:");
	scanf("%f", &kilometers);

	float miles = kilometers / 1.6;

	printf("%f Miles", miles);
}