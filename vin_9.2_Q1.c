#include <stdio.h>

void main() 
{
    char password[50];
    int letter = 0, digit = 0, special = 0, length = 0;
    char ch;
    
    printf("Enter the password: ");
    while ((ch = getchar()) != '\n') {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letter = 1;
        }
        else if (ch >= '0' && ch <= '9') {
            digit = 1;
        }
        else if (ch >= 32 && ch <= 126 && !(ch >= '0' && ch <= '9') && !(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z')) {
            special = 1;
        }
        length++;
    }

    if (letter && digit && special && length >= 6) {
        printf("Strong password\n");
    } else {        
      	printf("Week password");
    }
}
