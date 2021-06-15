#include "Tempo.h"
#include "Estacionamento.h"
#include <iomanip>

using namespace std;
//ESTACIONAMENTO
//CONSTRUCTOR
Estacionamento::Estacionamento (){
	placa = modelo = "vazio";
}
Estacionamento::Estacionamento(string placa, string modelo){
	this->placa=placa;
	this->modelo=modelo;
}

//SETTERS
void Estacionamento::setplaca(string placa){
	this->placa=placa; 
}
void Estacionamento::setmodelo(string modelo){
	this->modelo=modelo; 
}

//GETTERS	
string Estacionamento::getplaca(){
	return placa;
}
string Estacionamento::getmodelo(){
	return modelo;
}

void Estacionamento::toString(){
	cout<<"A placa do carro e "<<placa<<" e o modelo e "<<modelo<<endl;
}




//TEMPO
//CONSTRUCTOR
Tempo::Tempo(){
	hora=minuto=segundo=0;
}
Tempo::Tempo(int hora, int minuto, int segundo){
	this->hora=hora;
	this->minuto=minuto;
	this->segundo=segundo;
}



//GETTERS
int Tempo::getHora(){
	return hora;
}
int Tempo::getMinuto(){
	return minuto;
}
int Tempo::getSegundo(){
	return segundo;
}


//SETTERS
void Tempo::setHora(int hora){
	this->hora=hora;
}
void Tempo::setMinuto(int minuto){
	this->minuto=minuto;
}
void Tempo::setSegundo(int segundo){
	this->segundo=segundo;
}

void Tempo::calc(Tempo t1){
	float calc = 0;
	float hora = 0;
	float minuto = 0;
	float segundo = 0;
	
	
	hora= t1.hora * 1.5;
	
	minuto = (t1.minuto * 1.5) / 60;
	
	segundo = (t1.minuto * 1.5) / 3600;

	
	calc = hora + minuto + segundo;
	
	cout<<"o valor a ser pago e: R$ "<<setprecision(4)<<calc<<endl;
	
	
}

void Tempo::toString(){
	cout<<"O tempo que o carro ficou no estacionamento foi de "<<hora<<"horas e "<<minuto<<"minutos e "<<segundo<<"segundos"<<endl;
}



