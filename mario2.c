#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    //Gets user input for a height.
    int height;
    int row;
    int hash;
    int space;
    int j;
    
    do
    {
    printf("Height: \n");
    height = GetInt();
   
    }
    while (height <= 0 || height > 23);
    
    for (row = 0; row < height; row++)
    {    
        for(space = 0; space < height - row - 1; space++)
        {
            printf("%s", " ");
        } 
        for (hash = 0; hash < row + 2; hash++)
        {
            printf("%s", "#");
        }

        printf("%s", "  ");
        
        for (j = 0; j < row + 2; j++)
        {
            printf("%s", "#");
        }
        
        printf("\n");
    }
    
}