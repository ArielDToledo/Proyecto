//
// Created by Jose on 4/2/2024.
//

#include "Mypime.h"

Mypime::Mypime(string nombre, string id) : Compradores(nombre, id) {}


double Mypime::valorMaximo(Producto producto) {
    return producto.getPrecio()*1.30;
}

double Mypime::impuesto(Producto producto) {
    return valorMaximo(producto)*0.2;
}
