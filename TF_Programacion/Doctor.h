#pragma once
#include "Entidad.h"
enum MovimientoDoctor { Abajo2, Izquierda2, Derecha2, Arriba2 };
class Doctor :public Entidad {
private:
    MovimientoDoctor accion2;
    bool pararse;
public:
    Doctor(short x, short y) {
        this->x = x;
        this->y = y;
        this->dx = 0;
        this->dy = 0;
        this->ancho = 120/3;
        this->alto = 153/4;
        this->index_x = 0;
        this->accion2 = Abajo2;
        pararse = false;
    }
    ~Doctor() {}
    Rectangle Area() {
        return Rectangle(x, y, ancho, alto);
    }
    void set_Accion(MovimientoDoctor accion2) {
        this->accion2 = accion2;
    }
    void set_Pararse(bool pararse) {
        this->pararse = pararse;
    }
    void Mover(Graphics^ g)
    {
        if (x + dx > 0 && x + dx + ancho <= g->VisibleClipBounds.Width)x += dx;
        if (y + dy > 0 && y + dy + alto <= g->VisibleClipBounds.Height)y += dy;
    }
    void Dibujar(Graphics^ g, Bitmap^ img)
    {
        Rectangle Corte = Rectangle(index_x * ancho, accion2 * alto, ancho, alto); //una porcion
        g->DrawImage(img, Area(), Corte, GraphicsUnit::Pixel);
        if (pararse == false) {
            if (dy != 0) {
                index_x = (index_x + 1) % 3;
            }
        }
    }
};