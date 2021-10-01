#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"function.h"

void searchID(char id[]) {
	char line[301];
	FILE* fid;
	fid = fopen("Personal Details.txt", "r");
	if (fid == NULL) {
		printf("Error opening file");
	}
	while (fgets(line, 300, fid)) {
		if (strstr(line, id) != NULL) {
			printf("\n%s", line);

		}
	}

	return main();
}

int idsearch() {
	char w[200];
	printf("Enter ID: ");
	getchar();
	gets(w);
	searchID(w);
}
