#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void playerMove(char board[6][7], char tempPlayer, int gameOver) {

int input;

    printf("player 1 please input chip: ");
    scanf("%d", &input);

      
while (input < 1 || input > 7) {
    printf("That input was out of range, please try again: ");
    scanf("%d", &input);
}


can_be_placed(board[6][7],input, tempPlayer);

return;
}

  