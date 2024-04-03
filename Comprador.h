//
// Created by Jose on 4/2/2024.
//

#ifndef PROYECTOTOLEDO_COMPRADORES_H
#define PROYECTOTOLEDO_COMPRADORES_H

#include <string>
#include <vector>
#include "Producto.h"

class Compradores {
protected:
    string nombre, id;
    vector<Producto> listaProductos;
public:
    Compradores(string nombre, string id);

    virtual ~Compradores();

    string &getNombre();
    void setNombre(string &nombre);
    string &getId();
    void setId(string &id);
    vector<Producto> &getListaProductos();
    void setListaProductos(vector<Producto> &listaProductos);

    virtual Producto buscarProducto(string id);
    virtual double valorMaximo(Producto producto)=0;
    virtual double impuesto(Producto producto)=0;
    void operator+=(Producto producto);
    virtual bool contains(string idCompra);
    virtual int indexOf(string idCompra);


};


#endif //PROYECTOTOLEDO_COMPRADORES_H
