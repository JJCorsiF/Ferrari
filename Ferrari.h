#include <string>
using std::string;

#ifndef FERRARI_H_INCLUDED
#define FERRARI_H_INCLUDED

class Ferrari{
public:
    Ferrari(int = 1);
    Ferrari(int, string, double = 80.0);
    Ferrari(int, string, double, bool, int = 4, int = 0, double = 0.0);
	~Ferrari();
	int getID() const;
    string getCodigoModelo() const;
    double getVelocidadeMax() const;
    string getMotorTurboLigado() const;
    int getNumeroMarchas() const;
    int getMarchaAtiva() const;
    double getVelocidadeAtual() const;
    void setMotorTurboLigado(bool);
    void setMarchaAtiva(int);
    void setVelocidadeAtual(double);
    void acelerar();
    void acelerar(double);
    void freiar();
    void freiar(double);
	void mostrarDetalhes() const;
	void virarAEsquerda() const;
	void virarADireita() const;
private:
	int idFerrari;
    string codigoModelo;
    double velocidadeMax; //Em Km/h
    string motorTurboLigado;
    int marchaAtiva;
    int numeroMarchas;
    double velocidadeAtual; //Em Km/h
	void setID(int);
    void setCodigoModelo(string);
    void setVelocidadeMax(double);
    void setNumeroMarchas(int);
};

#endif // FERRARI_H_INCLUDED
