#include "Ferrari.h"

using namespace std;

Ferrari::Ferrari(){
    setCodigoModelo("0");
    setVelocidadeMax(100.0);
    setMotorTurboLigado(false);
    setNumeroMarchas(4);
    setMarchaAtiva(0);
    setVelocidadeAtual(0.0);
}

Ferrari::Ferrari(string codModelo, double velMax){
    setCodigoModelo(codModelo);
    setVelocidadeMax(velMax);
    setMotorTurboLigado(false);
    setNumeroMarchas(4);
    setMarchaAtiva(0);
    setVelocidadeAtual(0.0);
}

Ferrari::Ferrari(string codModelo, double velMax, bool turbo, int numMarchas, int marcha, double velAtual){
    setCodigoModelo(codModelo);
    setVelocidadeMax(velMax);
    setMotorTurboLigado(turbo);
    setNumeroMarchas(numMarchas);
    setMarchaAtiva(marcha);
    setVelocidadeAtual(velAtual);
}

string Ferrari::getCodigoModelo(){
    return codigoModelo;
}

double Ferrari::getVelocidadeMax(){
    return velocidadeMax;
}

string Ferrari::getMotorTurboLigado(){
    return motorTurboLigado;
}

int Ferrari::getNumeroMarchas(){
    return numeroMarchas;
}

int Ferrari::getMarchaAtiva(){
    return marchaAtiva;
}

double Ferrari::getVelocidadeAtual(){
    return velocidadeAtual;
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
    if(marcha > 0 && marcha <= numeroMarchas){
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
    if(velAtual < velocidadeMax){
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

void Ferrari::freiar(){
    setVelocidadeAtual(velocidadeAtual - 10);
}

void Ferrari::freiar(double desaceleracao){
    setVelocidadeAtual(velocidadeAtual - desaceleracao);
}
