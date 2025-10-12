#include<stdio.h>

int Substraction(int iNo1, int iNo2)
{
  int Minus = 0 ;
  
  Minus = iNo1 - iNo2 ;

  return Minus ;
}
int main()
{
  int ivalue1 = 0 ; int ivalue2 = 0 ; int iAns = 0;

  printf("Enter the First Number :");
  scanf("%d", &ivalue1);

  printf("Enter the second Number :");
  scanf("%d", &ivalue2);

  iAns = Substraction(ivalue1, ivalue2);

  printf("Substraction is : %d ", iAns);

  return 0 ;
}