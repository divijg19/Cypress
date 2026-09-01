#include <iostream>

class Vector2D {
public:
  double x;
  double y;

  Vector2D(double x, double y) {
    this->x = x;
    this->y = y;
  }

  Vector2D operator+(const Vector2D &other) const {
    return Vector2D(x + other.x, y + other.y);
  }
};

int main(void) {
  Vector2D a(2, 3);
  Vector2D b(5, 1);

  Vector2D result = a + b;

  std::cout << result.x << ", " << result.y << '\n';
}
