#include <iostream>
using namespace std;
inline float miletokm(float miles)
{
return 1.609 * miles;
}
int main()
{
float miles;
cout << "Enter miles: ";
cin >> miles;
cout << "miles in kilometer is " << miletokm(miles)<< endl;
return 0;
}
