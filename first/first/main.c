// first examples appendix

#include "stdio.h"
#include "stdlib.h"

int main()
{
    char completed_project[2];
    int bank = 0;
    
    while (completed_project[0] != '0') {
        puts("Enter CODE completed project: ");
        scanf("%s", completed_project);
        
        switch (completed_project[0]) {
            case 'A':
            case 'B':
            case 'C':
                bank += 1;
                break;
            case 'D':
            case 'E':
            case 'F':
            case 'G':
                bank += 2;
                break;
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
                bank += 3;
                break;
            case 'M':
            case 'N':
            case 'O':
            case 'P':
                bank += 4;
                break;
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
                bank += 5;
                break;
            case 'X':
            case 'Y':
            case 'Z':
                bank += 6;
                break;
            case '0':
                continue;
            default:
                puts("Wrong code. Try again");
                continue;
        }
        if (bank <= 5) {
            puts("Keep doing");
        } else if (bank > 5 && bank <= 29) {
            puts("Good, but keep doing!");
        } else if (bank >= 30) {
            puts("Good boy, enough");
            completed_project[0] = '0';
        }
        printf("Now you bank is: %i\n", bank);
    }
}
