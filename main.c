/*****************************************************************************
 * Copyright (C) Mrunal Patil patilmp14.it@coep.ac.in
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/
 
 

#include <stdio.h>
#include <stdlib.h>
#include "mini.h"
int main(void){
	
	int choice, num, flag;
	char done;
	printmenu();
	scanf("%d", &choice);
	if(choice == 2)
		return;
	
	done =  ' ';
	init_matrix();
	rules();
	printf("          -----  YOU WILL BE PLAYING AGAINST COMPUTER  -----\n");
	printf("          ---------!!!    GET READY     !!!--------\n");
	printf("	-----THIS IS HOW YOUR PLAYBOARD LOOKS-----\n");
	
	do{
        	display_matrix();
        	player_move();
		display_matrix();
		num = boxesleft();
  	
		/* see if player is winner */
    		done = check(); 
    		if(done != ' ') 
				break; 
				/* PLAYER is winner!*/

    		computer_move();
		display_matrix();
		num = boxesleft();

		/* see if computer is winner */	
    		done = check(); 
		if(done != ' ') 
				break; 
				/* COMPUTER is winner!*/
	} 

	while(done == ' ');
		if(done == 'X'){
			printf("           -----!!!!!!         CONGRATUALATIONS       !!!!!!-----");
   			printf("           -----!!!   YOU WON   !!!-----\n");
			printf("DO YOU WANT TO CONTINUE\n");
			printf("PRESS 1 TO CONTINUE AND 0 TO EXIT");
			scanf("%d", &flag);
			if(flag == 1) {
				main();
			}
			else if(flag == 0){
				exit(0);
			}
			else {
				printf("Invalid");
			}
				
		}
        	else{
			printf("           -----!!!    I WON     !!!-----\n");
			printf("           -----   OOPS!!! YOU LOSE...   \n");
			printf("	------TRY NEXT TIME-----	\n");
			printf("DO YOU WANT TO CONTINUE\n");
			printf("PRESS 1 TO CONTINUE AND 0 TO EXIT");
			scanf("%d", &flag);
			if(flag == 1) {
				main();
			}
			else if(flag == 0){
				exit(0);
			}
			else {
				printf("Invalid");
			}
		}
   	 

    return 0;
}

