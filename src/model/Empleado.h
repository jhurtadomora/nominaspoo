#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>

class Empleado {
protected:
    std::string nombre;
    float salarioBase;
public:
    Empleado(std::string n, float s);
    virtual std::string getPuesto() = 0;
    virtual float calcularSalario() = 0;
    std::string getNombre();
    float getSalarioBase();
};
#endif
