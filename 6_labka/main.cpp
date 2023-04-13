// #include <iostream>
// #include <fstream>
// #include <algorithm>

// using namespace std;

// const int MAX_SIZE = 100;

// int main()
// {
//    ifstream inFile("text.txt");
//    double arr[MAX_SIZE];
//    int i = 0;
//    while (inFile >> arr[i] && i < MAX_SIZE)
//    {
//       i++;
//    }
//    inFile.close();

//    // Використовуємо алгоритм сортування за зростанням
//    sort(arr, arr + i);

//    // cout << "Sorted array: " << endl;
//    printf('Sorted array: 'б);

//    for (int j = 0; j < i; j++)
//    {
//       cout << arr[j] << " ";
//    }
//    cout << endl;

//    return 0;
// }

#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 162;

int main()
{
   ifstream inFile("text.txt");
   double arr[MAX_SIZE];
   int i = 0;
   while (inFile >> arr[i] && i < MAX_SIZE)
   {
      i++;
   }
   inFile.close();

   sort(arr, arr + i);

   cout << "Sorted array:" << endl;
   for (int j = 0; j < i; j++)
   {
      cout << arr[j] << " ";
   }
   cout << endl;

   return 0;
}
