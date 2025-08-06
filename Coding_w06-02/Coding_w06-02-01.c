#include <stdio.h>

int main() {
    int i = 1, j = 2, k = 3; // กำหนดค่าตัวแปร i, j, k

    printf("เริ่มต้น: i = %d, j = %d, k = %d\n", i, j, k);// แสดงค่าตัวแปรเริ่มต้น

    k = i + j;
    printf("หลัง k = i + j: i = %d, j = %d, k = %d\n", i, j, k);// การบวกค่าตัวแปร i กับ j

    i = i + (k * j);
    printf("หลัง i = i + (k * j): i = %d, j = %d, k = %d\n", i, j, k);// การคูณค่าตัวแปร k กับ j และบวกกับ i

    j = i / 2;
    printf("หลัง j = i / 2: i = %d, j = %d, k = %d\n", i, j, k);//   การหารค่าตัวแปร i ด้วย 2

    k = i % 2;
    printf("หลัง k = i %% 2: i = %d, j = %d, k = %d\n", i, j, k);//  การหาค่าที่เหลือจากการหาร i ด้วย 2

    i = (j + k) * 3;
    printf("หลัง i = (j + k) * 3: i = %d, j = %d, k = %d\n", i, j, k);/// การบวกค่าตัวแปร j กับ k และคูณด้วย 3

    return 0;
}