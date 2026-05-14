#include "View.h"
#include <iostream>
#include <iomanip>

void View::mostrarNomina() {
    miNomina.agregarEmpleados();

    std::cout << "========================================================================" << std::endl;
    std::cout << std::left << std::setw(15) << "PUESTO"
              << std::setw(25) << "NOMBRE"
              << std::setw(15) << "S. BASE"
              << "S. TOTAL (+BONOS)" << std::endl;
    std::cout << "========================================================================" << std::endl;

    for (Empleado* e : miNomina.getLista()) {
        std::cout << std::left << std::setw(15) << e->getPuesto()
                  << std::setw(25) << e->getNombre()
                  << "$" << std::setw(14) << e->getSalarioBase()
                  << "$" << e->calcularSalario() << std::endl;
    }
    std::cout << "========================================================================" << std::endl;
}
