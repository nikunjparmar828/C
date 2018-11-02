
char *passwd(void)
{

//let's rock!

int counter=0;
char psstore[50];
char *ptchar = psstore;
char ch;
//while not break; run and get passwd untill you want
while(1)
{
	ch = getchar();/*get charecter and go down for running 
	             each*/   		 
	
	if(ch == 27 || ch == 32 || ch == 8)
		
		{   
		    printf("\n-------------------------------------------------\n");
			printf("SPACE , ESCAPE and BACKSPACE is not alloud , please note that !\n");
			printf("\n-------------------------------------------------\n");
			main();
		}
	if (ch == 13 || ch == 'Q')
	{   
		break;
	}
	
	*ptchar = ch;
	ptchar++;
	ch = '*';
	printf("%c",ch);
}
	return ptchar;
}

