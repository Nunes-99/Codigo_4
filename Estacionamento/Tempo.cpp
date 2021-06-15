#include "Tempo.h"
using namespace std;

Tempo::Tempo(){
	hora=minuto=segundo=0;
}
Tempo::Tempo(int hora, int minuto, int segundo){
	this->hora=hora;
	this->minuto=minuto;
	this->segundo=segundo;
}
int Tempo::getHora(){
	return hora;
}
int Tempo::getMinuto(){
	return minuto;
}
int Tempo::getSegundo(){
	return segundo;
}
void Tempo::setHora(int hora){
	this->hora=hora;
}
void Tempo::setMinuto(int minuto){
	this->minuto=minuto;
}
void Tempo::setSegundo(int segundo){
	this->segundo=segundo;
}
void Tempo::toString(){
	cout<<hora<<":"<<minuto<<":"<<segundo<<endl;
}
void Tempo::subtrair(Tempo t1){
	this->hora=this->hora-t1.hora;
	this->minuto=this->minuto-t1.minuto;
	this->segundo=this->segundo-t1.segundo;
	
	if(this->segundo < 0)
	{
		this->segundo=this->segundo+60;
		this->minuto=this->minuto-1;
	}
	if(this->minuto < 0)
	{
		this->minuto=this->minuto+60;
		this->hora=this->hora-1;
	}	
}
void Tempo::somar(Tempo t1){
	this->hora=this->hora+t1.hora;
	this->minuto=this->minuto+t1.minuto;
	this->segundo=this->segundo+t1.segundo;
	if(this->segundo >= 60)
	{
		this->segundo=this->segundo-60;
		this->minuto=this->minuto+1;
	}
	if(this->minuto >= 60)
	{
		this->minuto=this->minuto-60;
		this->hora=this->hora+1;
	}
}