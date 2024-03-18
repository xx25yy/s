#include<stdio.h>
#include<math.h>
void Tower(int n, char source, char temp, char destination){
if(n == 0) return;
Tower(n-1, source, destination, temp);
printf("\n Move disc %d from %c to %c", n, source, destination);
Tower(n-1, temp, source, destination);
}
void main(){
int n;
printf("\nEnter the number of discs: ");
scanf("%d", &n);
Tower(n, 'S', 'T', 'D');
printf("\n\n Total Number of moves are: %d", (int)pow(2,n)-1);
}
