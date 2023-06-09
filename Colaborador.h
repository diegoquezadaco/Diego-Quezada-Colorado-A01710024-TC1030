#ifndef COLABORADOR_H
#define COLABORADOR_H
#include <iostream>
#include <string>
using namespace std;

//Clase abstracta Colaborador
class Colaborador {
        
    protected:
    
    string nombre;
    string tipo;
    int estadisticas[2];
    int nivel;
    double sueldo;
        

    public: 

    //getters y setters
    string getNombre(){
        return nombre;
    }
    string getTipo(){
        return tipo;
    }
    double getEstadisticas(){
        return estadisticas[2];
    }
    int getNivel(){
        return nivel;
    }
    double getSueldo(){
        return sueldo;
    }
    void setTipo(string _tipo){
        tipo = _tipo;
    }
    void setNivel(int _nivel){
        nivel = _nivel;
    }
    void setSueldo(double _sueldo){
        //Declaramos que el sueldo auemnta un 8% cada año
        sueldo = 1.08 * _sueldo;
    }

    void setEstadisticas(int _a, int _b){
        estadisticas[0] = _a;
        estadisticas[1] = _b;
    }
    //Métodos abstractos que definen esta clase como abstracta
    virtual void setEstadisticas(int _nivel)=0;
    virtual void setNivel()=0;
    void virtual mostrar_estadisticas()=0;

 
    //Metodos de la clase

    //Constructor para la plantilla actual
    Colaborador(string _nom,string _tipo,int _niv, double _sueldo){
        
        nombre = _nom;
        tipo = _tipo;
        nivel = _niv;
        sueldo = _sueldo;
        }

    //Constructor por default
    Colaborador(){
        nombre = " ";
        tipo = " ";
        nivel = 0;
        sueldo = 0.0;;
    }
    

};
#endif