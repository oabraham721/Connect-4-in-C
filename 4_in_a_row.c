#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int a;
int b;
int winner;


for (int i = 0; i < 6;i++) {
    for (int j = 0; i < 7;j++){


a = i;
b = j;
winner = 0;

while(winner < 3){
    if (board[a][b] == player) {
    board[a][b] = board[a][b+1]
    winner++;
    }  

    else(){
    break;
    }
}
   

a = i;
b = j;
winner = 0;

while (winner < 3){
    if (board[a][b] == player) {
    board[a][b] = board[a+1][b]
    winner++;
    }
    else(){
    break;
    }
}
   
a = i;
b = j;
winner = 0;

while (winner < 3){
    if (board[a][b] == player){
    board[a][b] = board[a+1][b+1];
    winner++;
    }
    else(){
    break;
    }

}
}
}