#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
  int iSum = 0;
  iSum = iNo1 + iNo2 ;
  return iSum ;
}

int main()
{
  int ivariable1 = 0 , ivariable2 = 0 , iAns=0 ;
  ivariable1 = 10;  ivariable2 = 20;
  iAns = Addition(ivariable1,ivariable2);
  printf("Addition is : %d" , iAns);
  return 0;

}