#include <stdio.h>

int main() {
	char ime[50];

	printf("Write your name down\n");
	scanf(" %s", &ime);

	printf("Your name is %s", ime);

	return 0;
}