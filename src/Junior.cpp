#include "Junior.h"

Junior::Junior(std::string n, float s) : Empleado(n, s) {}

std::string Junior::getPuesto() { return "Junior"; }

float Junior::calcularSalario() { return salarioBase; }
