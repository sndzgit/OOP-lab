#include<iostream>
using namespace std;
void area(char='+',int=45);
int main()
{
    area();
    area('*');
    area('-',50);

}
void area(char ch,int n)
{
    for(int j=0;j<n;j++)
    {
        cout<<ch;
    }
}

