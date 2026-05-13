#ifndef NOMINA_H
#define NOMINA_H
#include <vector>
#include "Empleado.h"

class Nomina {
private:
    std::vector<Empleado*> lista;
public:
    void agregarEmpleados();
    const std::vector<Empleado*>& getLista();
};
#endif
