/*
Autor: Harry Enrique Bodán Navarro
Fecha: 05 de Mayo del 2024
Versión: 1.0
Lógica y Algoritmos

Problema 2: Se requiere crear una aplicación para determinar una enfermedad relacionada con el
calor, en función de sus síntomas

Enfermdades:
0 -> Enfermedad no encontrada
1 -> Golpe de Calor
2 -> Agotamiento por calor
3 -> Calambres por calor
4 -> Quemaduras Solares
5-> Sarpullido por calor

*/

int investigarSintomas();
void imprimirEnfermedad(int identificador);


#include <windows.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

void ejercicioDos(){
    system("cls");
    SetConsoleOutputCP(CP_UTF8);

    int identificador = investigarSintomas();

    imprimirEnfermedad(identificador);

}

int investigarSintomas(){
    int identificador = 0;

    cout<<"Presenta mareos?"<<endl;
    cout<<"1. Si"<<endl;
    cout<<"2. No"<<endl;
    cin>>identificador;

    if(identificador==1){
        cout<<"Presenta:"<<endl;
        cout<<"1. Pulso acelerado y fuerte"<<endl;
        cout<<"2. Pulso rápido y débil"<<endl;
        cin>>identificador;

        if(identificador==1){
            return 1;
        }else if(identificador==2){
            return 2;
        }else{
            return 6;
        }

    }else if(identificador==2){
        cout<<"Presenta dolor o espasmos musculares?"<<endl;
        cout<<"1. Si"<<endl;
        cout<<"2. No"<<endl;
        cin>>identificador;

        if(identificador == 1){
            return 3;
        }else if (identificador==2){
            cout<<"Presenta Piel adolorida, enrojecida y tibia?"<<endl;
            cout<<"1. Si"<<endl;
            cout<<"2. No"<<endl;
            cin>>identificador;

            if(identificador==1){
                return 4;
            }else if(identificador==2){
                cout<<"Grupos de pequeñas ampollas rojas que parecen granitos en la piel?"<<endl;
                cout<<"1. Si"<<endl;
                cout<<"2. No"<<endl;
                cin>>identificador;
                if(identificador == 1){
                    return 5;
                }else if(identificador==2){
                    return 0;
                }else{
                    return 6;
                }

            }else{
                return 6;
            }

        }else{
            return 6;
        }

    }else{
        return 6;
    }
}


/*
Enfermdades:
7 -> Enfermedad no encontrada
1 -> Golpe de Calor
2 -> Agotamiento por calor
3 -> Calambres por calor
4 -> Quemaduras Solares
5-> Sarpullido por calor

*/

void imprimirEnfermedad(int identificador){
    cout<<"------------------------------------"<<endl;
    cout<<"Su enfermedad es:"<<endl;
    switch (identificador)
    {
    case 1:
        cout<<"Tienes Golpe de Calor"<<endl;
        cout<<"Cuidate mucho"<<endl;
        system("pause");
        system("cls");
        break;

    case 2:
        cout<<"Agotamiento por Calor"<<endl;
        cout<<"Cuidate mucho"<<endl;
        system("pause");
        system("cls");
        break;

    case 3:
        cout<<"Calambres por calor"<<endl;
        cout<<"Cuidate mucho"<<endl;
        system("pause");
        system("cls");
        break;

    case 4:
        cout<<"Quemaduras Solares"<<endl;
        cout<<"Cuidate mucho"<<endl;
        system("pause");
        system("cls");
        break;

    case 5:
        cout<<"Sarpullido por calor"<<endl;
        cout<<"Cuidate mucho"<<endl;
        system("pause");
        system("cls");
        break;

    case 6:
        cout<<"Opción Incorrecta"<<endl;
        system("pause");
        system("cls");
        break;

    default:
        cout<<"Enfermedad no encontrada"<<endl;
        system("pause");
        system("cls");
        break;
    }
}

