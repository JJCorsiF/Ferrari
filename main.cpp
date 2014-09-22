#include <iostream>
#include "Ferrari.h"

using namespace std;

int main(){
    Ferrari ferrari1, ferrari2("KX 200", 120.0), ferrari3("Phenox 3M", 500.0, true, 6, 5, 120.0);
    ferrari1.acelerar(55.0);
    ferrari1.setMarchaAtiva(2);
    ferrari2.setMarchaAtiva(0);
    ferrari2.setMotorTurboLigado(true);
    ferrari2.acelerar(50.0);
    ferrari3.acelerar(85.0);

    cout << "Ferrari 1 com o modelo " << ferrari1.getCodigoModelo() <<
    "\nVelocidade Atual: " << ferrari1.getVelocidadeAtual() << " Km/h" <<
    "\nRoda com uma velocidade maxima de " << ferrari1.getVelocidadeMax() << " Km/h" <<
    "\nNumero de marchas: " << ferrari1.getNumeroMarchas() <<
    "\nMarcha Ativa: " << ferrari1.getMarchaAtiva() <<
    "\nMotor Turbo: " <<  ferrari1.getMotorTurboLigado() << endl;

    cout << "\nFerrari 2 com o modelo " << ferrari2.getCodigoModelo() <<
    "\nVelocidade Atual: " << ferrari2.getVelocidadeAtual() << " Km/h" <<
    "\nRoda com uma velocidade maxima de " << ferrari2.getVelocidadeMax() << " Km/h" <<
    "\nNumero de marchas: " << ferrari2.getNumeroMarchas() <<
    "\nMarcha Ativa: " << ferrari2.getMarchaAtiva() <<
    "\nMotor Turbo: " <<  ferrari2.getMotorTurboLigado() << endl;

    cout << "\nFerrari 3 com o modelo " << ferrari3.getCodigoModelo() <<
    "\nVelocidade Atual: " << ferrari3.getVelocidadeAtual() << " Km/h" <<
    "\nRoda com uma velocidade maxima de " << ferrari3.getVelocidadeMax() << " Km/h" <<
    "\nNumero de marchas: " << ferrari3.getNumeroMarchas() <<
    "\nMarcha Ativa: " << ferrari3.getMarchaAtiva() <<
    "\nMotor Turbo: " <<  ferrari3.getMotorTurboLigado() << endl;
    return 0;
}
