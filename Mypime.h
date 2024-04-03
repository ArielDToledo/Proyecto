//
// Created by Jose on 4/2/2024.
//

#ifndef PROYECTOTOLEDO_MYPIME_H
#define PROYECTOTOLEDO_MYPIME_H
#include "Comprador.h"

class Mypime: public Compradores{
public:
    Mypime(string nombre, string id);

    double valorMaximo(Producto producto) override;
    double impuesto(Producto producto) override;

};


#endif //PROYECTOTOLEDO_MYPIME_H
