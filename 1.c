#include <stdio.h>

struct Week {
    char day[100];
    int date;
    char actdisp[100];
};

struct Week day[7];

void read() {
    for (int i = 0; i < 7; i++) { // Correct loop condition
        printf("Enter the date for week:\n");
        scanf("%d", &day[i].date);

        printf("Enter the Day for week:\n");
        scanf("%s", day[i].day);

        printf("Enter the activity description:\n");
        scanf(" %[^\n]", day[i].actdisp); // Use %[^\n] to read the entire line
    }
}

void display() {
    printf("------------Calendar---------\n");

    for (int i = 0; i < 7; i++) { // Correct loop condition
        printf("Date:%d, \t Day:%s, \t Activity Description:%s \n", day[i].date, day[i].day, day[i].actdisp);
    }
}

int main() {
    read();
    display();
    return 0;
}
