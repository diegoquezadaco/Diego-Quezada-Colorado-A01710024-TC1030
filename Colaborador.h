#ifndef COLABORADOR_H
#define COLABORADOR_H
#include <iostream>
#include <string>
using namespace std;


class Colaborador {
        
    protected:
    
    string nombre;
    int estadisticas[2];
    int nivel;
    double sueldo;
    int identificador;
        

    public: 

    //getters y setters
    string getNombre(){
        return nombre;
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
    int getIdentificador(){
        return identificador;
    }
    void setNivel(int _nivel){
        nivel = _nivel;
    }
    void setSueldo(double _sueldo){
        //Declaramos que el sueldo auemnta un 8% cada año
        sueldo = 1.08 * _sueldo;
    }
    void setIdentificador(int _identificador){
        identificador = _identificador;
    }
    void setEstadisticas(int _a, int _b){
        estadisticas[0] = _a;
        estadisticas[1] = _b;
    }
    virtual void setEstadisticas(int _nivel){

    }
    virtual void setNivel(){

    }
    void virtual mostrar_estadisticas(){
    }


    //Metodos de la clase

    //Método para generar las estadísticas de los colaboradores 
    virtual void genera_estadisticas(){
    }
    //Constructor para la plantilla actual
    Colaborador(string _nom,int _niv, double _sueldo, int _id){
        
        nombre = _nom;
        nivel = _niv;
        sueldo = _sueldo;
        identificador = _id;
        }

    //Constructor por default
    Colaborador(){
        nombre = " ";
        nivel = 0;
        sueldo = 0.0;
        identificador = 0;
    }
    

};
#endif