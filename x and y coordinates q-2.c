#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x coordinate: ");
    scanf("%d",&x);

    printf("Enter y coordinate: ");
    scanf("%d",&y);

    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in thequadrant I\n", x, y);
        
    }
    else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in quadrant II\n", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in quadrant III\n", x, y);
    }
    else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in quadrant IV\n", x, y);
    }
    else {
        printf("The point (%d, %d) lies on the axis\n", x, y);
    }

    return 0;
}

