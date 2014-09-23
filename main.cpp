#include <iostream>
#include "Ferrari.h"

using namespace std;

int main(){
    Ferrari ferrari1(1);
	Ferrari ferrari2(2, "KX 200", 120.0);
	Ferrari ferrari3(3, "Phenox 3M", 500.0, true, 6, 5, 120.0);
    ferrari1.acelerar(55.0);
    ferrari1.setMarchaAtiva(2);
    ferrari2.setMarchaAtiva(0);
    ferrari2.setMotorTurboLigado(true);
    ferrari2.acelerar(50.0);
    ferrari3.acelerar(85.0);
	
	ferrari1.mostrarDetalhes();
	ferrari2.mostrarDetalhes();
	ferrari3.mostrarDetalhes();
    return 0;
}
