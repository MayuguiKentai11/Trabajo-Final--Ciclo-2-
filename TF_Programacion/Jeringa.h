#pragma once
#include "Entidad.h"
class Jeringa:public Entidad {
public:
	Jeringa(Graphics^g,Random^r) {
		this->x = r->Next(101, g->VisibleClipBounds.Width-101);
		this->y = r->Next(101, g->VisibleClipBounds.Height-101);
		this->dx = 0;
		this->dy = 0;
		this->ancho = 40;
		this->alto = 40;
	}
	~Jeringa() {}
	Rectangle Area() {
		return Rectangle(x, y, ancho, alto);
	}
	void Dibujar(Graphics^g,Bitmap^img) {
		g->DrawImage(img, Area());
	}
};
