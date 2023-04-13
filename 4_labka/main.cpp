#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>

using namespace std;

ofstream myFile("text.txt");

class Myclass
{
public:
   float y, xMin, xMax;

   void func()
   {
      for (float x = -3; x <= 4; x += 0.1)
      {
         if (x > -4 && x < -3)
         {
            y = 3;
         }
         else if (x >= -3 && x < 0)
         {
            y = -x;
         }
         else if (x >= 0 && x < 2)
         {
            y = x;
         }
         else if (x >= 2 && x < 4)
         {
            y = 2;
         }
         cout << "  " << x << endl;
         cout << "  " << y << endl;

         myFile << x << "\t" << y << endl;

         // myFile << "  " << x << endl;
         // myFile << "  " << y << endl;
      }
   }
};

int main()
{
   Myclass obj;
   obj.xMin = -4;
   obj.xMax = 4;
   obj.func();
   myFile.close();

   return 0;
}

// #include <stdio.h>
// #include <math.h>
// #include <iostream>
// #include <fstream>

// using namespace std;

// class Myclass
// {
// public:
//    float y, xMin, xMax;

//    void func()
//    {
//       ofstream myFile("text.txt"); // відкрийте файл для запису
//       if (myFile.is_open())
//       {
//          for (float x = -4; x <= 4; x += 0.1)
//          {
//             if (x > -4 && x < -3)
//             {
//                y = 3;
//             }
//             else if (x >= -3 && x <= 0)
//             {
//                y = -x;
//             }
//             else if (x >= 0 && x < 2)
//             {
//                y = x;
//             }
//             else if (x >= 2 && x < 4)
//             {
//                y = 2;
//             }
//             cout << " " << x << " , " << y << endl;
//             myFile << " " << x << " , " << y << endl; // записуйте результати у файл
//          }
//          myFile.close(); // закрийте файл після запису
//       }
//       else
//       {
//          cout << "Unable to open file." << endl;
//       }
//    }
// };

// int main()
// {
//    Myclass obj;
//    obj.xMin = -4;
//    obj.xMax = 4;
//    obj.func();
//    return 0;
// }
