#include <stdio.h>

int main() {
    float x, y = 2, z = 3, a = 4, rate = 10;
    float price = 100, quantity = 2, discount = 10;
    float total, score = 100, penalty = 5, mistake = 2;

    // 1. x = x - 4.0;
    x = 10.0;
    x = x - 4.0;
    printf("1. แบบเต็ม: x = %.2f\n", x);  // ผลลัพธ์: 6.00

    x = 10.0;
    x -= 4.0;
    printf("1. แบบย่อ : x = %.2f\n\n", x);  // ผลลัพธ์: 6.00

    // 2. x = 6.5 * x;
    x = 2.0;
    x = 6.5 * x;
    printf("2. แบบเต็ม: x = %.2f\n", x);  // ผลลัพธ์: 13.00

    x = 2.0;
    x *= 6.5;
    printf("2. แบบย่อ : x = %.2f\n\n", x);  // ผลลัพธ์: 13.00

    // 3. x = x % (y + z * a);
    int xi = 25;
    xi = xi % (int)(y + z * a);  // xi = 25 % (2 + 3*4) = 25 % 14 = 11
    printf("3. แบบเต็ม: xi = %d\n", xi);

    xi = 25;
    xi %= (int)(y + z * a);
    printf("3. แบบย่อ : xi = %d\n\n", xi);

    // 4. x = x / (2.0 * x);
    x = 4.0;
    x = x / (2.0 * x);  // 4 / 8 = 0.5
    printf("4. แบบเต็ม: x = %.2f\n", x);

    x = 4.0;
    x /= (2.0 * x);
    printf("4. แบบย่อ : x = %.2f\n\n", x);

    // 5. total = total + (price * quantity - discount);
    total = 0;
    total = total + (price * quantity - discount);  // 0 + (100*2 - 10) = 190
    printf("5. แบบเต็ม: total = %.2f\n", total);

    total = 0;
    total += (price * quantity - discount);
    printf("5. แบบย่อ : total = %.2f\n\n", total);

    // 6. x = x * (1 + rate / 100);
    x = 200;
    x = x * (1 + rate / 100);  // 200 * (1 + 10/100) = 200 * 1.1 = 220
    printf("6. แบบเต็ม: x = %.2f\n", x);

    x = 200;
    x *= (1 + rate / 100);
    printf("6. แบบย่อ : x = %.2f\n\n", x);

    // 7. score = score - (penalty * (mistake + 1));
    score = 100;
    score = score - (penalty * (mistake + 1));  // 100 - 5 * 3 = 85
    printf("7. แบบเต็ม: score = %.2f\n", score);

    score = 100;
    score -= (penalty * (mistake + 1));
    printf("7. แบบย่อ : score = %.2f\n", score);

    return 0;
}