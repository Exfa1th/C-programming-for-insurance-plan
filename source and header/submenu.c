#include<stdio.h>
#include<string.h>
#include "function.h"

void searchmenu() {
	int select;
	printf("Please select your desire search:");
	printf("\n1.Subsriber ID\n2.Plan\n");
	printf("\nEnter selection:");
	scanf("%d", &select);

	switch (select) {
	case 1:
		idsearch();
	case 2:
		plansearch();
	default:
		printf("ERROR"); break;
	}
}