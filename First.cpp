#include<iostream>
using namespace std;

class Demo
{
  public: 
          int iNo1;
          int iNo2;
          Demo()
          {
            iNo1 = 0;
            iNo2 = 0;
          }
          Demo(int a, int b)
          {
            int iNo1 = a;
            int iNo2 = b;

          }
};

int main()
{
  Demo obj1;
  Demo obj2(11,21);
  

  return 0;
}
