#include <stdio.h>
#include <conio.h>

int main() {
    int n, sq, temp, pow10 = 1;
    clrscr();
    scanf("%d", &n);
    sq = n * n;
    temp = n;
    while(temp > 0) {
        pow10 *= 10;
        temp /= 10;
    }
    if(sq % pow10 == n)
        printf("Automorphic");
    else
        printf("Not Automorphic");
    getch();
    return 0;
}
