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
};

class Solver
{
public:
   double solve(Myclass &eq, double a, double b, double eps)
   {
      double c = (a + b) / 2;
      while (fabs(eq.f(c)) > eps && fabs(b - a) > eps)
      {
         if (eq.f(a) * eq.f(c) < 0)
         {
            b = c;
         }
         else
         {
            a = c;
         }
         c = (a + b) / 2;
      }
      cout << "f(x) = " << eq.f(c) << endl;
      return c;
   }
};

int main()
{
   Solver solver;
   Myclass equation;
   double a = 0.8;
   double b = 1.0;
   double eps = 0.0001;
   double x = solver.solve(equation, a, b, eps);
   cout << "Answer is: " << x << endl;
   return 0;
}
