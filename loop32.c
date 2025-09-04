#include <stdio.h>
#include <conio.h>

int main() {
    int i, j, count = 0;
    clrscr();
    for(i = 2; i <= 500; i++) {
        for(j = 2; j < i; j++) {
            if(i % j == 0)
                break;
        }
        if(j == i)
            count++;
    }
    printf("%d", count);
    getch();
    return 0;
}
