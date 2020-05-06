#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Please specify a pyramid height: ");
    }
    while (height > 50 || height < 1);
    {
        for (int loop = 1; loop <= height; loop ++)
        {         
            for (int spaces = loop; spaces <= height - 1; spaces ++)
                printf(" ");
            
            for (int blocks = 0; blocks < loop; blocks ++)
                printf("#");

            printf("  ");
                
	    for (int blocks = 0; blocks < loop; blocks ++)
                    printf("#");
            }
            
            printf ("\n");
        }
    }   
}
