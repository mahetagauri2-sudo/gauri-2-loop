#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if(num == sum)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    getch();
    return 0;
}
