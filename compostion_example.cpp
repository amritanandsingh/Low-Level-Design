#include<iostream>
using namespace std;
class Bar{
    public:
        void fun()
        {
            cout<<"passed";
        }
};
class Foo{
    public:
       Bar *obj=new Bar();
    void function()
    {   
        obj->fun();
    
    }
};
int main()
{   
    Foo object_of_Foo;
    object_of_Foo.function();
    return 0;
}