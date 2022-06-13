#include <stdio.h>
#include <stdlib.h>

int main(int argc, double *argv[])
{
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = (width + height) * 2.0;
    area = width * height;
    printf("Height, Width, Perimeter:  %f %f %f\n", height, width, perimeter);
    printf("Height, Width, Area:  %f %f %f\n", height, width, area);

    return 0;
}
