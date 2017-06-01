#ifndef _GAME_H
#define _GAME_H

#include <stm32f10x_cl.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include "io.h"
#include "glcd.h"

#define S_WIDTH 	320
#define S_HEIGHT	240
#define CHAR_WIDTH	32
#define CHAR_HEIGHT	16
#define T_LONG 		10000000
#define T_SLOW		100000
#define T_MED 		10000
#define T_FAST		1

ectern uint16_t FONT_24x16[];

enum pMode {SGL, DUAL, AI};

typedef	struct{
		int xPos;
		int yPos;
	} paddlePos;	

typedef struct{
		int dir;
		int xPos;
		int yPos;
	} ballPos;

typedef struct{
		unsigned long del;
		enum pMode mode;
		paddlePos player;
		ballPos ball;
	} gameInfo;s


void init(void);
void wait(unsigned long d);
void LCDUpdateBallPos(int, int);
void LCDUpdatePaddlePos(paddlePos p);
void updatePlayer(void);
void updateBallPos(void);
void colCheck(void);
void gameInit(void);
void startupScreen(void);
void menu1(void);
void menu2(void);

#endif /* _GAME_H */ 