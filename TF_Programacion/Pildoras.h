#pragma once
#include "Entidad.h"
class Pildoras:public Entidad {
private:
	short escoger_imagen;
public:
	Pildoras(Graphics^g,Random^r,short aux) {
		this->x = r->Next(50, g->VisibleClipBounds.Width);
		this->y = r->Next(50, g->VisibleClipBounds.Height);
		this->dx = 0;
		this->dy = 0;
		this->ancho = 20;
		this->alto = 28;
		this->escoger_imagen = aux;
	}
	~Pildoras(){}
	Rectangle Area() {
		return Rectangle(x, y, ancho, alto);
	}
	void Dibujar(Graphics^g,Bitmap^img1,Bitmap^img2,Bitmap^img3,Bitmap^img4) {
		switch (escoger_imagen){
		case 1:g->DrawImage(img1, Area()); break;
		case 2:g->DrawImage(img2, Area()); break;
		case 3:g->DrawImage(img3, Area()); break;
		case 4:g->DrawImage(img4, Area()); break;
		default:
			break;
		}
	}
	
};