#ifndef TESTER_H
#define TESTER_H
#include "Empleado.h"

class Tester : public Empleado {
public:
    Tester(std::string n, float s);
    std::string getPuesto() override;
    float calcularSalario() override;
};
#endif
