#pragma once
#include "Entidad.h"
enum MovimientoJugador{Abajo1,Izquierda1,Derecha1,Arriba1};
class Jugador :public Entidad{
private:
	MovimientoJugador accion1;
	short vida_jugador;
	bool sin_colision;
	short pildoras_recolectadas;
	short llaves_recolectadas;
	short cantidad_balas;
public:
	Jugador(short x,short y) {
		this->x = x;
		this->y = y;
		this->dx = 0;
		this->dy = 0;
		this->ancho = 300/6;
		this->alto = 231/4;
		this->index_x = 0;
		this->accion1 = Abajo1;
		this->vida_jugador = 3;
		this->sin_colision = false;
		this->pildoras_recolectadas = 0;
		this->llaves_recolectadas = 0;
		this->cantidad_balas = 30;
	}
	~Jugador(){}
	Rectangle Area() {
		return Rectangle(x, y, ancho, alto);
	}
	void Mover(Graphics^g) {
		if (x + dx > 15 && x + dx + ancho <= g->VisibleClipBounds.Width-15)x += dx;
		if (y + dy > 0 && y + dy + alto <= g->VisibleClipBounds.Height)y += dy;
	}
	void Dibujar(Graphics^g,Bitmap^img) {
		Rectangle Corte = Rectangle(index_x * ancho, accion1 * alto, ancho, alto); //una porcion
		g->DrawImage(img, Area(), Corte, GraphicsUnit::Pixel);
		if (dx != 0 || dy!=0) { //Si hay velocidad hay animacion
			index_x = (index_x + 1) % 6;//Un limite para que solamente se sume hasta el 3 y luego regrese a 0
		}
	}
	//Setters and Getters
	void set_Accion(MovimientoJugador accion1) {
		this->accion1 = accion1;
	}
	void set_Vida(short vida) {
		this->vida_jugador = vida;
	}
	short get_Vida() {
		return this->vida_jugador;
	}
	void set_SinColision(bool sincolision) {
		this->sin_colision = sincolision;
	}
	bool get_SinColision() {
		return this->sin_colision;
	}
	void set_PildorasRecolectadas(short pildoras) {
		this->pildoras_recolectadas = pildoras;
	}
	short get_PildorasRecolectadas() {
		return this->pildoras_recolectadas;
	}
	void set_LlavesRecolectadas(short llaves) {
		this->llaves_recolectadas = llaves;
	}
	short get_LlavesRecolectadas() {
		return this->llaves_recolectadas;
	}
	void set_CantidadBalas(short balas) {
		this->cantidad_balas = balas;
	}
	short get_CantidadBalas() {
		return this->cantidad_balas;
	}
	MovimientoJugador get_Accion() {
		return this->accion1;
	}
};