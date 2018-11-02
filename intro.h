	void intro(void)
	{
	
	char yn;
	printf("\n\n\n\t\t\tTIC-TAC-TOE\t\t\n\n\n");
	printf(">>This game is same as tic-tac-toe but you have to remember the nos of the grid \n\n ");
	printf(">>EXP. is given below\n\n");
	printf(">>Reprasentation of nos are given below please refer that grid\n\n\n");
	printf("\t00\t01\t02\n");
	printf("\t10\t11\t12\n");
	printf("\t20\t21\t22\n");
	printf("\n\nSo when we ask for 'where you want to make sign than you have to provide that grids no'\n\n\n\n") ;
	printf("Have you gone through above process?[Y/N]:");
	scanf("%c",&yn);
	if(yn == 'Y' ||yn=='y')
	{
		system("cls");
	}
	
	}