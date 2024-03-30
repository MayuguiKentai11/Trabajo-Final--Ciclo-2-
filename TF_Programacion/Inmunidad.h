#pragma once
#include "Entidad.h"
class Inmunidad :public Entidad {
public:
	Inmunidad(Graphics^g,Random^r) {
		this->x = r->Next(50, g->VisibleClipBounds.Width-80);
		this->y = r->Next(50, g->VisibleClipBounds.Height-80);
		this->dx = 0;
		this->dy = 0;
		this->ancho = 20;
		this->alto = 40;
	}
	~Inmunidad(){}
	Rectangle Area() {
		return Rectangle(x, y, ancho, alto);
	}
	void Dibujar(Graphics^g,Bitmap^img) {
		g->DrawImage(img, Area());
	}
};