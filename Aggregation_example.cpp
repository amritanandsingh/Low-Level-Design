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
        void function( Bar &object)   
        {
            object.fun();
        }
};
int main()
{   Bar obj;
    Foo object_of_Foo;
    object_of_Foo.function(obj);
    return 0;
}