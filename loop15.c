#include <stdio.h>
#include <conio.h>

int main() {
    int i, n, val, sum = 0;
    float mean;
    clrscr();
    printf("Enter number of values: ");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);
    for(i=1; i<=n; i++) {
        scanf("%d", &val);
        sum += val;
    }
    mean = sum / (float)n;
    printf("Sum = %d\nMean = %.2f", sum, mean);
    getch();
    return 0;
}
