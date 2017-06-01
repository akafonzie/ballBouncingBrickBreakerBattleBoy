/*************************************************************************
*	BallBouncingBrickBreakerBattleBoy A.K.A b^6			 *
*									 *
*	Game project for Assignment one for Embedded Systems		 *
*									 *
*	Cpt Tom Weaver - 4871898 - October 2012				 *
*									 *
**************************************************************************/
#include "game.h"


/* Startup Screen */

void startupScreen(void){
	GLCD_Clear(white);
	GLCD_SetTextColor(Black);
	GLCD_SetBackColor(White);
	GLCD_SetTextColor(Blue);
	GLCD_DisplayString(0,0,"Oh, Hej!");
	GLCD_DisplayString(2,0,"I hear you wish to play");
	GLCD_DisplayString(3,0,"BallBouncingBrickBreakerBattleBoy ?");
	GLCD_DisplayString(5,0,"Press to initiate awesome");
	waitTouch();
	menu();
	GLCD_Clear(Black);
	GLCD_SetBackColor(White);
	GLCD_SetTextColor(Black);
}

/* Main loop, is the program entry point when reset is pressed  */

int main(void){
	init();
	game_init();
	

	
}