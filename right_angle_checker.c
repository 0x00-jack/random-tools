#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter the first angle: ");
    scanf("%f", &angle1);

    printf("Enter the second angle: ");
    scanf("%f", &angle2);
    
    //let sum of angles in a right-angled triangle = 180 degs
    angle3 = 180.0 - (angle1 + angle2);
    
    printf("\nAngles of the triangle:\n");
    printf("Angle 1 = %.2f degrees\n", angle1);
    printf("Angle 2 = %.2f degrees\n", angle2);
    printf("Angle 3 = %.2f degrees\n", angle3);
    
    if (angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
        printf("Invalid triangle.\n");
    } else if (angle1 == 90.0 || angle2 == 90.0 || angle3 == 90.0) {
        printf("The triangle is a right-angled triangle.\n");
    } else {
        printf("The triangle is not a right-angled triangle.\n");
    }

    return 0;
}
