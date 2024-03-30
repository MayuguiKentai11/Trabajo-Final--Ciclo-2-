#pragma once
#include <iostream>
using namespace std;
using namespace System;
using namespace System::Drawing;
class Entidad {
protected:
	short x;
	short y;
	short ancho;
	short alto;
	short index_x;
	short dx;
	short dy;
	bool visible;
public:
	Entidad(){}
	~Entidad(){}
	Rectangle NextArea() {
		return Rectangle(x + dx, y + dy, ancho, alto);
	}
	//Setters and Getters
	void set_X(short x) {
		this->x = x;
	}
	void set_Y(short y) {
		this->y = y;
	}
	void set_Dx(short dx) {
		this->dx = dx;
	}
	void set_Dy(short dy) {
		this->dy = dy;
	}
	short get_X() {
		return this->x;
	}
	short get_Y() {
		return this->y;
	}
	short get_DX() {
		return this->dx;
	}
	short get_Dy() {
		return this->dy;
	}
	short get_Ancho() {
		return this->ancho;
	}
	short get_Alto() {
		return this->alto;
	}
	void set_Visible(bool visible) {
		this->visible = visible;
	}
	bool get_Visible() {
		return this->visible;
	}
};