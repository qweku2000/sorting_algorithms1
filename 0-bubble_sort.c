#include "sort.h"

/**
 *@array: An array of integers to be sorted with the bubble sorting method
 *@size:The size of the array
 *bubble_sort - This sorts the array of integers using the bubble method of sorting
*/


void bubble_sort(int *array, size_t size)
{
  int temp;
  size_t i,j;
  int swapped;
  for(i = 0;i < size - 1;i++)
    {
      for(j = 0; j < size - 1 - i;j++)
	{
	  if (array[j] > array[j+1])
	    {
	      /**
	       *swap elements 
	      */
	      temp = array[j];
	      array[j] = array[j+1];
	      array[j + 1] = temp;
	      swapped = 1;
	    }
	  if (swapped)
	    {
	      print_array(array,size);
	    }
	  if (!swapped)
	    {
	      break;
	    }
	}
    }
}
		
