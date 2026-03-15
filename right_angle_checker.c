#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter the first angle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle: ");
    scanf("%d", &angle2);
    
    //let sum of angles in a right-angled triangle = 180 degs
    angle3 = 180 - (angle1 + angle2);
    int sum = angle1 + angle2 + angle3;

    printf("\nAngles of the triangle:\n");
    printf("Angle 1 = %d degrees\n", angle1);
    printf("Angle 2 = %d degrees\n", angle2);
    printf("Angle 3 = %d degrees\n", angle3);
    printf("Sum of angles = %d degrees\n\n", sum);

    if (angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
        printf("Invalid triangle.\n");
    } else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
        printf("The triangle is a right-angled triangle.\n");
    } else {
        printf("The triangle is not a right-angled triangle.\n");
    }

    return 0;
}
