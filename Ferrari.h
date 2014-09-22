#include <string>
using std::string;

#ifndef FERRARI_H_INCLUDED
#define FERRARI_H_INCLUDED

class Ferrari{
public:
    Ferrari();
    Ferrari(string, double);
    Ferrari(string, double, bool, int, int, double);
    string getCodigoModelo();
    double getVelocidadeMax();
    string getMotorTurboLigado();
    int getNumeroMarchas();
    int getMarchaAtiva();
    double getVelocidadeAtual();
    void setMotorTurboLigado(bool);
    void setMarchaAtiva(int);
    void setVelocidadeAtual(double);
    void acelerar();
    void acelerar(double);
    void freiar();
    void freiar(double);
private:
    string codigoModelo;
    double velocidadeMax; //Em Km/h
    string motorTurboLigado;
    int marchaAtiva;
    int numeroMarchas;
    double velocidadeAtual; //Em Km/h
    void setCodigoModelo(string);
    void setVelocidadeMax(double);
    void setNumeroMarchas(int);
};

#endif // FERRARI_H_INCLUDED
