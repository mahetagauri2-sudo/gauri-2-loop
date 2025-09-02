#include <stdio.h>
#include <conio.h>

void main() {
    int i, n, sum=0;
    clrscr();
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        sum += 2*i;
    }
    printf("Sum = %d", sum);
    getch();
}
