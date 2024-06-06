#include <stdio.h>
#include <stdbool.h>

int main() {
    int age;
    bool voter;
    int isVoteer;
    printf("\nEnter your age: ");
    scanf("%d", &age);

    printf("Are you a Kenyan citizen? (1 or 0): ");
    scanf("%d", &isVoteer);
    voter = (isVoteer == 1);

    if (voter && age >= 18) {
        printf("\nYou are eligible to vote!");
    } else {
        printf("\nSorry. You are not eligible to vote.");
    }

    return 0;
}