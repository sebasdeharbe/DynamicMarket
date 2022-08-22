#include "VentanaFechas.h"
#include <wx/calctrl.h>
#include "string_conv.h"
#include <string>
#include <wx/msgdlg.h>
#include <cstdlib>
using namespace std;

VentanaFechas::VentanaFechas(wxWindow *parent, Registro *lista) : wx_VFechas(parent), p_Venta(lista) {
	
}

VentanaFechas::~VentanaFechas() {
	
}

void VentanaFechas::ClickCancelarFecha( wxCommandEvent& event )  {
	EndModal(0);
}

void VentanaFechas::ClickAceptarFecha( wxCommandEvent& event )  {
	string salidaerrores;
	string erroresanios;
	string diai=wx_to_std(m_DiaInicio->GetValue());
	if(atoi(diai.c_str()) < 10 and diai.size()==1){
		diai = "0"+diai;
	}
	if(diai == "00"){
		diai="01";
		salidaerrores+="Se corrigió el día inicial\n";
	}
	if(atoi(diai.c_str())>31){
		diai=31;
		salidaerrores+="Se corrigió el día inicial\n"; 
	}

	string mesi=wx_to_std(m_MesInicio->GetValue());
	if(atoi(mesi.c_str()) < 10 and mesi.size()==1){
		mesi = "0"+mesi;
	}
	if(mesi == "00"){
		mesi="01";
		salidaerrores+="Se corrigió el mes inicial\n";
	}
	if(atoi(mesi.c_str())>12){
		mesi=12;
		salidaerrores+="Se corrigió el mes inicial\n";
	}

	string anioi=wx_to_std(m_AnioInicio->GetValue());
	if(atoi(anioi.c_str())<2000 or atoi(anioi.c_str())>2100){
		erroresanios+="Ingrese un año válido para la fecha de inicio\n"; 
	}
	
	string diaf=wx_to_std(m_DiaFin->GetValue());
	if(atoi(diaf.c_str()) < 10 and diaf.size()==1){
		diaf = "0"+diaf;
	}
	if(diaf == "00"){
		diaf="01";
		salidaerrores+="Se corrigió el día final\n"; 
	}
	if(atoi(diaf.c_str())>31){
		diaf=31;
		salidaerrores+="Se corrigió el día final\n"; 
	}
	
	string mesf=wx_to_std(m_MesFin->GetValue());
	if(atoi(mesf.c_str()) < 10 and mesf.size()==1){
		mesf= "0"+mesf;
	}
	if(mesf == "00"){
		mesf="01";
		salidaerrores+="Se corrigió el mes final\n";
	}
	if(atoi(mesf.c_str())>12){
		mesf=12;
		salidaerrores+="Se corrigió el mes final\n";
	}
	
	string aniof=wx_to_std(m_AnioFin->GetValue());
	if(atoi(aniof.c_str())<2000 or atoi(aniof.c_str())>2500){
		erroresanios+="Ingrese un año válido para la fecha final\n"; 
	}
	
	string fecha1=anioi+"/"+mesi+"/"+diai+" - 00:00:00";
	string fecha2=aniof+"/"+mesf+"/"+diaf+" - 23:59:59";
	
	if(erroresanios.size()){
		wxMessageBox(std_to_wx(erroresanios), "Error!");
	}
	else{
		if(salidaerrores.size()){
			wxMessageBox(std_to_wx(salidaerrores), "Atención!");
			if(fecha1<=fecha2){
				if(p_Venta->CargarFechas(fecha1, fecha2)){
					EndModal(1);
				}
				else{
					wxMessageBox(std_to_wx("No existen registros")); 
				}
			}
			else{
				wxMessageBox(std_to_wx("Fecha de inicio posterior a fecha final"),"Error!");
			}
			
		}
		else{
			if(fecha1<=fecha2){
				if(p_Venta->CargarFechas(fecha1, fecha2)){
					EndModal(1);
				}
				else{
					wxMessageBox(std_to_wx("No existen registros")); 
				}
			}
			else{
				wxMessageBox(std_to_wx("Fecha de inicio posterior a fecha final"),"Error!");
			}
			
		}
	}
}

