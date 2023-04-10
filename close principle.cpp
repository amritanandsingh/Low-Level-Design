#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

// Rectangle class
class Rectangle : public Shape {
public:
    void draw() override {
        // logic for drawing a rectangle
    }
};

// Circle class
class Circle : public Shape {
public:
    void draw() override {
        // logic for drawing a circle
    }
};

// Triangle class
class Triangle : public Shape {
public:
    void draw() override {
        // logic for drawing a triangle
    }
};
int main()
{
    return 0;
}
