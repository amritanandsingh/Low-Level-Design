#include<iostream>
using namespace std;
float area(float length , float breath )
{
    return length*breath;
}
float area(float side)
{
    return side*side;
}
float area(int radius )
{
    return 3.14*radius;
}
int main()
{
        cout<<"Area of Circle "<<area(7)<<endl;
        cout<<"Area of Rectangle "<<area(2.3,24)<<endl;
        cout<<"Area of Square "<<area(4);
        return 0;
}