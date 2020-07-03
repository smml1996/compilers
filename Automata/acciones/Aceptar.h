//
// Created by Stefanie Muroya lei on 10/31/19.
//

#ifndef AUTOMATA_ACEPTAR_H
#define AUTOMATA_ACEPTAR_H

#include "Accion.h"

class Aceptar : public Accion{

public:
    bool sePuedeAplicar(EstadoCompilador *estado);
    void aplica(EstadoCompilador *estado, queue<EstadoCompilador*> &chart);


};


#endif //AUTOMATA_ACEPTAR_H
