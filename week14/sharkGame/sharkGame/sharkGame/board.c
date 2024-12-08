//
//  board.c
//  sharkGame
//

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12    //Number of coins that located in board 
#define MAX_COIN        4
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------


static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0; i<N_BOARD; i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)   //shark moved position
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void)
{
    int i, pos;
    
    //variable initialization
    for (i=0; i<N_BOARD; i++)
    {
        board_status[i] = BOARDSTATUS_OK;   //reset board status
        board_coin[i] = 0;                  //reset coin
    }

	
	
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------


/*
    //coin allocation
	int i, pos;
    for (i=0; i<N_COINPOS; i++) {
    	int pos = rand()%N_BOARD;                //random coin location
    	board_coin[pos] = rand()% MAX_COIN + 1;   //1~MAX coin
	}
*/  
    
    //ÀÌ À§¿¡ ¾Æ´Ï¸é ¹Ø¿¡·Î ¹Ù²Ü°ÅÀÓ....
	for (i=0; i<N_COINPOS; i++) {   //kan has no coin->
		while (1) {  //until pos is empty 
    		pos = rand() % N_BOARD;   //set random position
    
    		if (board_coin[pos] == 0) {   //ºóÄ­ÀÌ¸é 
    			board_coin[pos] = rand() % MAX_COIN + 1;
				
				break;    //i st coin set complete. go next coin
		}
	}
}    
    return N_COINPOS;
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
	int step = rand() % MAX_SHARKSTEP + 1;
	shark_position += step;
	int i;
	
	for (i=shark_position - step +1; i<=shark_position && i<N_BOARD; i++) {
		if (i>=0) 
		board_status[i] = BOARDSTATUS_NOK;
	} 
	
		if (shark_position >= N_BOARD) 
			shark_position = N_BOARD -1;     //Not to go end of board

	
	return shark_position;		
}


// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
