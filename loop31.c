#include <stdio.h>
#include <conio.h>

int main() {
    int i, j;
    clrscr();

    printf("Prime numbers between 1 and 500:\n");
    for(i = 2; i <= 500; i++) {
        for(j = 2; j < i; j++) {
            if(i % j == 0)
                break;
        }
        if(j == i)  
            printf("%d ", i);
    }

    getch();
    return 0;
}
