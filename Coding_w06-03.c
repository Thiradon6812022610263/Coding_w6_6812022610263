#include <stdio.h>

int main() {
    int x = 12, y = 7, z = 12;

    printf("x > y: %d\n", x > y);
    printf("x < z: %d\n", x < z);
    printf("x == z: %d\n", x == z);
    printf("x != z: %d\n", x != z);
    printf("!(2*5 >= y) ||(5!=(5/3)): %d\n", !(2*5 >= y) ||(5!=(5/3)));
    printf("!(x<y): %d\n", !(x<y));
    printf("(x+y)>(z*2): %d\n", (x+y)>(z*2));
    printf("(x %% 2==0)||(y %% 2 ==1): %d\n", (x % 2 == 0) || (y % 2 == 1));
    printf("(x>y)&&(z<y): %d\n", (x>y)&&(z<y));

    return 0;
}