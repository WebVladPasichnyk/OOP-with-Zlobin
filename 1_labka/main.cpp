#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

class myClass
{
public:
   float x, xMin, xMax, y;
   void func()
   {
      for (x = 0; x <= xMax; x += 0.2)
      {
         y = x * x / 4 + x - 1.2502;
         cout << "Result: x = " << x;
         cout << " y = " << y << endl;
      }
   }
};

int main()
{
   myClass newObj;
   newObj.x = 0;
   newObj.xMin = 0;
   newObj.xMax = 2;
   newObj.func();

   return 0;
}