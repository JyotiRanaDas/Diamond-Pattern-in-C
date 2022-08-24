Author - Jyoti Rana Das


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