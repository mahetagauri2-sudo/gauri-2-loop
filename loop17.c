#include <stdio.h>
#include <conio.h>

int main() {
    int i, num, pos=0, neg=0, zero=0;
    clrscr();
    printf("Enter 200 values:\n");
    for(i=1; i<=200; i++) {
        scanf("%d", &num);
        if(num > 0)
            pos++;
        else if(num < 0)
            neg++;
        else
            zero++;
    }
    printf("Positive = %d\nNegative = %d\nZeroes = %d", pos, neg, zero);
    getch();
    return 0;
}
