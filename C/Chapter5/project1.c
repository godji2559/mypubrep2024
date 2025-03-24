#include <stdio.h>

int main(void) {
	int i;
	scanf("%d", &i);
	if (i>=1 && i <= 9) 
		printf("one");
	else if (i>=10 && i <= 99)
		printf("two");
	else if (i>=100 && i <= 999)
		printf("three");
	else if (i>=1000 && i <=9999)
		printf ("four");
	else
		printf("not found");
	return 0;
}

