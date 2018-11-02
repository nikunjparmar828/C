#include <stdio.h>
 // BETTER BUBBLE SORT
int main()
{
  int input[100], nos, i, j, temp;
 
  printf("\n\nTell me how many nos you want to sort\n\n\n");
  scanf("%d", &nos);
 
  printf("Enter %d integers\n", nos);
 
  for (i = 0; i < nos; i++)
    scanf("%d", &input[i]);
 
  for (i = 0 ; i < ( nos - 1 ); i++)
  {
    for (j = 0 ; j < (nos - i - 1); j++)
    {
      if (input[j] > input[j+1])//Ascending order
      {
        temp       = input[j];
        input[j]   = input[j+1];
        input[j+1] = temp;
      }
    }
  }
  printf("here you go\n");
  
  for ( i = 0 ; i < nos ; i++ )
     printf("%d\n", input[i]);
 
  return 0;
}