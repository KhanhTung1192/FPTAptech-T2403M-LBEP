#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Tuoi: ");
    scanf("%d", &a);
    printf("Luong: ");
    scanf("%d", &b);
    c = a;
    d = b;
    printf("Tuoi hien tai: %d tuoi\n", c);
    printf("Luong hien tai: %d dong", d);
    return 0;
}