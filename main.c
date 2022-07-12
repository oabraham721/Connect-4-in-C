#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


void makeboard();
void printboard();
void playerMove();
void can_be_placed();
void place_the_piece();


int main() {

int move = rand () % 2;
char board[6][7];
int i;
int j; 
int game = 1;
char p1 = 'X';
char p2 = 'O';

  while (game ==1){

    makeboard(board);
    printboard(board);
   
    if ( move == 0)  {
        playerMove(board, p1, game);
       move = 1;
    }

    else (move == 1); {
   
    playerMove(board, p2, game);
       move = 0;
    } 


    }
    return 0;
  }



