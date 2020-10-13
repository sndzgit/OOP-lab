#include <iostream>

using namespace std;
class complex
{
    int real;
    int img;
public:
    complex()
    {
        real=0;
        img=0;
    }
    complex(float r,float i)
    {
        real=r;
        img=i;
    }
    complex(complex &c)
    {
        real=c.real;
        img =c.img;
    }
    void showdata()
    {
        cout<<real<<"+i"<<img<<endl;
    }
    ~complex()
    {
        cout<<"destroyed"<<endl;
    }
};

int main()
{
    complex c1,c2(1.1,2.2),c3(c2);
    c1.showdata();
    c2.showdata();
    c3.showdata();

    return 0;
}
