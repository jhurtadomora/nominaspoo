#include "Empleado.h"

Empleado::Empleado(std::string n, float s) : nombre(n), salarioBase(s) {}

std::string Empleado::getNombre() { return nombre; }

float Empleado::getSalarioBase() { return salarioBase; }
