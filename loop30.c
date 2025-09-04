#include <stdio.h>
#include <conio.h>

int main() {
    int num, product = 1, digit;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }
    printf("Product of digits = %d", product);
    getch();
    return 0;
}
