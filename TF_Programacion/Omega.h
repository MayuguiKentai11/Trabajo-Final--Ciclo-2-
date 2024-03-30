#pragma once
#include "Entidad.h"
class Omega :public Entidad {
private:
	short vida_Omega;
public:
	Omega(short x,short y) {
		this->x = x;
		this->y = y;
		this->dx = 0;
		this->dy = 0;
		this->ancho = 60;
		this->alto = 53;
		this->index_x = 0;
		this->vida_Omega = 1;
	}
	~Omega(){}
	Rectangle Area() {
		return Rectangle(x, y, ancho, alto);
	}
	void Mover(Graphics^g) {
		if (x + dx > 0 && x + dx + ancho <= g->VisibleClipBounds.Width)x += dx;
		if (y + dy > 0 && y + dy + alto <= g->VisibleClipBounds.Height)y += dy;
	}
	void Dibujar(Graphics^g,Bitmap^img) {
		g->DrawImage(img, Area());
	}
	void set_Vida(short vida) {
		this->vida_Omega = vida;
	}
	short get_Vida() {
		return this->vida_Omega;
	}
};