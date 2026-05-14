#ifndef LIDERTECNICO_H
#define LIDERTECNICO_H
#include "Empleado.h"

class LiderTecnico : public Empleado {
public:
    LiderTecnico(std::string n, float s);
    std::string getPuesto() override;
    float calcularSalario() override;
};
#endif
