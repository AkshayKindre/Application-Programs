#include<iostream>
using namespace std;

class Demo
{
    public:
        int A,B;

        Demo()
        {
            cout<<"Inside Demo Constructor"<<"\n";
        }

        void fun()
        {
            cout<<"Inside fun of Demo"<<"\n";
        }


};

class Hello : public Demo
{
    int X,Y;

    Hello()
    {

        cout<<"Inside Hello constructor"<<"\n";
    }
    void gun()
    {

        cout<<"Inside gun of Hello"<<"\n";
    }


};

int main()
{

    Hello hobj;

    return 0;
}