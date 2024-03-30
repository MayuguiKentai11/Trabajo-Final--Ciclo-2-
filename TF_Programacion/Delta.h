#pragma once
#include "Entidad.h"
enum Cambios{Reacciones};
class Delta :public Entidad {
private:
	Cambios caras;
	short vida_Delta;
public:
	Delta(short x,short y) {
		this->x = x;
		this->y = y;
		this->dx = 0;
		this->dy = 0;
		this->index_x = 0;
		this->ancho = 200/4;
		this->alto = 55;
		this->caras = Reacciones;
		this->vida_Delta = 2;
	}
	~Delta(){}
	Rectangle Area() {
		return Rectangle(x, y, ancho, alto);
	}
	void Mover(Graphics^g) {
		if (x + dx > 0 && x + dx + ancho <= g->VisibleClipBounds.Width)x += dx;
		if (y + dy > 0 && y + dy + alto <= g->VisibleClipBounds.Height)y += dy;
	}
	void Dibujar(Graphics^ g, Bitmap^ img) {
		Rectangle Corte = Rectangle(index_x * ancho, caras * alto, ancho, alto); //una porcion
		g->DrawImage(img, Area(), Corte, GraphicsUnit::Pixel);
		if (dx != 0) { //Si hay velocidad hay animacion
			index_x = (index_x + 1) % 4;//Un limite para que solamente se sume hasta el 3 y luego regrese a 0	
		}
	}
	void set_Vida(short vida) {
		this->vida_Delta = vida;
	}
	short get_Vida() {
		return this->vida_Delta;
	}
};