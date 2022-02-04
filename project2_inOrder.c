//Descprtion: The program defines whether the input of characters are in alphabetic
//it firstly converts upper case characters to lower case


#include <stdio.h>
int main()
{
    printf("Input: ");
    
    //assume variable is_in_order is true (1)
    int is_in_order = 1;

    //declaring first two characters
    char ch1, ch2;

    //getchar reads one character at a time, in this case first character getting read
    ch1 = getchar();
    //get char reads second character
    ch2 = getchar();

    //while loop if second character does not equal new line
    //the if statement should execute
    while (ch2 != '\n')
    {

        //if first character is upper case
        if (ch1 >= 'A' && ch1 <= 'Z')
            //converts to lower case using ASCII values
            ch1 += 32;

        //if second character is upper case
        if (ch2 >= 'A' && ch2 <= 'Z')
            //converts to lower case using ASCII values
            ch2 += 32;
        
        //the if statement states if the first or second characters are not in the range of a-z
        //or if first character is greater than character2
        if ((ch1 < 'a' || ch1 > 'z') || (ch2 < 'a' || ch2 > 'z') || (ch1 > ch2))
        {
            //the variable is_in_order becomes false (0)
            is_in_order *= 0;
        }

        //to test the following characters of the input
        //character1 becomes character2 meanwhile getchar reads the next character that is character2 
        ch1 = ch2;
        ch2 = getchar();
    }

    //the if statement state if is true
    //print it is in order
    if (is_in_order)
    {
        printf("Output: In order \n");
    }
    //if not, print it is not in order
    else
    {   
        printf("Output: Not in order \n");
    }
    return 0;
}
