#include <iostream>
#include "Ferrari.h"

using namespace std;

Ferrari::Ferrari(int id){
	setID(id);
    setCodigoModelo("0");
    setVelocidadeMax(100.0);
    setMotorTurboLigado(false);
    setNumeroMarchas(4);
    setMarchaAtiva(0);
    setVelocidadeAtual(0.0);
}

Ferrari::Ferrari(int id, string codModelo, double velMax){
	setID(id);
    setCodigoModelo(codModelo);
    setVelocidadeMax(velMax);
    setMotorTurboLigado(false);
    setNumeroMarchas(4);
    setMarchaAtiva(0);
    setVelocidadeAtual(0.0);
}

Ferrari::Ferrari(int id, string codModelo, double velMax, bool turbo, int numMarchas, int marcha, double velAtual){
    setID(id);
	setCodigoModelo(codModelo);
    setVelocidadeMax(velMax);
    setMotorTurboLigado(turbo);
    setNumeroMarchas(numMarchas);
    setMarchaAtiva(marcha);
    setVelocidadeAtual(velAtual);
}

Ferrari::~Ferrari(){
	
}

int Ferrari::getID() const {
	return idFerrari;
}

string Ferrari::getCodigoModelo() const{
    return codigoModelo;
}

double Ferrari::getVelocidadeMax() const {
    return velocidadeMax;
}

string Ferrari::getMotorTurboLigado() const {
    return motorTurboLigado;
}

int Ferrari::getNumeroMarchas() const {
    return numeroMarchas;
}

int Ferrari::getMarchaAtiva() const {
    return marchaAtiva;
}

double Ferrari::getVelocidadeAtual() const {
    return velocidadeAtual;
}

void Ferrari::setID(int id){
	idFerrari = id;
}

void Ferrari::setCodigoModelo(string codModelo){
    codigoModelo = codModelo;
}

void Ferrari::setVelocidadeMax(double velMax){
    velocidadeMax = velMax;
}

void Ferrari::setMotorTurboLigado(bool turbo){
    if(turbo){
        motorTurboLigado = "Ligado";
    }
    else{
        motorTurboLigado = "Desligado";
    }
}

void Ferrari::setMarchaAtiva(int marcha){
    if(marcha >= 0 && marcha <= numeroMarchas){
        marchaAtiva = marcha;
    }
    else{
        marchaAtiva = numeroMarchas;
    }
}

void Ferrari::setNumeroMarchas(int marchas){
    numeroMarchas = marchas;
}

void Ferrari::setVelocidadeAtual(double velAtual){
    if(velAtual >= 0 && velAtual < velocidadeMax){
        velocidadeAtual = velAtual;
    }
    else{
        velocidadeAtual = velocidadeMax;
    }
}

void Ferrari::acelerar(){
    setVelocidadeAtual(velocidadeAtual + 10);
}

void Ferrari::acelerar(double aceleracao){
    setVelocidadeAtual(velocidadeAtual + aceleracao);
}

void Ferrari::freiar() {
    setVelocidadeAtual(velocidadeAtual - 10);
}

void Ferrari::freiar(double desaceleracao){
    setVelocidadeAtual(velocidadeAtual - desaceleracao);
}

void Ferrari::mostrarDetalhes() const {
	cout << "Ferrari " << this->getID() << ", modelo " << this->getCodigoModelo() <<
    "\nVelocidade atual: " << this->getVelocidadeAtual() << " Km/h" <<
    "\nRoda com uma velocidade maxima de " << this->getVelocidadeMax() << " Km/h" <<
    "\nNumero de marchas: " << this->getNumeroMarchas() <<
    "\nMarcha ativa: " << this->getMarchaAtiva() <<
    "\nMotor Turbo: " << this->getMotorTurboLigado() <<
	"\n" << endl;
}

void Ferrari::virarAEsquerda() const {
	cout << "A Ferrari " << this->getID() << " virou a esquerda.\n" << endl;
}

void Ferrari::virarADireita() const {
	cout << "A Ferrari " << this->getID() << " virou a direita.\n" << endl;
}