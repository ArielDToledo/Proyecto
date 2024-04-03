#include <iostream>
#include "Mypime.h"
#include "Producto.h"
#include "TrabajadorCP.h"
int main() {

    vector<Producto> listaP;
    Producto p1("Producto_1","1",100);
    Producto p2("Producto_2","2",200);
    Producto p3("Producto_3","3",300);
    Producto p4("Producto_4","4",400);
    listaP.push_back(p1);
    listaP.push_back(p2);
    listaP.push_back(p3);
    listaP.push_back(p4);
    Mypime m("Toledo","01");
    TrabajadorCP t("Toledo","02");
    int opcion;
    while (true){
        cout<<"1-Comprar Producto"<<'\n';
        cout<<"2-Compras Registradas"<<'\n';
        cout<<"3-Calcular Impuesto"<<'\n';
        cout<<"4-Salir"<<'\n';
        cout<<"Introduce una opcion:";
        cin>>opcion;
        if (opcion==1){
            int indice,tipoComprador;
            cout<<"Introduce que tipo de comprador eres"<<'\n';
            cout<<"1-Mypime\n2-Trabajador por cuenta propia"<<'\n';
            cin>>tipoComprador;
            for(Producto producto: listaP){
                producto.mostrarDatos();
            }
            cout<<"Ingrese el indice del producto que desea comprar"<<'\n';
            cin>>indice;

            if (tipoComprador==1){
                m += listaP[indice-1];
            }else if (tipoComprador==2){
                t += listaP[indice-1];
            }else{ cout<<"Itroduce un dato valido";
            continue;}
        }
        if (opcion==2){
            for (Producto producto: m.getListaProductos()) {
                producto.mostrarDatos();
            }
            for (Producto producto: t.getListaProductos()) {
                producto.mostrarDatos();
            }
        }
        if (opcion==3){
            int tipoComprador;
            cout<<"Introduce para que tipo de comprador quieres calcular impuesto"<<'\n';
            cout<<"1-Mypime\n2-Trabajador por cuenta propia"<<'\n';
            cin>>tipoComprador;
            if (tipoComprador==1){
                string idCompra;
                for(Producto producto: listaP){
                    producto.mostrarDatos();
                }
                cout<<"Introduce el id del Producto que deseas calcular el valor maximo y el impuesto"<<'\n';
                cin>>idCompra;
                if (m.indexOf(idCompra)!=-1){
                    cout<<"El valor maximo que puede alcanzar es: "<<m.valorMaximo(m.buscarProducto(idCompra))<<" y el impuesto de este es: "<<m.impuesto(m.buscarProducto(idCompra))<<'\n';
                } else cout<<"Este comprador no tiene de este producto"<<'\n';
            } else if (tipoComprador==2){
                string idCompra;
                for(Producto producto: listaP){
                    producto.mostrarDatos();
                }
                cout<<"Introduce el id del Producto que deseas calcular el valor maximo y el impuesto"<<'\n';
                cin>>idCompra;
                if (t.indexOf(idCompra)!=-1){
                    cout<<"El valor maximo que puede alcanzar es: "<<t.valorMaximo(t.buscarProducto(idCompra))<<" y el impuesto de este es: "<<t.impuesto(t.buscarProducto(idCompra))<<'\n';
                } else cout<<"Este comprador no tiene de este producto"<<'\n';
            } else{ cout<<"Introduce un dato valido";
            continue;}
        }
        if (opcion==4)break;
    }

    return 0;
}
