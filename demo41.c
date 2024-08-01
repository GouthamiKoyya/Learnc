#include <stdio.h>

int main () {
    int doorCode = 1334;

    if (doorCode == 1337) {
        printf("Correct code.\nThe door is now open.");
    } else {
        printf("Wrong code.\nThe door remains closed.");
    }
    return 0;
}