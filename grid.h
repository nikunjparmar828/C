void grid(char *grdptr)
{	
	int i,j;
	printf("Grid is given below\n");
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			printf("\t\t%c\t\t",*(grdptr++));
		}
		printf("\n");
	}
}