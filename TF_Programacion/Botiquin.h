#pragma once
#include "Entidad.h"
class Botiquin :public Entidad {
public:
	Botiquin(Graphics^g,Random^r) {
		this->x = r->Next(70, g->VisibleClipBounds.Width-70);
		this->y = r->Next(70, g->VisibleClipBounds.Height-70);
		this->dx = 0;
		this->dy = 0;
		this->ancho = 30;
		this->alto = 32;
	}
	~Botiquin(){}
	Rectangle Area() {
		return Rectangle(x, y, ancho, alto);
	}
	void Dibujar(Graphics^ g, Bitmap^ img) {
		g->DrawImage(img, Area());
	}
};