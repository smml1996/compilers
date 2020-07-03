//
// Created by Stefanie Muroya lei on 10/24/19.
//

#ifndef AUTOMATA_EXPANDIR_H
#define AUTOMATA_EXPANDIR_H

#include "Accion.h"

class Expandir : public Accion{
public:
    bool sePuedeAplicar(EstadoCompilador *estado);
    void aplica(EstadoCompilador *estado, queue<EstadoCompilador*> &chart);
};


#endif //AUTOMATA_EXPANDIR_H
