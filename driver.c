#include "library.h"

int main(int argc, char** argv){
	char key;
	clear_screen();
	init_graphics();
	
	do{
		/*Writes exit prompt for user*/
		draw_text(210,210,"Press 'q' to exit.", 65535);
		
		
		draw_pixel(61,61,65535);
		draw_pixel(62,62,65535);
		draw_pixel(62,61,65535);
		draw_pixel(61,62,65535);
		
		/*Draws a rectangle with a diagonal in it*/
		draw_line(3,3,400,200,15);
		draw_line(3,3,3,200,15);
		draw_line(3,3,400,3,15);
		draw_line(400,3,400,200,15);
		draw_line(3,200,400,200,15);
		draw_line(3,200,400,3,15);
		
		/*Checks to exit.*/
		key = getkey();
		sleep_ms(500);
		
	}while(key != 'q');

	exit_graphics();
	
	return 0;
}