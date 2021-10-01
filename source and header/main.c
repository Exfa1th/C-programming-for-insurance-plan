#include <stdio.h>
#include "function.h"

int main(){
	int c;
	printf("\nWelcome to ZeeMedLife insurance company! Please select desired function\n");
	printf("\n1.Plan subscription\n 2.Claim Process\n 3.Account Information\n 4.Search\n");
	scanf("%d", &c);

	switch (c)
	{
	case 1:
		AddInfo(); break;
	case 2:
		claimMENU(); break;
	case 3:
		totalMENU(); break;
	case 4:
		searchmenu(); break;
	default:
		printf("error selection"); break;
	}

	return 0;

}
	
	