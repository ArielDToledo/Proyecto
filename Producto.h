//
// Created by Jose on 4/2/2024.
//

#ifndef PROYECTOTOLEDO_PRODUCTO_H
#define PROYECTOTOLEDO_PRODUCTO_H
#include <string>
#include <iostream>

using namespace std;
class Producto {
private:
    string nombre,idDeCompra;
    double precio;
public:
    Producto(string nombre, string idDeCompra, double precio);

    string &getNombre() ;

    void setNombre( string &nombre);

    string &getIdDeCompra() ;

    void setIdDeCompra( string &idDeCompra);

    double getPrecio();

    void setPrecio(double precio);

    void mostrarDatos();
};
#endif //PROYECTOTOLEDO_PRODUCTO_H
