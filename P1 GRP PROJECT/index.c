#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    const int voter_capacity =50;
    int voter_id[voter_capacity];
    int year_of_birth[voter_capacity];
    char gender[voter_capacity];
    char names[voter_capacity][40];
    int otvpn[voter_capacity][4];  // store each digit separately
    
   
    for (int i = 0; i < voter_capacity; i++)
    {
       
        printf("\n--- Entering data for Voter %d ---\n", i + 1);

        printf("\nPlease state your voter's ID: ");
        scanf("%d", &voter_id[i]);

        printf("\nPlease enter your year of birth: ");
        scanf("%d", &year_of_birth[i]);
        printf("Noted\n");
        
        
        // gender selection //
        int genderchoice;
        printf("\nPlease enter Gender: ");
        printf("\n--Gender--\n");
        printf("1.Male\n");
        printf("2.Female");
        printf("\nEnter your choice:");
        scanf("%d", &genderchoice);
        
        if(genderchoice == 1)
        {
            gender[i] = 'M';
           printf("Male selected"); 
        }
        else if(genderchoice == 2)
        {
            gender[i] = 'F';
            printf("Female selected");
        }
        else
        {
            printf("Invalid option...please try again");
            gender[i] = 'u';
        }
      
        printf("\nEnter First name and last name: ");
        scanf(" %[^\n]", names[i]);   // reads full name with spaces

        // Read PIN as one 4-digit string
        char pin[6];
        printf("\nEnter One time vote PIN number (4 digits): ");
        scanf(" %4s", pin);

        // Convert each character to a digit
        for (int j = 0; j < 4; j++) {
            otvpn[i][j] = pin[j] - '0';
        }
        
       

        printf("\nData recorded successfully!\n");
    if(i == 2)
     {
        break;
     }
     
     
    }

    int cont;
    printf("\n--Do you wish to stop at 20 voters?--\n");
    printf("\n1.Yes");
    printf("\n2.No");
    printf("\nEnter option");
    scanf("%d", &cont);
    if(cont == 1)
    {
       exit(0); 
    }
    else if(cont == 2) // second big loop to continue from //
    {
        for (int i = 20; i < voter_capacity; i++)
    {
       printf("\n--Voting process continuing--\n");
       
        printf("\n--- Entering data for Voter %d ---\n", i + 1);

        printf("\nPlease state your voter's ID: ");
        scanf("%d", &voter_id[i]);

        printf("\nPlease enter your year of birth: ");
        scanf("%d", &year_of_birth[i]);
        printf("Noted\n");
        
        
        // gender selection //
        int genderchoice;
        printf("\nPlease enter Gender: ");
        printf("\n--Gender--\n");
        printf("1.Male\n");
        printf("2.Female");
        printf("\nEnter your choice:");
        scanf("%d", &genderchoice);
        
        if(genderchoice == 1)
        {
            gender[i] = 'M';
           printf("Male selected"); 
        }
        else if(genderchoice == 2)
        {
            gender[i] = 'F';
            printf("Female selected");
        }
        else
        {
            int retry = 0;
            while (retry < 2);
            {
            printf("Invalid option...please try again");
            sscanf("%d", &genderchoice);
            if(genderchoice == 1)
            {
                gender[i] = 'M';
                printf("Male selected!");
                break;
                else if (genderchoice == 2)
                {
                    gender[i] = 'F';
                    printf("Female sselected!");
                    break;
                }
                retry++;
                
            }
            }
            if ( genderchoice > 2)
            {
                printf("Invalid option...please try again");
            gender[i] = 'u';
            }
            
            printf("Invalid option...please try again");
            gender[i] = 'u';
            }
        }
      
        printf("\nEnter First name and last name: ");
        scanf(" %[^\n]", names[i]);   // reads full name with spaces

        // Read PIN as one 4-digit string
        char pin[6];
        printf("\nEnter One time vote PIN number (4 digits): ");
        scanf(" %4s", pin);

        // Convert each character to a digit
        for (int j = 0; j < 4; j++) {
            otvpn[i][j] = pin[j] - '0';
        }
        
         if(i == 5)
        {
            break;
        }

        printf("\nData recorded successfully!\n");
    }
    }
    

    

    return 0;
}