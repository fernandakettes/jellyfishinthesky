#include <cs50.h>
#include <stdio.h>

int main(void)
{
   char c = get_char("Press 'y' to accept or 'n' to decline: ");
   if (c == 'y')
   {
    printf("You agreed to our terms of service!\n");
   }
   else if (c == 'n')
   {
    printf("Goodbye\n");
   }
   else
   {
    printf("Invalid command. Try again.\n");
   }
}
