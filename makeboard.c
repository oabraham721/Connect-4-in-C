#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void makeboard(char board1[6][7]) {
    
  
     int i,j;
 
    for(j=6; j>0; j--)
    {
        for(i=0; i<7; i++)
        {
            board1[j][i]='*';
        }
    }
 
    
    return ;
}
