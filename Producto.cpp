//
// Created by Jose on 4/2/2024.
//

#include "Producto.h"

Producto::Producto(string nombre, string idDeCompra, double precio) : nombre(nombre),
idDeCompra(idDeCompra),precio(precio) {}

string &Producto::getNombre() {
    return nombre;
}

void Producto::setNombre(string &nombre) {
    Producto::nombre = nombre;
}

string &Producto::getIdDeCompra() {
    return idDeCompra;
}

void Producto::setIdDeCompra(string &idDeCompra) {
    Producto::idDeCompra = idDeCompra;
}

double Producto::getPrecio() {
    return precio;
}

void Producto::setPrecio(double precio) {
    Producto::precio = precio;
}

void Producto::mostrarDatos() {
    cout<<"Nombre: "<<getNombre()<<" Id: "<<getIdDeCompra()<<" Precio: "<<getPrecio()<<'\n';
}
