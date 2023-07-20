#include <stdio.h>

void main() 
{
 
    char desired_email[] = "vinit@hotmail.com";
    char desired_password[] = "just@6162";

    char email[30];
    char password[30];

    printf("Login\n");
    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your password: ");
    scanf("%s", password);

    int is_email_correct = 0;
    int is_password_correct = 0;

    int i = 0;
    while (desired_email[i] != '\0' || email[i] != '\0') 
	{
        if (desired_email[i] != email[i]) {
            break;
        }
        i++;
    }

    if (desired_email[i] == '\0' && email[i] == '\0') 
	{
        is_email_correct = 1;
    }

    i = 0;
    while (desired_password[i] != '\0' || password[i] != '\0') 
	{
        if (desired_password[i] != password[i]) {
            break;
        }
        i++;
    }

    if (desired_password[i] == '\0' && password[i] == '\0') 
	{
        is_password_correct = 1;
    }

    if (is_email_correct && is_password_correct) 
	{
        printf("Login successful!\n");
    } else {
        printf("Login failed. Incorrect email or password.\n");
    }
}
