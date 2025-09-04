#include <stdio.h>
#include <conio.h>

int main() {
    int num, digit;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Digits are:\n");
    while(num > 0) {
        digit = num % 10;
        printf("%d\n", digit);
        num /= 10;
    }
    getch();
    return 0;
}
