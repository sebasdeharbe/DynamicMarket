#ifndef FUNCIONFECHA_H
#define FUNCIONFECHA_H
#include <ctime>
#include <sstream>
#include <string>
using namespace std;

string ObtenerFechayHora(){
	time_t tiempo = time(NULL);
	tm* timePtr = localtime(&tiempo);
	
	stringstream ss_anio;
	ss_anio << timePtr->tm_year+1900;
	string Anio = ss_anio.str();
	
	stringstream ss_mes;
	ss_mes << timePtr->tm_mon+1;
	string Mes = ss_mes.str();
	if(atoi(Mes.c_str()) < 10)
		Mes = "0"+Mes;
	
	stringstream ss_dia;
	ss_dia<< timePtr->tm_mday;
	string Dia = ss_dia.str();
	if(atoi(Dia.c_str()) < 10)
		Dia = "0"+Dia;
	
	stringstream ss_hora;
	ss_hora << timePtr->tm_hour;
	string Hora = ss_hora.str();
	if(atoi(Hora.c_str()) < 10)
		Hora = "0"+Hora;
	
	stringstream ss_min;
	ss_min << timePtr->tm_min;
	string Min = ss_min.str();
	if(atoi(Min.c_str()) < 10)
		Min = "0"+Min;
	
	stringstream ss_seg;
	ss_seg << timePtr->tm_sec;
	string Seg = ss_seg.str();
	if(atoi(Seg.c_str()) < 10)
		Seg = "0"+Seg;
	
	string FechaHora = Anio+"/"+Mes+"/"+Dia+" - "+Hora+":"+Min+":"+Seg;
	
	return FechaHora;
};

#endif
