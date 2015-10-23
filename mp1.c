/*the game is played between a player and computer*/
#include <stdio.h>
#include <stdlib.h>
#include "mp1.h"


/*the gameboard is represented by two dimensional character array*/
char arr[3][3];
  


/*the first view of the game is the main menu page, which prints the following commands*/
void printmenu(){
	printf("                    ------WELCOME TO TIC TAC TOE-----\n");
	printf("ENTER 1 FOR NEW GAME\
			& 2 TO EXIT \n");
	
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
		printf("                   ....!! GO TO MAIN MENU !!....\n");
    		exit(0);
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
  	printf("GIVE THE BOX NO. IN WHICH YOU WANT TO ENTER\n");
  	scanf("%d", &box);
  	switch(box)
  	{

    	case 1 :	
				if(arr[0][0] != 'X' && arr[0][0]!= 'O'){
					
                	arr[0][0] = 'X';    
					
				}
				else{
					printf("Invalid move, try again.\n");
    				player_move();
				}
				break;

    case 2 :	
				if(arr[0][1] != 'X' && arr[0][1]!= 'O'){
					
			        arr[0][1] = 'X';
					
				}
				else{
					printf("Invalid move, try again.\n");
    				player_move();
				}
				break;

    case 3 :
				if(arr[0][2] != 'X' && arr[0][2]!= 'O'){
					
                	arr[0][2] = 'X';
					
		          
				}
				else{
					printf("Invalid move, try again.\n");
    				player_move();
				}
				break;

    case 4 :	
				if(arr[1][0] != 'X' && arr[1][0]!= 'O'){
					
			        arr[1][0] = 'X';
				
				}
				else{
					printf("Invalid move, try again.\n");
    				player_move();
				}
				break;

    case 5 :	
				if(arr[1][1] != 'X' && arr[1][1]!= 'O'){
					
			        arr[1][1] = 'X';
				
				}
				else{
					printf("Invalid move, try again.\n");
    				player_move();
				}
				break;

    case 6 :	
				if(arr[1][2] != 'X' && arr[1][2]!= 'O'){
					
			        arr[1][2] = 'X';
					
                  
				}
				else{
					printf("Invalid move, try again.\n");
    				player_move();
				}
	    	    break;

    case 7 :	
				if(arr[2][0] != 'X' && arr[2][0]!= 'O'){
					
     		       arr[2][0] = 'X';
					
		          
				}
				else{
					printf("Invalid move, try again.\n");
    				player_move();
				}
				break;

    case 8 :	
				if(arr[2][1] != 'X' && arr[2][1]!= 'O'){
					
		    	    arr[2][1] = 'X';
					
		          
				}
				else{
					printf("Invalid move, try again.\n");
    				player_move();
				}
				break;

    case 9 :	
				if(arr[2][2] != 'X' && arr[2][2]!= 'O'){
					
		       		 arr[2][2] = 'X';
					
		          
				}
				else{
					printf("Invalid move, try again.\n");
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
	printf("NUMBER OF BOXES LEFT =>> %d\n", boxesleft);
   
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


