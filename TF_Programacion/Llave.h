#pragma once
#include "Entidad.h"
class Llave :Entidad {
public:
    Llave(Graphics^ g, Random^ r) {
        this->x = r->Next(50, g->VisibleClipBounds.Width);
        this->y = r->Next(50, g->VisibleClipBounds.Height);
        this->dx = 0;
        this->dy = 0;
        this->ancho = 40;
        this->alto = 27;
    }
    ~Llave() {}
    Rectangle Area() {
        return Rectangle(x, y, ancho, alto);
    }
    void Dibujar(Graphics^ g, Bitmap^ img) {
        g->DrawImage(img, Area());
    }
    short get_X() {
        return this->x;
    }
    short get_Y() {
        return this->y;
    }
};