#include <iostream>
#include <cmath>

using namespace std;

class Myclass
{
public:
   double f(double x)
   {
      return x * x / 4 + x - 1.2502;
   }

   double df(double x)
   {
      return x / 2 + 1;
   }
};

class Solver
{
public:
   double solve(Myclass &eq, double x0, double eps)
   {
      double x1 = x0 - eq.f(x0) / eq.df(x0);
      while (fabs(x1 - x0) > eps)
      {
         x0 = x1;
         x1 = x0 - eq.f(x0) / eq.df(x0);
      }
      cout << "f(x)= " << eq.f(x1) << endl;
      // printf("%f(x):", eq.f(x1));
      return x1;
   }
};

int main()
{
   Solver solver;
   Myclass equation;
   double x0 = 1.5;
   double eps = 0.0001;
   double x = solver.solve(equation, x0, eps);
   cout << "Root: " << x << endl;
   return 0;
}

// #include <stdio.h>
// #include <iostream>
// #include <cmath>

// using namespace std;

// class myClass
// {
// public:
//    float x, xMin, xMax, c, esp;
//    float fun(float x)
//    {
//       return 3 * sin(sqrt(x)) + 0.35 * x - 3.8;
//    }

//    void cycle()
//    {
//       while ((xMax - xMin) > 0.00001)
//       {
//          c = (xMin + xMax) / 2;
//          if (fun(c) * fun(xMin) < 0)
//          {
//             xMax = c;
//          }
//          if (fun(c) * fun(xMax) < 0)
//          {
//             xMin = c;
//          }
//       }
//       cout << "x= " << c << "func(x)= " << fun(c);
//       printf("x = %f fun(x) = %f \n", c, fun(c));
//    }
// };

// int main()
// {
//    myClass newObj;
//    newObj.esp = 0.00001;
//    newObj.xMin = 0;
//    newObj.xMax = 2;
//    newObj.cycle();
// }

//         return 3 *
//         sin(sqrt(x)) +
//     0.35 * x - 3.8;

// int main()
// {
//    float xMin, xMax, c;
//    xMin = 2;
//    xMax = 3;
//    while ((xMax - xMin) > 0.00001)
//    {
//       c = (xMin + xMax) / 2;
//       if (fun(c) * fun(xMin) < 0)
//       {
//          xMax = c;
//       }
//       if (fun(c) * fun(xMax) < 0)
//       {
//          xMin = c;
//       }
//    }
//    printf("x = %f fun(x) = %f \n", c, fun(c));
// }
