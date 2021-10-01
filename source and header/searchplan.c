#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "function.h"

void searchplan(char plan[]) {
	char line[301];
	FILE* fpl;
	fpl = fopen("Personal Details.txt", "r");
	if (fpl == NULL) {
		printf("Error opening file");
	}
	while (fgets(line, 300, fpl)) {
		if (strstr(line, plan) != NULL) {
			printf("\n%s", line);

		}
	}
	return main();
}

int plansearch() {
	char w[200];
	printf("Enter plan: ");
	getchar();
	gets(w);
	searchplan(w);
}