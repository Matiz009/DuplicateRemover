#include <stdio.h>		//header file

#define SIZE 50			//maximum size of array

int
main ()
{
  int array[SIZE];		// Declarataion of array of size 50
  int size;			// Total number of elements in array
  int i, j, k;			// variables

  //getting size of array
  printf ("Enter size of the array : \t");
  scanf ("%d", &size);

  //getting values
  printf ("Enter elements in array : \n");
  for (i = 0; i < size; i++)
    {
      scanf ("%d", &array[i]);
    }

  for (i = 0; i < size; i++)
    {
      for (j = i + 1; j < size; j++)
	{

	  if (array[i] == array[j])
	    {
	      for (k = j; k < size; k++)
		{
		  array[k] = array[k + 1];
		}
	      size--;
	      j--;
	    }
	}
    }



  printf ("\nArray after deleting duplicate values : ");	//printing the values/
  for (i = 0; i < size; i++)
    {
      printf ("%d\t", array[i]);
    }

  return 0;
}

