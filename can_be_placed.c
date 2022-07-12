#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void can_be_placed (char board3[6][7], int userChoice, char tp) {

userChoice = userChoice -1 ;

while (board3[5][userChoice] != '*') {
    printf("This column is full, please make another input");
    scanf("%d", &userChoice);
    userChoice = userChoice -1 ;
}


place_the_piece(board3,userChoice, tp );

return;
}