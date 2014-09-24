#include <iostream>
#include "Ferrari.h"

using namespace std;

int main(){
	int ID = 1;
	int *ptrID;
	
	ptrID = &ID;
	Ferrari ferrari1(*ptrID);
	
	ID = 2;
	ptrID = &ID;
	Ferrari ferrari2(*ptrID, "KX 200", 120.0);
	
	ID = 3;
	ptrID = &ID;
	Ferrari ferrari3(*ptrID, "Phenox 3M", 500.0, true, 6, 5, 120.0);
    
	ferrari1.acelerar(55.0);
    ferrari1.setMarchaAtiva(2);
    ferrari2.setMarchaAtiva(0);
    ferrari2.setMotorTurboLigado(true);
    ferrari2.acelerar(50.0);
    ferrari3.acelerar(85.0);
	
	ferrari1.mostrarDetalhes();
	ferrari1.virarADireita();
	ferrari2.mostrarDetalhes();
	ferrari2.virarADireita();
	ferrari3.mostrarDetalhes();
	ferrari3.virarAEsquerda();
    return 0;
}
