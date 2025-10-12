#include<stdio.h>

int Product(int No1 , int No2 )     // (Example of sharemaret  double Paisa)
{
  int Multi = 1 ;
  Multi = No1*No2 ;
  return Multi ;
}
int main()
{
  int value1 ; int value2 ; int Ans  ;

  printf("enter the First No :");
  scanf("%d", &value1);

  printf("enter the Secondt No :");
  scanf("%d", &value2);

  Ans = Product(value1 , value2);

  printf("The Product is : %d",Ans );

  return 1;

  

}