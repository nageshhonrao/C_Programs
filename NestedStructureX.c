#include<stdio.h>



struct Hello
{
  int no;
  float marks;
  struct Demo
  {
  int i;
  float f;
 
  }dobj;

};


int main()
{

  printf("Size of hello Structre is : %lu\n ",sizeof(struct Hello));   //16
  
  
 

  return 0;

  

}