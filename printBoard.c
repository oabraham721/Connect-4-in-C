#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

    
  void printboard(char board2[6][7]) {
    
  int i;
  int j;
 
    for(j=5; j>=0; j--) {
       
        printf("\n");
        for(i=0; i<7; i++)
        {
            printf("%c", board2[j][i]);
        }
    }

 
    
    return ;
}
