#include "Tempo.h"
#include "Estacionamento.h"


using namespace std;

int main()
{
	Estacionamento c1 = Estacionamento ("ABC1234","Corolla");
	c1.toString();
	
	Tempo t1= Tempo(4,30,55);
	t1.toString();
	
	t1.calc(t1);
	

	getchar();
	
	return 0;
}