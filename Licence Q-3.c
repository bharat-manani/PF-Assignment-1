#include <stdio.h>

int main() {
    int age;
    char eyesight, written, driving, medical;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 18) {
        printf(" Not Eligible for license\n");
    } else {
        printf("Have you passed Your eyesight test? (P/F): ");
        scanf(" %c", &eyesight);
        if (eyesight == 'F') {
            printf(" You need prescription glasses\n");
        } else {
            printf("Have you passed the written test? (P/F): ");
            scanf(" %c", &written);
            if (written == 'F') {
                printf(" Not Eligible for license\n");
            } else {
                printf("Have you passed the driving test? (P/F): ");
                scanf(" %c", &driving);
                if (driving == 'F') {
                    printf(" Not Eligible for license\n");
                } else {
                    if (age > 60) {
                        printf("Do you have a medical certificate? (Y/N): ");
                        scanf(" %c", &medical);
                        if (medical == 'Y') {
                            printf("Eligible for license\n");
                        } else {
                            printf(" Not Eligible for license\n");
                        }
                    } else {
                        printf("Eligible for license\n");
                    }
                }
            }
        }
    }
    return 0;
}

