#include<stdio.h>

int Addition(int iNo1 , int iNo2) //Example of Dosa(Masala and sadha) and pishwi
{
  int iSum = 0 ;
  iSum = iNo1 + iNo2 ;
  return iSum;
}

int main()
{
  int ivariable1 = 0 , ivariable2 = 0 , iAns = 0;

  printf("Enter the first number :");
  scanf("%d", &ivariable1);

  printf("Enter second number :");
  scanf("%d",&ivariable2 );

  iAns = Addition(ivariable1 , ivariable2);
  
  printf("Addition is : %d" , iAns);

  return 0 ;
}