#include <stdio.h>
#include <conio.h>

int main() {
    int num, temp, rev = 0, digit;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    if(num == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome");
    getch();
    return 0;
}
