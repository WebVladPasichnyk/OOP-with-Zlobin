#include <stdio.h>
#include <math.h>

int main()
{
   float x, xMin, xMax, yMin, yMax;
   xMax = 2;
   xMin = -3;
   yMax = 3;
   yMin = 2;
   x = xMin;
   FILE *text = fopen();
   while (x <= xMax)
   {
      fprintf(text, "\n%f", y);
      fprintf(text, "   %f", x);
      printf("Result: y = %f", y);
      printf(" x = %f\n", x);
      x = x + 0.5;
   }
   fclose(text);
   return 0;
}