#include "Tester.h"

Tester::Tester(std::string n, float s) : Empleado(n, s) {}

std::string Tester::getPuesto() { return "Tester"; }

float Tester::calcularSalario() { return salarioBase * 1.05f; }
