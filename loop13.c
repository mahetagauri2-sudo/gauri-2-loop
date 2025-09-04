#include <stdio.h>
#include <conio.h>

int main() {
    int i, sum = 0;
    clrscr();
    for(i=1; i<=100; i++) {
        if(i % 13 == 0) {
            sum += i;
        }
    }
    printf("Sum = %d", sum);
    getch();
    return 0;
}
