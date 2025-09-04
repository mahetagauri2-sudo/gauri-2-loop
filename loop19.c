#include <stdio.h>
#include <conio.h>

int main() {
    int i;
    clrscr();
    printf("Numbers divisible by 5 between 1 and 100:\n");
    for(i=1; i<=100; i++) {
        if(i % 5 == 0)
            printf("%d ", i);
    }
    getch();
    return 0;
}
