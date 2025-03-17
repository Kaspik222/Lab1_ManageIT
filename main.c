#include <stdio.h>
#include <string.h>

void clearInputBuffer(void);

int main(void) {
	double x, y;
	while (1) {
		printf("Enter one number: ");
		scanf_s("%lf", &x);
		printf("Enter second number: ");
		scanf_s("%lf", &y);
		clearInputBuffer();
		printf("Enter operation that you want to perform (+, -, /, *)\nor \'q\' for exit: ");
		char operation = getchar();
		if ('q' == operation) break;
		printf("\nResult: ");
		switch (operation) {
		case '+':
			printf("%.3lf", x + y);
			break;
		case '-':
			printf("%.3lf", x - y);
			break;
		case '*':
			printf("%.3lf", x * y);
			break;
		case '/':
			if (!y) printf("can not divide on zero !!!");
			else printf("%.3lf", x / y);
			break;
		default:
			puts("Unknown operation :(");
			break;
		}
        putchar('\n');
	}
	return 0;
}

void clearInputBuffer(void) {
	register int c = 0;
	while ((c = getchar()) != '\n' && c != EOF);
}