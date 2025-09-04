#include <stdio.h>
#include <conio.h>

int main() {
    int i, num, largest, smallest;
    clrscr();
    printf("Enter 100 numbers:\n");
    scanf("%d", &num);
    largest = smallest = num;
    for(i=2; i<=100; i++) {
        scanf("%d", &num);
        if(num > largest)
            largest = num;
        if(num < smallest)
            smallest = num;
    }
    printf("Largest = %d\nSmallest = %d", largest, smallest);
    getch();
    return 0;
}
