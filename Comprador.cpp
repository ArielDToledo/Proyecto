//
// Created by Jose on 4/2/2024.
//

#include "Comprador.h"

Compradores::Compradores(string nombre, string id) : nombre(nombre), id(id) {}
Compradores::~Compradores() {}

string &Compradores::getNombre() {
    return nombre;
}

void Compradores::setNombre(string &nombre) {
    Compradores::nombre = nombre;
}

string &Compradores::getId() {
    return id;
}

void Compradores::setId(string &id) {
    Compradores::id = id;
}

vector<Producto> &Compradores::getListaProductos() {
    return listaProductos;
}

void Compradores::setListaProductos(vector<Producto> &listaProductos) {
    Compradores::listaProductos = listaProductos;
}

void Compradores::operator+=(Producto producto) {
    listaProductos.push_back(producto);
}

Producto Compradores::buscarProducto(string id) {
    return listaProductos[indexOf(id)];
}
bool Compradores::contains(string idCompra){

    int i = 0;
    while (i < listaProductos.size() && listaProductos[i].getIdDeCompra() != idCompra)
        ++i;
    return i < listaProductos.size();

}
int Compradores::indexOf(string idCompra) {

    if (contains(idCompra)) {
        int i = 0;
        while (i < listaProductos.size() && listaProductos[i].getIdDeCompra() != idCompra)
            ++i;
        return i;
    }
    return  -1;

}

