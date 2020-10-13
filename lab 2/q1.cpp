#include <iostream>

using namespace std;

class student
{
    char name[20];
    int roll;
    int marks;
    char address[20];
public:
    void getdata()
    {
        cout<<"enter the name";
        cin>>name;
        cout<<"enter the roll number";
        cin>>roll;
        cout<<"enter the marks";
        cin>>marks;
        cout<<"enter the address";
        cin>>address;
    }
    void showdata()
    {
        cout<<"name:"<<name<<endl;
        cout<<"roll:"<<roll<<endl;
        cout<<"marks:"<<marks<<endl;
        cout<<"address:"<<address<<endl;
    }
};
int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}

