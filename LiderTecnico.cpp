#include "LiderTecnico.h"

LiderTecnico::LiderTecnico(std::string n, float s) : Empleado(n, s) {}

std::string LiderTecnico::getPuesto() { return "Lider Tecnico"; }

float LiderTecnico::calcularSalario() { return salarioBase * 1.25f; }
