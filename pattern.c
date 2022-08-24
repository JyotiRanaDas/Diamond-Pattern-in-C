#include <stdio.h>
int main()
{

    /*
    variables used:
        init - for controlling the amount of stars to be displayed at each line
        spc - used only for iterating the loops for giving the spaces
        stars - used only for iterating the loops for giving the stars
        lines - number of lines in the pattern
        spacing - spacing between each star

    formulas used :-
        upper portion :
            first spacing= (number of lines/2) + (number of lines/2)*spacing
            space decrement= spacing+1
        lower portion :
            first spacing =spacing+1
            space increment= spacing+1
    notes:
        1) number of stars in the last line of upper portion is always the number of lines itself
        2) For second portion I used "init=lines-2" because the first line of the lower portion
        always displays two stars less than than the lowest line of the upper portion
        3)
    */
    int lines, spacing = 3, spc, stars, init = 1;
    printf("\nEnter the number of lines you want : ");
    scanf("%d", &lines);
    printf("\n\nEnter the spacing between each point : ");
    scanf("%d", &spacing);
    if (lines % 2 == 0)
    {
        printf("\n\nERROR: PATTERN CAN'T BE MADE WITH THIS NUMBER !!! PLEASE ENTER AN ODD NUMBER\n\n");
        return 1;
    }
    int temp = lines / 2 + 1;
    int space = (lines / 2) + ((lines / 2) * spacing);
    printf("\n");
    for (int i = 0; i < temp; i++, init += 2) // upper portion
    {
        for (spc = 0; spc < space; spc++) // spacing
        {
            printf(" ");
        }
        for (stars = 0; stars < init; stars++) // stars
        {
            printf("*");
            for (spc = 0; spc < spacing; spc++) // spacing between each star
            {
                printf(" ");
            }
        }
        printf("\n\n");
        space -= (spacing + 1);
    }

    space = spacing + 1;
    temp -= 1;
    init = lines - 2;
    for (int i = 0; i < temp; i++, init -= 2) // lower portion
    {
        for (spc = 0; spc < space; spc++) // spacing
        {
            printf(" ");
        }
        for (stars = 0; stars < init; stars++) // stars
        {
            printf("*");
            for (spc = 0; spc < spacing; spc++) // spacing between each star
            {
                printf(" ");
            }
        }
        printf("\n\n");
        space += (spacing + 1);
    }
    printf("\n\n");
    return 0;
}
