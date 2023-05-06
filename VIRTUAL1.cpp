#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;

        void Fun()      //1000
        {
            cout<<"Inside Fun"<<"\n";
        }

        void Gun()      //2000
        {
            cout<<"Inside Gun"<<"\n";
        }

        void Sun()      //3000
        {
            cout<<"Inside Sun"<<"\n";
        }
};

class Derived
{
    public:
        int X,Y;
};

int main()
{
    
    
    
    return 0;
}