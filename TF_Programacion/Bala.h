#pragma once
#include "Entidad.h"
class Bala :public Entidad {
public:
	Bala(short x,short y,short dx,short dy) {
		this->x = x;
		this->y = y;
		this->dx = dx;
		this->dy = dy;
		this->ancho = 50;
		this->alto = 50;
	}
	~Bala(){}
	Rectangle Area() {
		return Rectangle(x, y, ancho, alto);
	}
	void Mover(Graphics^g) {
		if (x + dx > 0 && x + dx + ancho <= g->VisibleClipBounds.Width)x += dx;
		if (y + dy > 0 && y + dy + alto <= g->VisibleClipBounds.Height)y += dy;
	}
	void Dibujar(Graphics^ g, Bitmap^ img) {
		g->DrawImage(img, Area());
	}
};