/*
Autor: Harry Enrique Bodán Navarro
Fecha: 05 de Mayo del 2024
Versión: 1.0
Lógica y Algoritmos

Problema 5: Cree el siguiente menú de opciones para una aplicación prototipo sobre venta de artículos,
cree el menú de modo que se pueda navegar entre sus opciones.


*/

#include <windows.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void mostrarInicio();
void mostrarVentas();
void mostrarFacturar();
void mostrarCredito();
void mostrarCaja();
void mostrarMenu();

void ejercicioCinco() {
    int opcion;
    bool salir = false;

    while (!salir) {
        mostrarMenu();
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarInicio();
                cout << "Seleccione una opción: ";
                cin >> opcion;
                switch (opcion) {
                    case 1:
                        cout << "Abriendo..." << endl;
                        system("pause");
                        break;
                    case 2:
                        cout << "Cerrando..." << endl;
                        system("pause");
                        break;
                }
                break;
            case 2:
                mostrarVentas();
                cout << "Seleccione una opción: ";
                cin >> opcion;
                switch (opcion) {
                    case 1:
                        mostrarFacturar();
                        cout << "Seleccione una opción: ";
                        cin >> opcion;
                        switch (opcion) {
                            case 1:
                                mostrarCredito();
                                cout << "Seleccione una opción: ";
                                cin >> opcion;
                                switch (opcion) {
                                    case 1:
                                        cout << "Registrando cliente..." << endl;
                                        system("pause");
                                        break;
                                    case 2:
                                        cout << "Cerrando crédito..." << endl;
                                        system("pause");
                                        break;
                                }
                                break;
                            case 2:
                                cout << "Facturando al contado..." << endl;
                                system("pause");
                                break;
                        }
                        break;
                    case 2:
                        cout << "Eliminando factura..." << endl;
                        system("pause");
                        break;
                    case 3:
                        cout << "Reimprimiendo..." << endl;
                        system("pause");
                        break;
                }
                break;
            case 3:
                mostrarCaja();
                cout << "Seleccione una opción: ";
                cin >> opcion;
                switch (opcion) {
                    case 1:
                        cout << "Abriendo caja..." << endl;
                        system("pause");
                        break;
                    case 2:
                        cout << "Realizando cierre..." << endl;
                        system("pause");
                        break;
                    case 3:
                        cout << "Registrando salida en caja..." << endl;
                        system("pause");
                        break;
                    case 4:
                        cout << "Registrando ingreso en caja..." << endl;
                        system("pause");
                        break;
                }
                break;
            case 4:
                cout << "Saliendo..." << endl;
                salir = true;
                system("pause");
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                system("pause");
                break;
        }
    }

}


void mostrarInicio() {
    cout << "Menú Inicio:" << endl;
    cout << "1. Abrir" << endl;
    cout << "2. Cerrar" << endl;
    cout << "3. Salir" << endl;
}

void mostrarVentas() {
    cout << "Menú Ventas:" << endl;
    cout << "1. Facturar" << endl;
    cout << "2. Eliminar Factura" << endl;
    cout << "3. Reimprimir" << endl;
}

void mostrarFacturar() {
    cout << "Menú Facturar:" << endl;
    cout << "1. Al Crédito" << endl;
    cout << "2. Al contado" << endl;
}

void mostrarCredito() {
    cout << "Menú Al Crédito:" << endl;
    cout << "1. Registrar Cliente" << endl;
    cout << "2. Cerrar Crédito" << endl;
}

void mostrarCaja() {
    cout << "Menú Caja:" << endl;
    cout << "1. Abrir Caja" << endl;
    cout << "2. Realizar Cierre" << endl;
    cout << "3. Registrar salida" << endl;
    cout << "4. Registrar ingreso" << endl;
}

void mostrarMenu() {
    cout << "***** Menú Principal *****" << endl;
    cout << "1. Inicio" << endl;
    cout << "2. Ventas" << endl;
    cout << "3. Caja" << endl;
    cout << "4. Salir" << endl;
}

