/*
Autor: Harry Enrique Bodán Navarro
Fecha: 05 de Mayo del 2024
Versión: 1.0
Lógica y Algoritmos

Problema 4: Implemente un algoritmo que permita evaluar el valor de verdad de las operaciones lógica
AND, OR y NOT para dos valores booleanos introducidos por el usuario.


*/

#include <stdlib.h>
#include <string> 
#include <sstream> 
#include <windows.h>
#include <iostream>
using namespace std;

void mostrarMenuCuatro();

void ejercicioCuatro(){
    SetConsoleOutputCP(CP_UTF8);

    string inputUno, inputDos;
    bool uno, dos, respuesta;

    cout << "---------------" << endl;
    cout << "Digite el primer valor booleano (true/false): ";
    cin >> inputUno;
    cout << "Digite el segundo valor booleano (true/false): ";
    cin >> inputDos;

    istringstream(inputUno) >> boolalpha >> uno;
    istringstream(inputDos) >> boolalpha >> dos;
    
    if(uno && dos){
        respuesta = true;
    }else{
        respuesta = false;
    }

    cout<<"AND: "<<respuesta<<endl;

    if(uno || dos){
        respuesta = true;
    }else{
        respuesta = false;
    }

    cout<<"OR: "<<respuesta<<endl;

    uno = !uno;

    dos = !dos;

    cout<<"NOT (Valor a): "<<uno<<endl;
    cout<<"NOT (Valor b): "<<dos<<endl;

    system("pause");
}


