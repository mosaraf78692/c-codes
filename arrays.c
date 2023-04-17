#include <stdio.h>
#include <stdlib.h>
#include <string.h>      //////////    calculate the length of a string (strlen)
#include <ctype.h>




void alternateCase(char *str) {
    for(int i = 0; str[i]; i++){
        if(i % 2 == 0){
            str[i] = toupper(str[i]);
        }
        else{
            str[i] = tolower(str[i]);
        }
    }
}

void replaceLetter(char *str) {
    char letter1, letter2;
    printf("Enter the letter to replace: ");
    scanf(" %c", &letter1);
    printf("Enter the letter to replace with: ");
    scanf(" %c", &letter2);

    for(int i = 0; str[i]; i++){
        if(str[i] == letter1){
            str[i] = letter2;
        }
    }
}

void executeCommand() {
    char command[128];
    printf("Enter your command: ");
    scanf("%s", command);
    system(command);
}

void performOperation(int option) {
    char str[100];

    switch(option) {
        case 1:
            printf("Enter your name or string to get it in lowercase: ");
            scanf("%s", str);
            for(int i = 0; str[i]; i++){
                str[i] = tolower(str[i]);
            }
            printf("Your name or string converted to lowercase: %s\n", str);
            break;

        case 2:
            printf("Enter your name or string to get it in uppercase: ");
            scanf("%s", str);
            for(int i = 0; str[i]; i++){
                str[i] = toupper(str[i]);
            }
            printf("Your name/string converted to uppercase: %s\n", str);
            break;

        case 3:
            printf("Enter words to get in lowercase or uppercase combination: ");
            scanf("%s", str);
            alternateCase(str);
            printf("Words/String with alternating case: %s\n", str);
            break;

        case 4:
            printf("Enter any sentence then replace any words inside: ");
            scanf("%s", str);
            replaceLetter(str);
            printf("Line with replaced letter: %s\n", str);
            break;
        case 5:
            executeCommand();
            break;
        case 6:
            printf("Exiting program...\n");
            exit(0);

        default:
            printf("Error: Invalid option\n");
    }
}



int main() {
    int option;
    char choice;

    do {
        printf("MENU:\n");
        printf("1. Convert your letter or line to lowercase\n");
        printf("2. Convert your letter or line to uppercase\n");
        printf("3. Display alternating case\n");
        printf("4. Replace a letter in specific word\n");
        printf("5. Execute the command\n");
        printf("6. Exit\n");
        printf("Enter your appropriate option: ");
        scanf("%d", &option);

        performOperation(option);

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Exiting program...\n");
    return 0;
}








