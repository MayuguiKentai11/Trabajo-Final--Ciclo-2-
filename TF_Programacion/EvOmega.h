#pragma once
#include "Entidad.h"
class EvOmega : public Entidad {
private:
	short vida_EvOmega;
public:
	EvOmega(Graphics^ g, Random^ r){
		this->x = r->Next(50, g->VisibleClipBounds.Width - 90);
		this->y = 40;
		this->dx = 0;
		this->dy = 0;
		this->ancho = 60;
		this->alto = 58;
		this->index_x = 0;
		this->vida_EvOmega = 2;
	}
	~EvOmega() {}
	Rectangle Area() { return Rectangle(x, y, ancho, alto); }
	void Mover(Graphics^ g){
		if (x + dx > 0 && x + dx + ancho <= g->VisibleClipBounds.Width)x += dx;
		if (y + dy > 0 && y + dy + alto <= g->VisibleClipBounds.Height)y += dy;
	}
	void Dibujar(Graphics^ g, Bitmap^ img) { g->DrawImage(img, Area()); }
	void set_Vida(short vida) { this->vida_EvOmega = vida; }
	short get_Vida() { return this->vida_EvOmega; }
};