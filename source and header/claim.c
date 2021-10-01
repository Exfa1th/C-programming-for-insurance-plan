#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "function.h"

struct claim {
	int new;
	char ward;
	char claimlimit;
	int supplies;
	int surgical;
	int other;
	int days;
};
int claimMENU() {
	int a;
	printf("1. Annual claim\n2. Lifetime claim\n");
	scanf("%d", &a);
	switch (a){
	case 1:
		annualclaim(); break;
	case 2:
		lifeclaim(); break;
	default:
		main(); break;
	}

}
int annualclaim() {
	int line[100];
	FILE* f1;
	FILE* f3;
	f1 = fopen("annual.txt", "r");
	f3 = fopen("claim annual.txt", "a");
	int a120 = 120000;
	int a150 = 150000;
	int a200 = 200000;
	int room;
	struct claim c;
	char name[25];
	char a[9];
	int total;
	printf("enter name search:");
	getchar();
	gets(name);
	while (fgets(line, 100, f1)) {
		if (strstr(line, name) != NULL) { //checks if string exist//
			printf("\n%s", line);
			if (line, "Plan120") { //check if plan 120 in line//
				printf("\nclaim limit is:%d", a120);
				printf("\nenter room type(1.normal/2.ICU)\n");
				scanf("%d", &room);
				if (room == 1) {
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery cost:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					total = ((c.days * 120) + c.supplies + c.surgical + c.other); //calculate the total charges//
					c.new = a120 - total;
					printf("\n new claim limit is: %d", c.new);
					fputs(name,f3);
					fputs("\tclaim limit:",f3);
					fprintf(c.new, f3);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);

				}
				else if(room == 2) {
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery Fees:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					printf("\nYour new claim limit is:");
					total = ((c.days * 250) + c.supplies + c.surgical + c.other);
					c.new = a120 - total;
					printf("\nYour new claim limit is: %d", &c.new);
					fputs(name, f3);
					fputs("\tclaim limit:", f3);
					fprintf(c.new, f3);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);
				}
				
			}
			else if (line,"Plan150"){
				printf("claim limit is:%d", a150);
				printf("enter room type(1.normal/2.ICU)");
				scanf("%d", &room);
				if (room == 1) {
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery Fees:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					printf("\nYour new claim limit is:");
					total = ((c.days * 150) + c.supplies + c.surgical + c.other); //calculate the total charges//
					c.new = a150 - total;
					printf("\n new claim limit is: %d", c.new);
					fputs(name, f3);
					fputs("\tclaim limit:", f3);
					fprintf(c.new, f3);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);
				}
				else if (room == 2) {
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery Fees:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					printf("\nYour new claim limit is:");
					total = ((c.days * 400) + c.supplies + c.surgical + c.other);
					c.new = a150 - total;
					printf("\nYour new claim limit is: %d", &c.new);
					fputs(name, f3);
					fputs("\tclaim limit :", f3);
					fprintf(c.new, f3);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);
				}

			}
			else if (line, "Plan200") {
				printf("claim limit is:%d", a200);
				printf("enter room type(1.normal/2.ICU)");
				scanf("%d", &room);
				if (room == 1) {
					printf("claim limit is:%d", a200);
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery Fees:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					printf("\nYour new claim limit is:");
					total = ((c.days * 200) + c.supplies + c.surgical + c.other); //calculate the total charges//
					c.new = a200 - total;
					printf("\n new claim limit is: %d", c.new);
					fputs(name, f3);
					fputs("\tclaim limit:", f3);
					fprintf(c.new, f3);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);

				}
				else if (room == 2) {
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery Fees:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					printf("\nYour new claim limit is:");
					total = ((c.days * 700) + c.supplies + c.surgical + c.other);
					c.new = a200 - total;
					printf("\nYour new claim limit is: %d", &c.new);
					fprintf(name, f3);
					fputs("\tclaim limit :", f3);
					fprintf(c.new, f3);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);
				}
			}
	

		}
		else {
			printf("Try looking in Lifetime");
			return claimMENU();
		}

	}
	

}

int lifeclaim() {
	int line[100];
	FILE* f1;
	FILE* f2;
	FILE* f3;
	f1 = fopen("lifetime.txt", "r");
	f2 = fopen("claim limit.txt", "a");
	f3 = fopen("claim lifetime.txt", "a");
	int l120 = 120000;
	int l150 = 150000;
	int l200 = 200000;
	int room;
	struct claim c;
	char name[25];
	char a[9];
	int total;
	printf("enter name search:");
	getchar();
	gets(name);
	while (fgets(line, 100, f1)) {
		if (strstr(line, name) != NULL) { //checks if string exist//
			printf("\n%s", line);
			if (line, "Plan120") { //check if plan 120 in line//
				printf("claim limit is:%d", l120);
				printf("enter room type(1.normal/2.ICU)");
				scanf("%d", &room);
				if (room == 1) {
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery Fees:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					printf("\nYour new claim limit is:");
					total = ((c.days * 120) + c.supplies + c.surgical + c.other); //calculate the total charges//
					c.new = l120 - total;
					printf("\n new claim limit is: %d", c.new);
					fputs(name, f3);
					fputs("\tclaim limit:", f3);
					fprintf(c.new, f3);
					fprintf(total, f2);
					fputs("\n", f2);
					fclose(f2);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);

				}
				else if (room == 2) {
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery Fees:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					printf("\nYour new claim limit is:");
					total = ((c.days * 250) + c.supplies + c.surgical + c.other);
					c.new = l120 - total;
					printf("\nYour new claim limit is: %d", &c.new);
					fputs(name, f3);
					fputs("\tclaim limit:", f3);
					fprintf(c.new, f3);
					fprintf(total, f2);
					fputs("\n", f2);
					fclose(f2);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);
				}

			}
			else if (line, "Plan150") {
				printf("claim limit is:%d", l150);
				printf("enter room type(1.normal/2.ICU)");
				scanf("%d", &room);
				if (room == 1) {
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery Fees:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					printf("\nYour new claim limit is:");
					total = ((c.days * 150) + c.supplies + c.surgical + c.other); //calculate the total charges//
					c.new = l150 - total;
					printf("\n new claim limit is: %d", c.new);
					fputs(name, f3);
					fputs("\tclaim limit:", f3);
					fprintf(c.new, f3);
					fprintf(total, f2);
					fputs("\n", f2);
					fclose(f2);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);
				}
				else if (room == 2) {
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery Fees:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					printf("\nYour new claim limit is:");
					total = ((c.days * 400) + c.supplies + c.surgical + c.other);
					c.new = l150 - total;
					printf("\nYour new claim limit is: %d", &c.new);
					fputs(name, f3);
					fputs("\tclaim limit :", f3);
					fprintf(c.new, f3);
					fprintf(total, f2);
					fputs("\n", f2);
					fclose(f2);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);
				}

			}
			else if (line, "Plan200") {
				printf("claim limit is:%d", l150);
				printf("enter room type(1.normal/2.ICU)");
				scanf("%d", &room);
				if (room == 1) {
					printf("claim limit is:%d", l200);
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery Fees:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					printf("\nYour new claim limit is:");
					total = ((c.days * 200) + c.supplies + c.surgical + c.other); //calculate the total charges//
					c.new = l200 - total;
					printf("\n new claim limit is: %d", c.new);
					fputs(name, f3);
					fputs("\tclaim limit:", f3);
					fprintf(c.new, f3);
					fprintf(total, f2);
					fputs("\n", f2);
					fclose(f2);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);

				}
				else if (room == 2) {
					printf("\n Please Enter no of days:");
					scanf("%d", &c.days);
					printf("\n Enter Hospital Supplies and Services cost:");
					scanf("%d", &c.supplies);
					printf("\n Enter Surgery Fees:");
					scanf("%d", &c.surgical);
					printf("\n Enter Other fees:");
					scanf("%d", &c.other);
					printf("\nYour new claim limit is:");
					total = ((c.days * 700) + c.supplies + c.surgical + c.other);
					c.new = l200 - total;
					printf("\nYour new claim limit is: %d", &c.new);
					fprintf(name, f3);
					fputs("\tclaim limit :", f3);
					fprintf(c.new, f3);
					fprintf(total, f2);
					fputs("\n", f2);
					fclose(f2);
					fputs("\n", f3);
					fclose(f1);
					fclose(f3);
				}
			}
		}
		else {
			printf("Try looking in annual");
			return claimMENU();
		}
	}


}