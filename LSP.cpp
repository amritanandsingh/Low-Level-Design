#include <iostream>
using namespace std;
class Shape {
public:
  virtual void draw() {
    std::cout << "Drawing a Shape\n";
  }
};

class Circle : public Shape {
public:
  void draw() override {
    std::cout << "Drawing a Circle\n";
  }
};

class Square : public Shape {
public:
  void draw() override {
    std::cout << "Drawing a Square\n";
  }
};

void drawShapes(Shape** shapes, int count) {
  for (int i = 0; i < count; ++i) {
    shapes[i]->draw();
  }
}

int main() {
  Circle circle;
  Square square;
  
  Shape* shapes[2];
  shapes[0] = &circle;
  shapes[1] = &square;
  
  drawShapes(shapes, 2);
  
  return 0;
}
