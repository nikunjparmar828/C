#include <stdio.h>
#include "intro.h"
#include "grid.h"
#define DOT 'O'
#define CROSS 'X'
/* 00 01 02
   10 11 12
   20 21 22*/
#define ARR  {'a','b','c','d','e','f','g','h','i'}
void grid(char *grdptr);

int main()
{	
	intro();
	int i,j;
	char get,grdop;
	
	char playX[3][3] = ARR;
	char playO[3][3] = ARR;
	char playPOS[3][3] = ARR;
	
	printf("You'r sign is > O\n\n");
	printf("Want to see grids arrengment again [Y/N]:");
	grdop = getch();
	if(grdop == 'y' || grdop == 'Y')
	{
		intro();
	}
	printf("Please select any one box from grid\n\n");
	scanf("%i %i",&i,&j);
	
	if( (i==0 && j==0) || (i==0 && j==1) || (i==0 && j==2) || (i==1 && j==0) || (i==2 && j==0) || (i==2 && j==2) || (i==2 && j==1) || (i==1 && j==2)  )
	{
		playX[1][1] = CROSS;
		playPOS[i][j] = DOT;
		playPOS[1][1] = CROSS;
		playO[i][j] = DOT;
		
		grid(&playPOS[0][0]);
		
	}
	
		
	return 0;
}