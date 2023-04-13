#include <stdio.h>
#include <stdlib.h>
#include <string.h>      //////////    calculate the length of a string (strlen)
#include <ctype.h>



// // Menu driven program in C
// // Driver code
// int main() {
//     // Choice variable
//     int choice = -1;
    
//     // Menu display
//     printf("MENU:\n1. Coffee\n2. Tea\n3. Exit");
    
//     // Infinite Loop for choice input
//     while(1){
//         printf("\nEnter your choice: ");
//         scanf("%d", &choice);
        
//         // If-else ladder
//         if(choice == 1){
//             printf("> Enjoy your Coffee!\n");
//         }
//         else if (choice == 2){
//             printf("> Enjoy your Tea!\n");
//         }
//         else if (choice == 3){
//             printf("BYE!!!\n");
//             // Termination of the Loop using break statement
//             break;
//         }
//         else{
//             printf("> Invalid Input\n");
//             break;
//         }
//     }
//     return 0;
// }


/////////////////////////       Convert a string to lowercase                /////////////

// int main() {
//     char str[30];
//     int i = 0;

//     printf("Enter your name to get in lowercase: ");
//     gets(str);
//     while (str[i] != '\0') {
//         str[i] = tolower(str[i]);
//         i++;
//     }

//     printf("%s\n", str);
    
//     return 0;
// }



/////////////////////////       Convert a string to uppercase                /////////////

int main() {
    char str[30];
    int i = 0;

    printf("Enter your name to get in uppercase: ");
    gets(str);
    while (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }

    printf("%s\n", str);
    
    return 0;
}





////  Read a string and display the letters alternately between lowercase and uppercase
  
// int main() 
// { 
//     char str[20];
//     int i; 
  
//     printf("Enter a string : "); 
//     scanf("%s", str); 
  
//     for (i = 0; str[i] != '\0'; i++) { 
  
//         if (i % 2 == 0) 
//             printf("%c", str[i]); 
  
//         else
//             printf("%c", str[i] - 32); 
//     } 
  
//     return 0; 
// }



/////////////////       Replace a letter in a string with another              ///////////////

// int main()
// {
//    char str[100], ch1, ch2;
//    int i;
 
//    printf("\n Please Enter any String :  ");
//    gets(str);
 
//    printf("\n Please Enter Character to Replace :  ");
//    scanf("%c", &ch1);
 
//    printf("\n Please Enter Character to Replace '%c' with :  ", ch1);
//    scanf(" %c", &ch2);
 
//    for(i = 0; str[i] != '\0'; i++)
//    {
//    	if(str[i] == ch1)
//    	{
//    		str[i] = ch2;
// 	}
//    }
 
//    printf("\n String after Replacing '%c' with '%c' : %s ", ch1, ch2, str);
 
//    return 0;
// }





////////      Allow the user to execute a console command         //////////

// int main(void)
// {
//     char command[128];

//     printf("Enter a command: ");
//     scanf("%[^\n]s", command);

//     system(command);

//     return 0;
// }
