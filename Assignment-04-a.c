#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Enter 5 cards (1 to 13):\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // check all possibilities of full house
    if ((a==b && b==c && d==e && a!=d) || 
        (a==b && b==d && c==e && a!=c) ||
        (a==b && b==e && c==d && a!=c) ||
        (a==c && c==d && b==e && a!=b) ||
        (a==c && c==e && b==d && a!=b) ||
        (a==d && d==e && b==c && a!=b) ||
        (b==c && c==d && a==e && b!=a) ||
        (b==c && c==e && a==d && b!=a) ||
        (b==d && d==e && a==c && b!=a) ||
        (c==d && d==e && a==b && c!=a)) {
        printf("The hand is a Full House!\n");
    } else {
        printf("The hand is NOT a Full House.\n");
    }

    return 0;
}

