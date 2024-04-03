//
// Created by Jose on 4/2/2024.
//

#ifndef PROYECTOTOLEDO_TRABAJADORCP_H
#define PROYECTOTOLEDO_TRABAJADORCP_H
#include "Comprador.h"

class TrabajadorCP: public Compradores {
public:
    TrabajadorCP(string nombre, string id);

    double valorMaximo(Producto producto) override;

    double impuesto(Producto producto) override;
};


#endif //PROYECTOTOLEDO_TRABAJADORCP_H
