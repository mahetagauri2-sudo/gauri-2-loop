#include <stdio.h>
#include <conio.h>

int main() {
    int i, boys=0, girls=0;
    char sex;
    clrscr();
    printf("Enter sex code for 50 students (M/F):\n");
    for(i=1; i<=50; i++) {
        scanf(" %c", &sex); // space before %c avoids newline issue
        if(sex == 'M' || sex == 'm')
            boys++;
        else if(sex == 'F' || sex == 'f')
            girls++;
    }
    printf("Boys = %d\nGirls = %d", boys, girls);
    getch();
    return 0;
}
