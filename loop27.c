#include <stdio.h>
#include <conio.h>

int main() {
    int num, i;
    long fact = 1;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("Factorial = %ld", fact);
    getch();
    return 0;
}
