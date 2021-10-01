#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "function.h"

void totalMENU() {
	int b;
	printf("1.Total amount by Lifetime subsribers\n2.Total annual Claim Limit subscribers who have exhausted all their eligible amount\n");
	scanf("%d", &b);
	switch (b)
	{
	case 1:
		totalclaim(); break;
	case 2:
		totalzero(); break;
	default:
		main(); break;
	}
}
	
int totalclaim() {
	int a, sum = 0;
	FILE* f1;
	f1 = fopen("claim limit.txt", "r");
	while (fscanf(f1, "%d", &a) == 1) {
		sum = sum +a;
	}
	printf("Sum=%d\n", sum);
	main();
}

int totalzero() {
	int count = 0;
	char string[500];
	FILE* pf;
	char* pch;
	char key[] = "claim limit:0";
	pf = fopen("claim annual.txt", "r");            /* open file for reading */

	while (fgets(string, 500, pf) != NULL)   /* while there's another line */
	{
		pch = strstr(string, key);
		while (pch != NULL)
		{
			++count;
			pch = strstr(pch + 1, key);
		}

	}
	printf("Total:%d", count);
	main();
}
