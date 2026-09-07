#pragma once
#include <string>

class Figura {
public:
    virtual ~Figura() = default;
    virtual double area() const = 0;
    virtual std::string nombre() const = 0;
};

