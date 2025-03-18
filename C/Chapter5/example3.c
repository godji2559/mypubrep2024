#include <stdio.h>

int main(void) {
	int grade;
	grade = 3;
	switch (grade) {
		case 4: printf("Exeellent");
		case 3: printf("Good");
		case 2: printf("Average");
		case 1: printf("Poor");
		case 0: printf("Failing");
		default: printf("Illegal grade");
		}
	return 0;
}
