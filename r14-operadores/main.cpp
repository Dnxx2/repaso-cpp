#include <iostream>
#include <numeric>

class Fraccion
{
  int num_;
  int den_;

  void reducir()
  {
    int divisor = std::gcd(num_, den_);
    num_ /= divisor;
    den_ /= divisor;
    if (den_ < 0)
    {
      num_ = -num_;
      den_ = -den_;
    }
  }

public:
  Fraccion(int n = 0, int d = 1) : num_(n), den_(d)
  {
    reducir();
  }

  Fraccion operator+(const Fraccion &otra) const
  {
    return Fraccion(num_ * otra.den_ + otra.num_ * den_, den_ * otra.den_);
  }

  Fraccion operator*(const Fraccion &otra) const
  {
    return Fraccion(num_ * otra.num_, den_ * otra.den_);
  }

  bool operator==(const Fraccion &otra) const
  {
    return num_ == otra.num_ && den_ == otra.den_;
  }

  bool operator<(const Fraccion &otra) const
  {
    return num_ * otra.den_ < otra.num_ * den_;
  }

  friend std::ostream &operator<<(std::ostream &os, const Fraccion &fraccion);
};

std::ostream &operator<<(std::ostream &os, const Fraccion &fraccion)
{
  return os << fraccion.num_ << '/' << fraccion.den_;
}

int main()
{
  std::cout << Fraccion(1, 2) + Fraccion(1, 3) << '\n';
  std::cout << Fraccion(6, -8) << '\n';
}
