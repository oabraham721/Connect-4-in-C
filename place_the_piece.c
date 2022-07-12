#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void place_the_piece (char board[6][7], int column, char player) {

int i;
int j;

 for(j=0; j<6; j++) {
           
    if(board[j][column]== '*') {
        board[j][column]= player;
        printboard(board);
           
    }
 
}


return;
}