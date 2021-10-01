#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "function.h"

struct PersonalInfo {
    int claimType;
    char Name[25];
    char contactNo[25];
    char address[25];
    char medicalHistory[25];
    int age;
    int Plan;
};

void AddInfo() {
    int id;
    id = idcounter();
    FILE* f;
    FILE* f2;
    FILE* f3;
    f = fopen("Personal Details.txt", "a");
    f2 = fopen("annual.txt", "a");
    f3 = fopen("lifetime.txt", "a");
    if (f == NULL){
        printf("\nCannot create the files\n");
    }
    else {
        struct PersonalInfo S1;
        printf("Please enter your age: ");
        scanf("%d", &S1.age);
        if ((S1.age >= 1) && (S1.age <= 21)) {
            printf("You are eligible for Plan120, Plan150 and Plan200\n");
            printf("Which plan do you want to subscribe to((1)Plan120, (2)Pane150, (3)Plan200)\n: ");
            scanf("%d", &S1.Plan);
            if (S1.Plan == 1)
            {
                printf("You have chosen Plan120");
                printf("Annual Claim or Lifetime Claim(enter 1(Annual) or 2(lifetime)): ");
                scanf_s("%d", &S1.claimType);
                if (S1.claimType == 1) {
                    printf("\nClaim Type: Annual");
                    fputs("Plan120\t", f);
                    fputs("Annual\t", f);
                    fputs("Plan120\t", f2);
                    fputs("Annual\t", f2);
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f2);
                    fputs(S1.Name, f2);
                    
                }
                if (S1.claimType == 2) {
                    printf("\nClaim Type: Lifetime");
                    fputs("Plan120\t", f);
                    fputs("Lifetime\t", f);
                    fputs("Plan120\t", f3);
                    fputs("Lifetime\t", f3);
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f3);
                    fputs(S1.Name, f3);
                }
            }
            else if (S1.Plan == 2)
            {
                printf("You have chosen Plan150");
                printf("Annual Claim or Lifetime Claim(enter 1(Annual) or 2(lifetime)): ");
                scanf_s("%d", &S1.claimType);
                if (S1.claimType == 1) {
                    printf("\nClaim Type: Annual");
                    fputs("Plan150\t", f);
                    fputs("Annual\t", f);
                    fputs("Plan150\t", f2);
                    fputs("Annual\t", f2);
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f2);
                    fputs(S1.Name, f2);
                }
                if (S1.claimType == 2) {
                    printf("\nClaim Type: Lifetime");
                    fputs("Plan150\t", f);
                    fputs("Lifetime\t", f);
                    fputs("Plan150\t", f3);
                    fputs("Lifetime\t", f3);
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f3);
                    fputs(S1.Name, f3);

                }

            }
            else if (S1.Plan == 3)
            {
                printf("You have chosen Plan200");
                printf("Annual Claim or Lifetime Claim(enter 1(Annual) or 2(lifetime)): ");
                scanf_s("%d", &S1.claimType);
                if (S1.claimType == 1) {
                    printf("\nClaim Type: Annual");
                    fputs("Plan200\t", f);
                    fputs("Annual\t", f);
                    fputs("Plan200\t", f2);
                    fputs("Annual\t", f2);
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f2);
                    fputs(S1.Name, f2);
                }
                if (S1.claimType == 2) {
                    printf("\nClaim Type: Lifetime");
                    fputs("Plan200\t", f);
                    fputs("Lifetime\t", f);
                    puts("Plan200\t", f3);
                    fputs("Lifetime\t", f3);
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f3);
                    fputs(S1.Name, f3);
                }
            }
        }
        else if ((S1.age >= 21) && (S1.age <= 40)) {
            printf("You are eligible for Plan150 and Plan200\n");
            printf("Which play do you want to subscribe to((1)Pane150, (2)Plan200)\n:");
            scanf("%d", &S1.Plan);
            if (S1.Plan == 1) {
                printf("You have chosen Plan150");
                printf("Annual Claim or Lifetime Claim(enter 1(Annual) or 2(lifetime)): ");
                scanf_s("%d", &S1.claimType);
                if (S1.claimType == 1) {
                    printf("\nClaim Type: Annual");
                    fputs("Plan150\t", f);
                    fputs("Annual\t", f);
                    fputs("Plan150\t", f2);
                    fputs("Annual\t", f2);
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f2);
                    fputs(S1.Name, f2);
                }
                if (S1.claimType == 2) {
                    printf("\nClaim Type: Lifetime\t");
                    fputs("Plan150\t", f);
                    fputs("Lifetime\t", f);
                    fputs("Plan150\t", f3);
                    fputs("Lifetime\t", f3);
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f3);
                    fputs(S1.Name, f3);
                }
            }
            else if (S1.Plan == 2) {
                printf("You have chosen Plan200");
                printf("Annual Claim or Lifetime Claim(enter 1(Annual) or 2(lifetime)): ");
                scanf_s("%d", &S1.claimType);
                if (S1.claimType == 1) {
                    printf("\nClaim Type: Annual");
                    fputs("Plan200\t", f);
                    fputs("Annual\t", f);
                    fputs("Plan200\t", f2);
                    fputs("Annual\t", f2);;
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f2);
                    fputs(S1.Name, f2);
                }
                if (S1.claimType == 2) {
                    printf("\nClaim Type: Lifetime");
                    fputs("Plan200\t", f);
                    fputs("Lifetime\t", f);
                    fputs("Plan200\t", f3);
                    fputs("Lifetime\t", f3);
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f3);
                    fputs(S1.Name, f3);
                    
                }
            }
        }
        else if ((S1.age >= 41) && (S1.age <= 54)){
            printf("You are Plan200\n");
            printf("Which play do you want to subscribe to((1)Pane200\n:");
            scanf("%d", &S1.Plan);
            if (S1.Plan == 1) {
                printf("You have chosen Plan200");
                printf("Annual Claim or Lifetime Claim(enter 1(Annual) or 2(lifetime)): ");
                scanf_s("%d", &S1.claimType);
                if (S1.claimType == 1) {
                    printf("\nClaim Type: Annual");
                    fputs("Plan200\t", f);
                    fputs("Annual\t", f);
                    fputs("Plan200\t", f2);
                    fputs("Annual\t", f2);
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f2);
                    fputs(S1.Name, f2);
                }
                if (S1.claimType == 2) {
                    printf("\nClaim Type: Lifetime");
                    fputs("Plan200\t", f);
                    fputs("Lifetime\t", f);
                    fputs("Plan200\t", f3);
                    fputs("Lifetime\t", f3);
                    printf("\nName:");
                    getchar();
                    gets(S1.Name);
                    fputs("\tName:", f);
                    fputs(S1.Name, f);
                    fputs("\t", f3);
                    fputs(S1.Name, f3);
                    
                }
            }
            else{
                printf("thank you");
            }
        }
        printf("Address:");
        gets(S1.address);
        printf("Contact Number:");
        gets(S1.contactNo);
        printf("Medical History:");
        gets(S1.medicalHistory);
        fputs("ID:", f);
        fprintf(f, "%d", id);
        fputs("\tStreet:", f);
        fputs(S1.address, f);
        fputs("\tContactNo:", f);
        fputs(S1.contactNo, f);
        fputs("\tMedical History:", f);
        fputs(S1.medicalHistory, f);
        fputs("\n", f);
        fputs("\n", f2);
        fputs("\n", f3);
        fclose(f);
        fclose(f2);
        fclose(f3);
    }
    return main();
}
int idcounter(){
    int count = 1000;
    char ch;
    FILE* fPtr, *fPtr2;
    fPtr2 = fopen("Personal Details.txt", "a");
    fPtr = fopen("Personal Details.txt", "r");
    if (fPtr == NULL)
    {
        printf("\nUnable to open file.\n");
    }while (!feof(fPtr)) {
        ch = fgetc(fPtr);
        if (ch == '\n')
            count++;
    }
    fclose(fPtr);

    return count;
}