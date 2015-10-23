#include <stdio.h>
#include <stdlib.h>
#include "mp1.h"
int main(void){
	
	int choice, num;
	char done;
	printmenu();
	scanf("%d", &choice);
	if(choice == 2)
		return;
	printf("          -----  YOU WILL BE PLAYING AGAINST COMPUTER  -----\n");
	printf("          ---------!!!    GET READY     !!!--------\n");
	done =  ' ';
	init_matrix();

	do{
        	display_matrix();
        	player_move();
			num = boxesleft();
  			/* see if player is winner */
    		done = check(); 
    		if(done != ' ') 
				break; /* PLAYER is winner!*/
    		computer_move();
			/* see if computer is winner */	
    			done = check(); 
			if(done != ' ') 
				break; /* COMPUTER is winner!*/
	} 
	while(done == ' ');
	if(done == 'X'){
			printf("           -----!!!!!!         CONGRATUALATIONS       !!!!!!-----");
   			printf("           -----!!!   YOU WON   !!!-----\n");
	}
    else{
			printf("           -----!!!    I WON     !!!-----\n");
			printf("           -----   OOPS!!! YOU LOSE...TRY NEXT TIME   -----\n");
			printmenu();
		}
   	display_matrix(); /* show final positions */

    return 0;
}

