#include <stdio.h>

int main(void) {
	int a,b,c,d;
	a,b,c,d = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (a > b)
		if (a > c && a > d)
			if ( b < c && b < d)
				printf("The higest is: %d\nThe lowest is: %d\n", a, b);
			else if (c < b && c < d)
				printf("The higest is: %d\nThe lowest is: %d\n", a, c);
			else
				printf("The hidest is: %d\nThe lowest is: %d\n", a, d);

		else if (a < c && c > d)
			if (a < b && a < d)
				printf("The higest is: %d\nThe lowest is: %d\n", c, a);
			else if(b < a && b < d)
				printf("The higest is: %d\nThe lowest is: %d\n", c, b);
			else
				printf("The higest is: %d\nThe lowest is: %d\n", c, d);

		else if (a < b && a < c)
			printf("The higest is: %d\nThe lowest is: %d\n", d, a);
		else if (b < a && b < c)
			printf("The higest is: %d\nThe lowest is: %d\n", d, b);
		else
			printf("The higest is: %d\nThe lowest is: %d\n", d, c);


	else if (b > a)
		if (b > c && b > d)
			if (a < c && a < d)
				printf("The higest is: %d\nThe lowest is: %d\n", b, a);
			else if (c < a && c < d)
				printf("The higest is: %d\nThe lowest is: %d\n", b, c);
			else
				printf("The higest is: %d\nThe lowest is: %d\n", b, d);
		else if (b < c && c > d) 
			if (a < b && a < d)
				printf("The higest is: %d\nThe lowest is: %d\n", c, a);
			else if (b < a && b < d)
				printf("The higest is: %d\nThe lowest is: %d\n", c, b);
			else 
				printf("The higest is: %d\nThe lowest is: %d\n", c, d);
		else if (a < b && a < c)
			printf("The higest is: %d\nThe lowest is: %d\n", d, a);
		else if (b < a && b < c)
			printf("The higest is: %d\nThe lowest is: %d\n", d, b);
		else
			printf("The higest is: %d\nThe lowest is: %d\n", d, c);

	return 0;
}

