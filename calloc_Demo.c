#include<stdio.h>
#include<stdlib.h>

int main()
{
  int length = 0;
  int *Arr = NULL;

  printf("Enter the number of elements\n");
  scanf("%d",&length);

  //step 1 : Allocate the memory
  Arr = (int *) calloc(length , sizeof(int));
  if(Arr == NULL)
  {
    printf("Unable to allocate Memory\n");
  }
  else
  {
    printf("Memory gets successfully allocated\n");
  }

  //step 2 : Use the memory

  //step 3 : Free the memory
  free(Arr);



  return 0;
}