#include<iostream>

using namespace std;

class ABC;
class XYZ;

class ABC
    {
        int x;

        friend int sum(ABC,XYZ);

        public:

        void setdata(int a)
            {
                x=a;
            }
    };

class XYZ
    {
        int y;

        friend int sum(ABC,XYZ);

        public:

        void setdata(int a)
            {
                y=a;
            }
    };

int sum(ABC a,XYZ b)
{
    return a.x+b.y;
}

int main()
{   
    ABC obj1;
    XYZ obj2;

    cout<<"\n";

    obj1.setdata(23);
    obj2.setdata(43);

    cout<<"Sum Is:--"<<sum(obj1,obj2)<<"\n";
    
    cout<<"\n";
    return 0;
}