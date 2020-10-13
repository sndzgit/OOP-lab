#include <iostream>

using namespace std;
class complex
{
    int real;
    int img;
public:
    void getdata()
    {
       cout<<"enter the real value"<<endl;
       cin>>real;
       cout<<"enter the imaginary value"<<endl;
       cin>>img;
    }
    void showdata()
    {
        cout<<real<<"+i"<<img;
    }
    complex add(complex cc1,complex cc2)
    {
        complex temp;
        temp.real=cc1.real+cc2.real;
        temp.img=cc1.img+cc2.img;
        return temp;
    }
};

int main()
{
    complex cc1,cc2,cc3;
    cc1.getdata();
    cc2.getdata();
    cc3=cc3.add(cc1,cc2);
    cc3.showdata();
    return 0;
}

