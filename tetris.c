/*  tetris.c
 *
 *  A simple Tetris game implemented using the ncurses library
 *
 *  Author: Christopher Ebron
 * 
 *  Date: 2024-12-14
 * 
 */

#include <ncurses.h>


int main()
{	
	initscr();			
	printw("Hello World !!!");	
	refresh();			
	getch();			
	endwin();			

	return 0;
}