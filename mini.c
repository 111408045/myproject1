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


/*the game is played between a player and computer*/

#include <stdio.h>
#include <stdlib.h>
#include "mini.h"



/*the gameboard is represented by two dimensional character array*/
int flag;
char arr[3][3];
char myname[20];
char compname[20];
  

/*the first view of the game is the main menu page, which prints the following commands*/

void printmenu(){
	printf("                    ------WELCOME TO TIC TAC TOE-----\n");
	printf("ENTER 1 FOR NEW GAME\
			& 2 TO EXIT \n");

}

void fordelay(int j) {
 
	int i, k;
        for(i = 0; i < j; i++)
	        k = i;
}


void rules(void){
	printf("		----RULES ARE SIMPLE-----\n\n");
	printf("\n");
	printf("	BOXES ARE NUMBERED AS 1 TO 9 FROM LEFT TO RIGHT HORIZONTALLY	\n");
	printf("\n");
	printf("TO ENTER INTO A BOX GIVE THE BOX NO. IN WHICH YOU WANT TO GIVE ENTRY\n\n");
	printf("\n");
	printf("IF YOU TRY TO OVERWRITE INTO A BOX, SCREEN WILL DISPLAY 'INVALID MOVE'\n\n");
	printf("\n");	
	printf("YOU HAVE BEEN GIVEN 'X'\n");
	printf("\n");	
	printf("COMPUTER HAS BEEN GIVEN 'O'\n");
	printf("\n");	
	printf("		Enter your name \n");
	scanf("%s", myname);
	printf("		Enter the name you want to give to the computer\n");
	scanf("%s", compname);
	printf("		LETS BEGIN...\n");
	printf("\n\n");	
	printf("		LOADING.....\n");
	printf("\n");	
	printf("		PLEASE WAIT.......\n");
	fordelay(1000000000);
}
/* Initialize the matrix. */

void init_matrix(void){
	int i, j;
	for(i = 0; i < 3; i++){
	  	for(j = 0; j < 3; j++) 
			arr[i][j] =  ' ';
	}
}

/*COMPUTER'S MOVE*/

void computer_move(void)
{	
	printf("	-----ITS %s's TURN NOW-----\n", compname);
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
      			if(arr[i][j] == ' ') 
					break;
		
		}
				if(arr[i][j] == ' ') 
					break;
  	}

 	if(i*j == 9){
		printf("                   .....NO MORE BOXES LEFT....\n");
		printf("                   .....!! GAME OVER !!....\n");
		printf("                   ....!! tie between you and %s !!....\n", compname);
		printf("		........!!!NO WINNER!!.....\n");
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
  	else
    		arr[i][j] = 'O';
}

/* Display the matrix on the screen. */

void display_matrix(void){
	int t;

	for(t = 0; t < 3; t++){
		printf(" %c | %c | %c ", arr[t][0],
      	  	arr[t][1], arr[t][2]);
    		if(t != 2) 
			printf("\n---|---|---\n");
  	}
  	
	printf("\n");
}


/*PLAYER'S MOVE*/

void player_move(void){
	int box;
	char ch;
	printf("	-----%s ITS your TURN NOW-----\n", myname);
  	printf("GIVE THE BOX NO. IN WHICH YOU WANT TO ENTER\n");
  	scanf("%d", &box);
  	switch(box){

	    	case 1 :	
			if(arr[0][0] != 'X' && arr[0][0]!= 'O'){
				
               			arr[0][0] = 'X';    
			}
			
			else{
				printf("Invalid move....\n");
				printf("try again.\n");
 	   			player_move();
			}
	
			break;

    	       case 2 :	
			if(arr[0][1] != 'X' && arr[0][1]!= 'O'){
					
			        arr[0][1] = 'X';
			}

			else{
				printf("Invalid move....\n");
				printf(" try again.....\n");
	    			player_move();
			}

			break;

	       case 3 :
			if(arr[0][2] != 'X' && arr[0][2]!= 'O'){
					
	                	arr[0][2] = 'X';
			}

			else{
				printf("Invalid move....\n");
				printf(" try again........\n");
	    			player_move();
			}

			break;

	       case 4 :	
			if(arr[1][0] != 'X' && arr[1][0]!= 'O'){
					
			        arr[1][0] = 'X';
			}

			else{
				printf("Invalid move.....\n");
				printf(" try again........\n");
	    			player_move();
			}

			break;

	       case 5 :	
			if(arr[1][1] != 'X' && arr[1][1]!= 'O'){	
					
			        arr[1][1] = 'X';
			}

			else{
				printf("Invalid move......\n");
				printf(" try again......\n");
	    			player_move();
			}

			break;

    	       case 6 :	
			if(arr[1][2] != 'X' && arr[1][2]!= 'O'){
					
			        arr[1][2] = 'X';                  
			}
				
			else{
				printf("Invalid move......\n");
				printf(" try again......\n");
	    			player_move();
			}
	
	       	   	break;

               case 7 :	
			if(arr[2][0] != 'X' && arr[2][0]!= 'O'){
					
				arr[2][0] = 'X';
					
			}

			else{
				printf("Invalid move...\n");
				printf(" try again.....\n");
	   			player_move();
			}

			break;

    	       case 8 :	
			if(arr[2][1] != 'X' && arr[2][1]!= 'O'){
					
		    	    arr[2][1] = 'X';
					
			}

			else{
				printf("Invalid move....\n");
				printf(" try again.\n");
	    			player_move();
			}

			break;

    		case 9 :	
			if(arr[2][2] != 'X' && arr[2][2]!= 'O'){
					
		      	 	arr[2][2] = 'X';
						
			}

			else{
				printf("Invalid move.......\n");
				printf(" try again.\n");
	    			player_move();
			}

			break;
  	}
	
}


int boxesleft(void){
	int i, j, boxesleft = 9;
	
	for(i = 0;i < 3; i++){
     		for(j = 0;j < 3;j++){
       			if((arr[i][j] == 'X') || (arr[i][j] == 'O'))
                boxesleft--;
      		}
    }
	if(1 < boxesleft <= 3)
		printf("		only  %d boxes are left\n", boxesleft);
	
	if(boxesleft == 1)
		printf("		its last turn now\n");
	
	if(4 <= boxesleft <=8 )
		printf("		%d boxes are left\n", boxesleft);
   
}


char check(void)
{
	int i;
	/* check rows */
	
	for(i = 0; i < 3; i++)  
		if(arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2]) 
			return arr[i][0];

	/* check columns */

        for(i = 0; i < 3; i++)  
    		if(arr[0][i] == arr[1][i] && arr[0][i] == arr[2][i]) 
			return arr[0][i];

 	 /* check diagonals */

 	if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
       		return arr[0][0];

  	if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        		return arr[0][2];

  	return ' ';
}


