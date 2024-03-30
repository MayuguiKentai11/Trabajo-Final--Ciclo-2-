#pragma once
#include "Entidad.h"
enum MovimientoCovid{Caras};
class Omicron :public Entidad {
private:
	MovimientoCovid acciones;
	bool colisiona;
	short vida_Omicron;
public:
	Omicron(short x,short y) {
		this->x = x;
		this->y = y;
		this->dx = 0; //La movilidad de este virus va en el controller
		this->dy = 0;
		this->ancho = 150/3;
		this->alto = 47;
		this->index_x = 0;
		this->acciones = Caras;
		this->colisiona = false;
		this->vida_Omicron = 3;
	}
	~Omicron(){}
	Rectangle Area() {
		return Rectangle(x, y, ancho, alto);
	}
	void Mover(Graphics^g) {
		if (x + dx > 0 && x + dx + ancho <= g->VisibleClipBounds.Width)x += dx;
		if (y + dy > 0 && y + dy + alto <= g->VisibleClipBounds.Height)y += dy;
	}
	void Dibujar(Graphics^g,Bitmap^img) {
		Rectangle Corte = Rectangle(index_x * ancho, acciones * alto, ancho, alto); //una porcion
		g->DrawImage(img, Area(), Corte, GraphicsUnit::Pixel);
		if (dx != 0 && colisiona==true) { //Si hay velocidad hay animacion
			index_x = (index_x + 1) % 3;//Un limite para que solamente se sume hasta el 3 y luego regrese a 0
			this->colisiona = false;
		}
	}
	void set_Colisiona(bool colisiona) {
		this->colisiona = colisiona;
	}
	void set_Vida(short vida) {
		this->vida_Omicron = vida;
	}
	short get_Vida() {
		return this->vida_Omicron;
	}
};