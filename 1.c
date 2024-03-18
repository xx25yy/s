#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Week {
    char *day;
    int date;
    char *actdisp;
};

struct Week day[7];

void read() {
    for (int i = 0; i < 7; i++) {
        day[i].day = (char *)malloc(100 * sizeof(char)); // Allocate memory for the day
        

        printf("Enter the Day for week:\n");
        scanf("%s", day[i].day);

        printf("Enter the date for week:\n");
        scanf("%d", &day[i].date);

        day[i].actdisp = (char *)malloc(100 * sizeof(char)); // Allocate memory for the activity description
        

        printf("Enter the activity description:\n");
        scanf(" %[^\n]", day[i].actdisp); // Read the entire line
    }
}

void display() {
    printf("------------Calendar---------\n");

    for (int i = 0; i < 7; i++) {
        printf("Date:%d, \t Day:%s, \t Activity Description:%s \n", day[i].date, day[i].day, day[i].actdisp);
    }
}

int main() {
    read();
    display();
    
    
    return 0;
}
