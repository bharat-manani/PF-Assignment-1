#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    int count[10] = {0}; // counts for numbers 0–9
    int i;  // declare loop variable outside

    printf("Enter first number: ");
    scanf("%d", &num1);
    if (num1 >= 0 && num1 <= 9) count[num1]++;

    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num2 >= 0 && num2 <= 9) count[num2]++;

    printf("Enter third number: ");
    scanf("%d", &num3);
    if (num3 >= 0 && num3 <= 9) count[num3]++;

    printf("Enter fourth number: ");
    scanf("%d", &num4);
    if (num4 >= 0 && num4 <= 9) count[num4]++;

    printf("Enter fifth number: ");
    scanf("%d", &num5);
    if (num5 >= 0 && num5 <= 9) count[num5]++;

    printf("Number\tOccurrences\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t%d\n", i, count[i]);
    }

    return 0;
}
