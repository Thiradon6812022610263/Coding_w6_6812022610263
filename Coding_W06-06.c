#include <stdio.h>

int main() {
    int a = 5, b = 2;
    float x = 3.0, y = 4.5;

    int r1 = a++ * b + (int)y % 3; // r1 = 5*2 + (int)4.5%3 = 10 + 1 = 11; a=6
    printf("r1 = %d\n", r1);

    int r2 = (a > b) && ((int)x / b < 2); // (6>2) && (3/2<2) => 1 && 1 = 1
    printf("r2 = %d\n", r2);

    float r3 = ++x * y - a / 2; // ++x=4.0; r3=4.0*4.5-6/2=18.0-3=15.0
    printf("r3 = %.2f\n", r3);

    float r4 = ((x += 1.5) > y) || (b-- > 0); // x=5.5; (5.5>4.5)=1; r4=1.0
    printf("r4 = %.2f\n", r4);

    return 0;
}