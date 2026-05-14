#include "Senior.h"

Senior::Senior(std::string n, float s) : Empleado(n, s) {}

std::string Senior::getPuesto() { return "Senior"; }

float Senior::calcularSalario() { return salarioBase * 1.20f; }
