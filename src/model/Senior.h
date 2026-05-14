#ifndef SENIOR_H
#define SENIOR_H
#include "Empleado.h"

class Senior : public Empleado {
public:
    Senior(std::string n, float s);
    std::string getPuesto() override;
    float calcularSalario() override;
};
#endif
