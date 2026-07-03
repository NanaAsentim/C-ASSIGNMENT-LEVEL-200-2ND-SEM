#include <iostream>

using namespace std;

int main()
{
   float rad, area;

   cout << "Enter the radius of the circle:";
   cin >> rad;

   area = 3.142 * rad * rad;
   cout << "Therefore, the area of the circle ="<<area<< "cm2\n";
    return 0;
}
