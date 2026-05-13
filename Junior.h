#ifndef JUNIOR_H
#define JUNIOR_H
#include "Empleado.h"

class Junior : public Empleado {
public:
    Junior(std::string n, float s);
    std::string getPuesto() override;
    float calcularSalario() override;
};
#endif
