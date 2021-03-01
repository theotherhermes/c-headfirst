//
//  main.c
//  firsthead-second
//
//  Created by Admin on 28.02.2021.
//

#include <stdio.h>
#include <string.h>

char books[][20] = {
    "Bittle Muk",
    "Big Ban",
    "Several times"
};

void find_book(char search_book[20])
{
    int i;
    for (i=0; i<3; i++) {
        if (strstr(books[i], search_book))
            printf("№%i: %s\n", i+1, books[i]);
    }
}

int main() {
    char search_book[20];
    puts("Enter name book:");
    scanf("%19s", search_book);
    find_book(search_book);
    return 0;
}
