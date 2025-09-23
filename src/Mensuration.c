#include <stdio.h>
#define M_PI 3.14;
#define SQUARE(X) X *X
#define CUBE(Y) Y *Y *Y
#include <math.h>

void Mensuration()
{
    int choice;
    float p, a, v, csa, tsa, r, l, b, h, s, s1, s2, s3, s4, d1, d2, sl;
    const float PI = 3.14;
    printf("Select a shape:\n");

    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("4. Square\n");
    printf("5. Parallelogram\n");
    printf("6. Trapezium\n");
    printf("7. Rhombus\n");
    printf("8. sphere\n");
    printf("9. Hemi_sphere\n");
    printf("10. Cube\n");
    printf("11. Cone\n");
    printf("12. Cuboid\n");
    printf("13. Pyramid\n");
    printf("14. Cylinder\n");

    printf("Enter your choice (1-14):\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Circle

        printf("Enter the r:\n");
        scanf("%f", &r);
        p = 2 * PI * r;
        a = PI * SQUARE(r);
        printf("Perimeter of circle: %.2f\nArea of circle: %.2f\n", p, a);
        printf("It's a 2D geometry, it doesn't have volume.\n");
        break;

    case 2: // Rectangle

        printf("Enter length and breadth:\n");
        scanf("%f %f", &l, &b);
        p = 2 * (l + b);
        a = l * b;
        printf("Perimeter of rectangle: %.2f\nArea of rectangle: %.2f\n", p, a);
        printf("It's a 2D geometry, it doesn't have volume.\n");
        break;

    case 3: // Triangle

        printf("Enter s1, s2, s3 and h (s2 is base):\n");
        scanf("%f %f %f %f", &s1, &s2, &s3, &h);
        p = s1 + s2 + s3;
        a = 0.5 * s2 * h;
        printf("Perimeter of triangle: %.2f\nArea of triangle: %.2f\n", p, a);
        printf("It's a 2D geometry, it doesn't have volume.\n");
        break;

    case 4: // Square

        printf("Enter s :\n");
        scanf("%f", &s);
        p = 4 * s;
        a = SQUARE(s);
        printf("Perimeter of square: %.2f\nArea of square: %.2f\n", p, a);
        printf("It's a 2D geometry, it doesn't have volume.\n");
        break;

    case 5: // Parallelogram

        printf("Enter l, h and b:\n");
        scanf("%f %f %f", &l, &h, &b);
        p = 2 * (l + b);
        a = l * h;
        printf("Perimeter of parallelogram: %.2f\nArea of parallelogram: %.2f\n", p, a);
        printf("It's a 2D geometry, it doesn't have volume.\n");
        break;

    case 6: // Trapezium

        printf("Enter sides s1, s2, s3, s4, h  (s1 and s2 re parallel sides):\n");
        scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &h);
        p = s1 + s2 + s3 + s4;
        a = 0.5 * (s1 + s2) * h;
        printf("Perimeter of trapezium: %.2f\nArea of trapezium: %.2f\n", p, a);
        printf("It's a 2D geometry, it doesn't have volume.\n");
        break;

    case 7: // Rhombus

        printf("Enter side length and height:\n");
        scanf("%f %f", &s, &h);
        p = 4 * s;
        a = s * h;
        printf("Perimeter of rhombus: %.2f\nArea of rhombus: %.2f\n", p, a);
        printf("It's a 2D geometry, it doesn't have volume.\n");
        break;

    case 8: // Sphere

        printf("Enter the r:\n");
        scanf("%f", &r);
        a = 4 * PI * SQUARE(r);
        v = 1.33 * PI * CUBE(r);
        printf("Volume of sphere: %.2f\nArea of sphere: %.2f\n", v, a);
        printf("It's a 3D geometry, it doesn't have perimeter\n");
        break;

    case 9: // Hemi_sphere

        printf("Enter the r:\n");
        scanf("%f", &r);
        v = 0.67 * PI * CUBE(r);
        csa = 2 * PI * SQUARE(r);
        tsa = 3 * PI * SQUARE(r);
        printf("Volume of hemi_sphere: %.2f\nCSA of hemi_sphere: %.2f\nTSA of hemi_sphere: %.2f\n", v, csa, tsa);
        printf("It's a 3D geometry, it doesn't have perimeter\n");
        break;

    case 10: // Cube

        printf("Enter the s:\n");
        scanf("%f", &s);
        v = CUBE(s);
        csa = 4 * SQUARE(s);
        tsa = 6 * SQUARE(s);
        printf("Volume of cube: %.2f\nCSA of cube: %.2f\nTSA of cube: %.2f\n", v, csa, tsa);
        printf("It's a 3D geometry, it doesn't have perimeter\n");
        break;

    case 11: // Cone

        printf("Enter r, h, sl:\n");
        scanf("%f %f %f", &r, &h, &sl);
        v = 0.33 * PI * r * r * h;
        csa = PI * r * sl;
        tsa = (PI * SQUARE(r)) + csa;
        printf("Volume of cone: %.2f\nCSA of cone: %.2f\nTSA of cone: %.2f\n", v, csa, tsa);
        printf("It's a 3D geometry, it doesn't have perimeter\n");
        break;

    case 12: // Cuboid

        printf("Enter l, b, h:\n");
        scanf("%f %f %f", &l, &b, &h);
        v = l * b * h;
        csa = 2 * h * (l + b);
        tsa = (2 * l * b) + csa;
        printf("Volume of cuboid: %.2f\nCSA of cuboid: %.2f\nTSA of cuboid: %.2f\n", v, csa, tsa);
        printf("It's a 3D geometry, it doesn't have perimeter\n");
        break;

    case 13: // Pyramid

        printf("Enter s, sl, h:\n");
        scanf("%f %f %f", &s, &sl, &h);
        v = 0.33 * SQUARE(s) * h;
        csa = 2 * s * sl;
        tsa = SQUARE(s) + csa;
        printf("Volume of pyramid: %.2f\nCSA of pyramid: %.2f\nTSA of pyramid: %.2f\n", v, csa, tsa);
        printf("It's a 3D geometry, it doesn't have perimeter\n");
        break;

    case 14: // Cylinder

        printf("Enter r, h:\n");
        scanf("%f %f", &r, &h);
        v = PI * r * r * h;
        csa = 2 * PI * r * h;
        tsa = 2 * PI * r * (r + h);
        printf("Volume of cylinder: %.2f\nCSA of cylinder: %.2f\nTSA of cylinder: %.2f\n", v, csa, tsa);
        printf("It's a 3D geometry, it doesn't have perimeter\n");
        break;

    default:

        printf("Error: Choose between 1 to 14 only.\n");

        break;
    }

    return;
}
