#include "Tempo.h"
using namespace std;

int main()
{
	Tempo t1= Tempo(1,20,50);
	t1.toString();
	Tempo t2= Tempo(1,00,55);
	t1.somar(t2);
	t1.toString();
	
	getchar();
	
	return 0;
}