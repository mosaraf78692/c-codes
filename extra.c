#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>   /////   This is for timing library




int main()
{
    char name[40];
    int num;
    char ascii;
    int ID = 500;        ////////      This is for case 2 
    int password = 123;


    printf("\n\n\n\n");
    printf("First let me know your name please\n");
    printf("If you are Santiago-sir or Kamal-sir then I will let you in otherwise It won't execute..\n\n");
    printf("Now type your name please: ");
    scanf("%s", name);

    if(strcmp(name, "Kamal") == 0 || strcmp(name, "Santiago") == 0)  // We can not use && becasue it not logical operator here, we should use || 
    {
        int choice; 
        printf("\n\n\n\n");
        printf("NOW THIS IS YOUR SCRIPT YOU CAN DO WHAT ARE THESE OPTIONS MENTION BELOW \n\n");
        printf(" 1>> Option to convert number to ascii and ascii to number.\n");
        printf(" 2>> Option to check account.\n");
        printf(" 3>> Option no available.\n");
        printf(" 4>> Option to exit.\n");
         
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            ////////    Convert a number to ascii code     //////
            printf("Enter a number: ");
            scanf("%d", &num);
            // Convert number to ASCII
            ascii = num;
            printf("The ASCII character for %d is %c\n", num, ascii);
            printf("Enter an ASCII character: ");
            scanf(" %c", &ascii);
            // Convert ASCII to number
            num = ascii;
            printf("The number for ASCII character %c is %d\n", ascii, num);
            printf("Now it will close after 10 seconds.\n");
            printf("Good bye");
                sleep(10);
                break;            
            case 2:
            printf("Plese Enter Your Account Number: ");
            scanf("%d", & ID);
            switch (ID) {
                case 500:
                    printf("\nEnter your password: ");
                    scanf("%d", & password);
                    switch (password) {
                        case 123:
                            printf("Your total balance: $1000\n");
                            sleep(5);
                            break;
                        default:
                            printf("incorrect password");
                            sleep(5);
                            break;
                    }
                    sleep(5);
                    break;
                default:
                    printf("incorrect ID");
                    sleep(5);
                    break;
            }
                sleep(5);
                break;
            case 3:
            
            printf("You chose 3.\n");
                sleep(5);
                break;
            default:
            printf("Exit the script.\n");
        }
    }
    else
    {
        printf("You are not welcome because I am not able to recognize you.");
        sleep(10);
    }

}
