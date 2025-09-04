#include <stdio.h>
#include <conio.h>

int main() {
    int i, val, sum = 0;
    float mean;
    clrscr();
    printf("Enter 10 values:\n");
    for(i=1; i<=10; i++) {
        scanf("%d", &val);
        sum += val;
    }
    mean = sum / 10.0;
    printf("Sum = %d\nMean = %.2f", sum, mean);
    getch();
    return 0;
}
