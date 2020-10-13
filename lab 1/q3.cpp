#include<iostream>
#include<math.h>
#define pi 3.14;
using namespace std;
void area(int);
void area(int,int);
int main()
{
    int r,l,b;
    cout<<"enter the radius of circle";
    cin>>r;
    cout<<"enter the length and breadth";
    cin>>l>>b;
    area(r);
    area(l,b);
}
void area(int r)
{
    cout<<"the area of circle";
    float area= r*r*pi;
    cout<<area;

}
void area(int l,int b)
{
    cout<<"the area of rectangle";
    float area=l*b;
    cout<<area;


}
