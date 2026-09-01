#include <iostream>

class Vector2D {
public:
  double x;
  double y;

  Vector2D(double x, double y) : x(x), y(y) {}
};

std::ostream &operator<<(std::ostream &os, const Vector2D &vector) {
  os << "(" << vector.x << ", " << vector.y << ")";
  return os;
}

int main() {
  Vector2D v(3, 7);

  std::cout << v << '\n';
}
