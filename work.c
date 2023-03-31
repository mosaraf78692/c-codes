#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//////////    Convert a number to ascii code     //////

// int main() {
//     int num;
//     char ascii;
    
//     printf("Enter a number to convert in ASCII code: ");
//     scanf("%d", &num);
//     scanf("%c", &ascii);
    
//     if (num >= 0) {
//         ascii = num;
//         printf("The ASCII code for %d is %c\n", num, ascii);
//     } else {
//         num = (int)ascii;
//         printf("The number for %c is %d\n", ascii, num);
//     }
    
//     return 0;
// }



////////    each execution will show random number     /////

// int main()
// {
//     srand(time(0));

//     int num1 = (rand() % 6) + 1;

//     printf("%d", num1);
// }



//////////   Concatenate two words   /////////

// int main()
// {
//     char m[20], g[20], all[40];
//     int i=0, j=0;

//     printf("Please ennter your name: ");
//     scanf("%s", &m);
//     printf("Please enter you second name: ");
//     scanf("%s", &g);
    
//     while(m[i] !='\0')
//     {
//         all[i]=m[i];
//         i++;
//     }
//     while(g[j] !='\0')
//     {
//         all[i]=g[j];
//         i++;
//         j++;
//     }
//     all[i]='\0';
//     printf("You concatenate is: %s", all);
// }


/////////      Determine valied ip address     ////////

int validate_number(char *str) {
   while (*str) {
      if(!isdigit(*str)){       //if the character is not a number, return false
         return 0;
      }
      str++;                   //point to next character
   }
   return 1;
}

int validate_ip(char *ip) {    //check whether the IP is valid or not
   int i, num, dots = 0;
   char *ptr;
   if (ip == NULL)
      return 0; 
      ptr = strtok(ip, "."); //cut the string using dor delimiter
      if (ptr == NULL)
         return 0;
   while (ptr) {
      if (!validate_number(ptr)) //check whether the sub string is holding only number or not
         return 0;
         num = atoi(ptr); //convert substring to number
         if (num >= 0 && num <= 255) {
            ptr = strtok(NULL, "."); //cut the next part of the string
            if (ptr != NULL)
               dots++; //increase the dot count
         } else
            return 0;
    }
    if (dots != 3) //if the number of dots are not 3, return false
       return 0;
      return 1;
}

// Function to ask IP from user
int main()
{
    char ip[16];
    printf("Please enter an IP address: ");
    scanf("%s", ip);
    if (validate_ip(ip))
        printf("Valid IP address\n");
    else
        printf("Invalid IP address\n");
}





