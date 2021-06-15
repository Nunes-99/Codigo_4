#include <iostream>
#include <string>
using namespace std;

class Tempo
{
	public:
		Tempo();
		Tempo(int hora, int minuto, int segundo);
		
		int getHora();
		int getMinuto();
		int getSegundo();

		
		void setHora(int hora);
		void setMinuto(int minuto);
		void setSegundo(int segundo);
		
		void subtrair(Tempo t1);
		void somar(Tempo t1);
		
		void toString();
		void calc(Tempo t1);

		
		
				
	private:		
		int hora;
		int minuto;
		int segundo;

};
