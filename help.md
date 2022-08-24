<h1>Author - Jyoti Rana Das</h1>


   <h2>variables used:</h2>
        init - for controlling the amount of stars to be displayed at each line<br><br>
        spc - used only for iterating the loops for giving the spaces<br><br>
        stars - used only for iterating the loops for giving the stars<br><br>
        lines - number of lines in the pattern<br>
        spacing - spacing between each star

    <h3>formulas used :</h3>
        upper portion :
            first spacing= (number of lines/2) + (number of lines/2)*spacing
            space decrement= spacing+1
        lower portion :
            first spacing =spacing+1
            space increment= spacing+1
    <h4>Notes:</h4>
        1) number of stars in the last line of upper portion is always the number of lines itself
        2) For second portion I used "init=lines-2" because the first line of the lower portion
        always displays two stars less than than the lowest line of the upper portion
