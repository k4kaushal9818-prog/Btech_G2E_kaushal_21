#include <stdio.h>
int main()
{
	int Age ;
	printf("ENTER YOUR AGE :-");
	scanf("%d",&Age);
	if (Age <= 12) {
		printf("YOU ARE CHILD ");
	}
	else if (12<Age<=17) {
		printf("YOU ARE TEEN");
	}
	else if (18<=Age<=60) {
		printf("YOU ARE ADULT");
	}
	else if (Age>60) {
		printf("YOU ARE SENIOR CITIZEN ");
	}

	return 0;
}
