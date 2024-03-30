#pragma once
#include "Entidad.h"
class EvOmicron : public Entidad {
private:
	short vida_EvOmicron;
public:
	EvOmicron(Graphics^ g, Random^ r){
		this->x = 60;
		this->y = r->Next(50, g->VisibleClipBounds.Height - 90);
		this->dx = 0;
		this->dy = 0;
		this->ancho = 100;
		this->alto = 97;
		this->index_x = 0;
		this->vida_EvOmicron = 5;
	}
	~EvOmicron() {}
	Rectangle Area() { return Rectangle(x, y, ancho, alto); }
	void Mover(Graphics^ g){
		if (x + dx > 0 && x + dx + ancho <= g->VisibleClipBounds.Width)x += dx;
		if (y + dy > 0 && y + dy + alto <= g->VisibleClipBounds.Height)y += dy;
	}
	void Dibujar(Graphics^ g, Bitmap^ img) { g->DrawImage(img, Area()); }
	void set_Vida(short vida) { this->vida_EvOmicron = vida; }
	short get_Vida() { return this->vida_EvOmicron; }
};