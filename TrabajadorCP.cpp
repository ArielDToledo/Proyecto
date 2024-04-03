//
// Created by Jose on 4/2/2024.
//

#include "TrabajadorCP.h"

TrabajadorCP::TrabajadorCP(string nombre, string id) : Compradores(nombre, id) {

}

double TrabajadorCP::valorMaximo(Producto producto) {
    return producto.getPrecio()*1.45;
}

double TrabajadorCP::impuesto(Producto producto) {
    return valorMaximo(producto)*0.35;
}
