#include "Nomina.h"
#include "Junior.h"
#include "Senior.h"
#include "LiderTecnico.h"
#include "Tester.h"

void Nomina::agregarEmpleados() {
    lista.push_back(new Junior("Jeronimo ", 1000));
     lista.push_back(new Junior("Santiago ", 1400));
    lista.push_back(new Senior("Juan ", 2000));
    lista.push_back(new Senior("Chillguy", 2120));
    lista.push_back(new LiderTecnico("Carlos", 3000));
    lista.push_back(new LiderTecnico("Neton", 3450));
    lista.push_back(new Tester("Westcuy", 1200));
    lista.push_back(new Tester("Pesodeidad", 4000));
}

const std::vector<Empleado*>& Nomina::getLista() {
    return lista;
}
