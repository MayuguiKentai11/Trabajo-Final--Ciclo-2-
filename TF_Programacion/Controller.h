#pragma once

#include <iostream>
#include "Clases.h"
#include <vector>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

class Controller {
private:
	//Vector de Objetos
	vector<Bala*>vector_Bala;
	vector<Pildoras*>vector_Pildoras;
	vector<Botiquin*>vector_Botiquin;
	vector<Jeringa*>vector_Jeringa;
	vector<Inmunidad*>vector_Inmunidad;
	//Vector de Virus
	vector<Omicron*>vector_Omicron;
	vector<Delta*>vector_Delta;
	vector<Omega*>vector_Omega;
	Jugador* Player;
	bool aux;
	bool fin;
	//Colisiones con Casas u Obstaculos
	bool colision1;
	bool colision2;
	bool colision3;
	bool colision4;
	bool colision5;
	short pastillas_aparecidas;

public:
	Controller(short x,short y) 
	{
		Player = new Jugador(x,y);
		aux = false;
		colision1 = false;
		colision2 = false;
		colision3 = false;
		colision4 = false;
		colision5 = false;
		fin = false;
		pastillas_aparecidas = 0;
	}

	~Controller()
	{
		delete Player;
	}
	
	//Setter and Getter
	void set_Aux(bool aux) {
		this->aux = aux;
	}
	
	bool get_Aux() {
		return this->aux;
	}
	
	//Agregar Virus
	
	void AgregarOmicron(Graphics^g,Random^r) {
		vector_Omicron.push_back(new Omicron(250,40));
	}
	
	void AgregarDelta(Graphics^g,Random^r) {
		vector_Delta.push_back(new Delta(r->Next(50, g->VisibleClipBounds.Width - 50), r->Next(50, g->VisibleClipBounds.Height - 50)));
	}
	
	void AgregarOmega(Graphics^g,Random^r) {
		vector_Omega.push_back(new Omega(r->Next(50, g->VisibleClipBounds.Width - 90), r->Next(50, g->VisibleClipBounds.Height - 90)));
	}
	
	//Pausa
	void MostrarPausa(Graphics^g) {
		if (aux == true) {
			Font^ f = gcnew Font("Arial", 60);
			SolidBrush^ s = gcnew SolidBrush(Color::Black);
			g->DrawString("PAUSA", f, s, 250, 250);
		}
	}
	
	//Movimiento Virus Omicron
	void MoverOmicron() {
		short velocidad = 3; // Declaras la velocidad
		if (!vector_Omicron.empty()) { // Verificar si hay enemigo 
			for (short i = 0; i < vector_Omicron.size(); i++) {
				//Verificacion Posicion X
				if (vector_Omicron.at(i)->get_X() <= Player->get_X())
					vector_Omicron.at(i)->set_Dx(velocidad);

				else
					vector_Omicron.at(i)->set_Dx(-velocidad);
				
				//Verificacion Posicion Y
				if (vector_Omicron.at(i)->get_Y() <= Player->get_Y()) 
					vector_Omicron.at(i)->set_Dy(velocidad);
				
				else 
					vector_Omicron.at(i)->set_Dy(-velocidad);
				
			}
		}
	}
	
	void FuncionalidadOmicron(Graphics^g,Bitmap^img) {
		if (!vector_Omicron.empty()) {
			for (Omicron* c : vector_Omicron) {
				c->Mover(g);
				c->Dibujar(g, img);
			}
		}
	}
	//Movimiento Virus Delta
	void MoverDelta() {
		short velocidad = 6;
		if (!vector_Delta.empty()) {
			for (short i = 0; i < vector_Delta.size(); i++) {
				//Verificacion Posicion X
				if (vector_Delta.at(i)->get_X() <= Player->get_X()) {
					vector_Delta.at(i)->set_Dx(velocidad);
				}
				else {
					vector_Delta.at(i)->set_Dx(-velocidad);
				}
				//Verificacion Posicion Y
				if (vector_Delta.at(i)->get_Y() <= Player->get_Y()) {
					vector_Delta.at(i)->set_Dy(velocidad);
				}
				else {
					vector_Delta.at(i)->set_Dy(-velocidad);
				}
			}
		}
	}
	
	void FuncionalidadDelta(Graphics^ g,Bitmap^img) {
		if (!vector_Delta.empty()) {
			for (Delta* d : vector_Delta) {
				d->Mover(g);
				d->Dibujar(g, img);
			}
		}
	}
	//Movimiento Virus Omega
	
	void MoverOmega() {
		short velocidad = 6;
		if (!vector_Omega.empty()) {
			for (short i = 0; i < vector_Omega.size(); i++) {
				//Verificacion Posicion X
				if (vector_Omega.at(i)->get_X() <= Player->get_X()) {
					vector_Omega.at(i)->set_Dx(velocidad);
				}
				else {
					vector_Omega.at(i)->set_Dx(-velocidad);
				}
				//Verificacion Posicion Y
				if (vector_Omega.at(i)->get_Y() <= Player->get_Y()) {
					vector_Omega.at(i)->set_Dy(velocidad);
				}
				else {
					vector_Omega.at(i)->set_Dy(-velocidad);
				}
			}
		}
	}
	
	void FuncionalidadOmega(Graphics^ g,Bitmap^img) {
		if (!vector_Omega.empty()) {
			for (Omega* o : vector_Omega) {
				o->Mover(g);
				o->Dibujar(g, img);
			}
		}
	}
	
	// Agregar Objetos
	void AgregarBotiquin(Graphics^g,Random^r) {
		for (short i = 0; i < 1; i++) {
			Botiquin* nuevo = new Botiquin(g, r);
			if (!nuevo->Area().IntersectsWith(Perimetro1()) && !nuevo->Area().IntersectsWith(Perimetro2()) &&
				!nuevo->Area().IntersectsWith(Perimetro3()) && !nuevo->Area().IntersectsWith(Perimetro4()) &&
				!nuevo->Area().IntersectsWith(Perimetro5())) {
				vector_Botiquin.push_back(nuevo);
			}
			else {
				delete nuevo;
				i--;
			}
		}
	}

	//Importante
	void AgregarPildoras(Graphics^g,Random^r,short aux) {
		if (pastillas_aparecidas < 10) {
			for (short i = 0; i < 1; i++) {
				Pildoras* nuevo = new Pildoras(g, r, aux);
				if (!nuevo->Area().IntersectsWith(Perimetro1()) && !nuevo->Area().IntersectsWith(Perimetro2()) &&
					!nuevo->Area().IntersectsWith(Perimetro3()) && !nuevo->Area().IntersectsWith(Perimetro4()) &&
					!nuevo->Area().IntersectsWith(Perimetro5()) && nuevo->get_X() > 15 && nuevo->get_X() <= g
					->VisibleClipBounds.Width - 40 && nuevo->get_Y() <= g->VisibleClipBounds.Height - 15) {
					vector_Pildoras.push_back(nuevo);
					this->pastillas_aparecidas++;
				}
				else {
					delete nuevo;
					i--;
				}
			}
		}
	}

	
	void AgregarJeringas(Graphics^ g, Random^ r) {
		for (short i = 0; i < 1; i++) {
			Jeringa* nuevo = new Jeringa(g, r);
			if (!nuevo->Area().IntersectsWith(Perimetro1()) && !nuevo->Area().IntersectsWith(Perimetro2()) &&
				!nuevo->Area().IntersectsWith(Perimetro3()) && !nuevo->Area().IntersectsWith(Perimetro4()) &&
				!nuevo->Area().IntersectsWith(Perimetro5())) {
				vector_Jeringa.push_back(nuevo);
			}
			else {
				delete nuevo;
				i--;
			}
		}
	}
	
	void AgregarInmunidad(Graphics^g,Random^r) {
		for (short i = 0; i < 1; i++) {
			Inmunidad* nuevo = new Inmunidad(g, r);
			if (!nuevo->Area().IntersectsWith(Perimetro1()) && !nuevo->Area().IntersectsWith(Perimetro2()) &&
				!nuevo->Area().IntersectsWith(Perimetro3()) && !nuevo->Area().IntersectsWith(Perimetro4()) &&
				!nuevo->Area().IntersectsWith(Perimetro5())) {
				vector_Inmunidad.push_back(nuevo);
			}
			else {
				delete nuevo;
				i--;
			}
		}
	}


	
	void AgregarBala(Graphics^g,Keys k) {
		short velocidad_bala = 25;
		if (Player->get_CantidadBalas() != 0) {
			if (k == Keys::X) 
			{
				short aux1 = Player->get_CantidadBalas() - 1;

				Player->set_CantidadBalas(aux1);

				if (Player->get_Accion() == Arriba1) 
					vector_Bala.push_back(new Bala(Player->get_X(), Player->get_Y() - 1, 0, -velocidad_bala));
				
				if (Player->get_Accion() == Abajo1) 
					vector_Bala.push_back(new Bala(Player->get_X(), Player->get_Y() + 1, 0, velocidad_bala));
				
				if (Player->get_Accion() == Izquierda1) 
					vector_Bala.push_back(new Bala(Player->get_X() - 1, Player->get_Y(), -velocidad_bala, 0));
				
				if (Player->get_Accion() == Derecha1) 
					vector_Bala.push_back(new Bala(Player->get_X() + 1, Player->get_Y(), velocidad_bala, 0));
				
			}
		}
	}
	
	void FuncionalidadBala(Graphics^g,Bitmap^img) {
		if (!vector_Bala.empty()) {
			for (Bala* c : vector_Bala) {
				c->Mover(g);
				c->Dibujar(g, img);
			}
		}
	}

	//Funcionalidad Jugador
	
	void MoverJugador(Keys tecla,bool mover) {
		short velocidad;
		if(get_HabilitarEndGame()==false)
		velocidad = 5;
		else {
		velocidad = 7;
		}
		if (mover == true) {
			if (tecla == Keys::Up) {
				Player->set_Dy(-velocidad);
				Player->set_Accion(Arriba1);
			}
			if (tecla == Keys::Down) {
				Player->set_Dy(velocidad);
				Player->set_Accion(Abajo1);
			}
			if (tecla == Keys::Right) {
				Player->set_Dx(velocidad);
				Player->set_Accion(Derecha1);
			}
			if (tecla == Keys::Left) {
				Player->set_Dx(-velocidad);
				Player->set_Accion(Izquierda1);
			}
		}
		else {
			if (tecla == Keys::Up) {
				Player->set_Dy(0);
			}
			if (tecla == Keys::Down) {
				Player->set_Dy(0);
			}
			if (tecla == Keys::Right) {
				Player->set_Dx(0);
			}
			if (tecla == Keys::Left) {
				Player->set_Dx(0);
			}
		}
	}
	
	void FuncionalidadJugador(Graphics^g,Bitmap^img) {
		if(ColisionesCasas1()==false && ColisionesCasas2()==false && ColisionesCasas3()==false
			&& ColisionesCasas4()==false && ColisionesCasas5()==false && ColisionesCasas6()==false)
		Player->Mover(g);
		Player->Dibujar(g, img);
	}
	
	//Funcionalidad Objetos
	
	void DibujarInmunidad(Graphics^g,Bitmap^img) {
		for (Inmunidad* C : vector_Inmunidad) {
			C->Dibujar(g,img);
		}
	}
	
	void DibujarJeringa(Graphics^g,Bitmap^img) {
		for (Jeringa* C : vector_Jeringa) {
			C->Dibujar(g, img);
		}
	}
	
	void DibujarBotiquin(Graphics^ g, Bitmap^ img) {
		for (Botiquin* C : vector_Botiquin) {
			C->Dibujar(g, img);
		}
	}
	
	void DibujarPildoras(Graphics^g,Bitmap^img1,Bitmap^img2,Bitmap^img3,Bitmap^img4) {
		for (short i = 0; i < vector_Pildoras.size(); i++) {
			vector_Pildoras[i]->Dibujar(g,img1,img2,img3,img4);
		}
	}
	
	//Colisiones 
	bool ColisionesJugadorVirus() {
			if (Player->get_Vida() != 0) {
				if (!vector_Omicron.empty()) {
					for (short i = 0; i < vector_Omicron.size(); i++) {
						if (vector_Omicron[i]->Area().IntersectsWith(Player->Area())) {
							vector_Omicron[i]->set_Visible(false);
							vector_Omicron.erase(vector_Omicron.begin() + i);
							if (Player->get_SinColision() == true) {
								Player->set_SinColision(false);
							}
							else {
								short vida = Player->get_Vida();
								Player->set_Vida(vida - 1);
							}

						}
					}
				}
			}
			/*for (short i = 0; i<vector_Omicron.size(); i++) {
				if (vector_Omicron[i]->get_Visible() == false) {
					vector_Omicron.erase(vector_Omicron.begin() + i);
				}
			}*/
			if (Player->get_Vida() != 0) {
				if (!vector_Delta.empty()) {
					for (short i = 0; i < vector_Delta.size(); i++) {
						if (vector_Delta[i]->Area().IntersectsWith(Player->Area())) {
							vector_Delta[i]->set_Visible(false);
							vector_Delta.erase(vector_Delta.begin() + i);
							if (Player->get_SinColision() == true) {
								Player->set_SinColision(false);
							}
							else {
								short vida2 = Player->get_Vida();
								Player->set_Vida(vida2 - 1);
							}
						}
					}
				}
			}
			/*for (short i = 0; i<vector_Delta.size(); i++) {
				if (vector_Delta[i]->get_Visible() == false) {
					vector_Delta.erase(vector_Delta.begin() + i);
				}
			}*/
			if (Player->get_Vida() != 0) {
				if (!vector_Omega.empty()) {
					for (short i = 0; i < vector_Omega.size(); i++) {
						if (vector_Omega[i]->Area().IntersectsWith(Player->Area())) {
							vector_Omega[i]->set_Visible(false);
							vector_Omega.erase(vector_Omega.begin() + i);
							if (Player->get_SinColision() == true) {
								Player->set_SinColision(false);
							}
							else {
								short vida3 = Player->get_Vida();
								Player->set_Vida(vida3 - 1);
							}
						}
					}
				}
			}
			/*for (short i = 0; i < vector_Omega.size(); i++) {
				if (vector_Omega[i]->get_Visible() == false) {
					vector_Omega.erase(vector_Omega.begin() + i);
				}
			}*/
		
		
		if (Player->get_Vida() <= 0) return true;
		return false;
	}
	
	void ColisionBalaVirus(Graphics^g) {
		//Balas colisiona con un virus Delta

		if (!vector_Bala.empty() && !vector_Delta.empty()) {
			for (short i = 0; i < vector_Bala.size(); i++) {
				for (short j = 0; j < vector_Delta.size(); j++) {
					if (vector_Bala[i]->Area().IntersectsWith(vector_Delta[j]->Area())) {
						vector_Bala[i]->set_Visible(false);
						vector_Delta[j]->set_Vida(vector_Delta[j]->get_Vida() - 1);
						if (vector_Delta.at(j)->get_Vida() <= 0) {
							vector_Delta.erase(vector_Delta.begin() + j);
						}
					}
				}
			}
		}
		
		//Balas colisiona con un virus Omega
		if (!vector_Bala.empty() && !vector_Omega.empty()) {
			for (short i = 0; i < vector_Bala.size(); i++) {
				for (short j = 0; j < vector_Omega.size(); j++) {
					if (vector_Bala[i]->Area().IntersectsWith(vector_Omega[j]->Area())) {
						vector_Bala[i]->set_Visible(false);
						vector_Omega[j]->set_Vida(vector_Omega[j]->get_Vida() - 1);
						if (vector_Omega[j]->get_Vida() <= 0) {
							vector_Omega.erase(vector_Omega.begin() + j);
						}
					}
				}
			}
		}
		//Balas colisiona con un virus Omicron
		if (!vector_Bala.empty() && !vector_Omicron.empty()) {
			for (short i = 0; i < vector_Bala.size(); i++) {
				for (short j = 0; j < vector_Omicron.size(); j++) {
					if (vector_Bala[i]->Area().IntersectsWith(vector_Omicron[j]->Area())) {
						vector_Bala[i]->set_Visible(false);
						vector_Omicron[j]->set_Vida(vector_Omicron[j]->get_Vida() - 1);
						vector_Omicron[j]->set_Colisiona(true);
						if (vector_Omicron[j]->get_Vida() <= 0) {
							vector_Omicron.erase(vector_Omicron.begin() + j);
						}
					}
				}
			}
		}
		for (short i = 0; i < vector_Bala.size(); i++) {
			if (vector_Bala[i]->get_Visible() == false) {
				vector_Bala.erase(vector_Bala.begin() + i);
			}
		}
		if (!vector_Bala.empty()) {
			for (short i = 0; i < vector_Bala.size(); i++) {
				if (vector_Bala[i]->get_X() + vector_Bala[i]->get_DX()<=0 || vector_Bala[i]->get_Y()
					+vector_Bala[i]->get_Dy()<=0 || vector_Bala[i]->get_Y()+vector_Bala[i]->get_Dy()+
					vector_Bala[i]->get_Alto() >=g->VisibleClipBounds.Height || vector_Bala[i]->get_X()+
					vector_Bala[i]->get_DX()+vector_Bala[i]->get_Ancho()>=g->VisibleClipBounds.Width) {
					vector_Bala.erase(vector_Bala.begin() + i);
				}
			}
		}
	}
	
	void ColisionJugadorPildoras(Graphics^g) {
		short pildoras;
		for (short i = 0; i < vector_Pildoras.size(); i++) {
			if (vector_Pildoras[i]->Area().IntersectsWith(Player->Area())) {
				pildoras = Player->get_PildorasRecolectadas() + 1;
				vector_Pildoras.erase(vector_Pildoras.begin() + i);
				Player->set_PildorasRecolectadas(pildoras);
			}
		}
	}
	
	//Jugador Colisiona con Objetos del mapa
	void ColisionJugadorObjetos() {
		if (!vector_Botiquin.empty()) {
			for (short i = 0; i < vector_Botiquin.size(); i++) {
				if (vector_Botiquin[i]->Area().IntersectsWith(Player->Area())) {
					vector_Botiquin[i]->set_Visible(false);
					Player->set_Vida(Player->get_Vida() + 1);
				}
			}
		}
		for (short i = 0; i < vector_Botiquin.size(); i++) {
			if (vector_Botiquin[i]->get_Visible() == false) {
				vector_Botiquin.erase(vector_Botiquin.begin() + i);
			}
		}
		if (!vector_Inmunidad.empty()) {
			for (short i = 0; i < vector_Inmunidad.size(); i++) {
				if (vector_Inmunidad[i]->Area().IntersectsWith(Player->Area())) {
					vector_Inmunidad[i]->set_Visible(false);
					Player->set_SinColision(true);
				}
			}
		}
		for (short i = 0; i < vector_Inmunidad.size(); i++) {
			if (vector_Inmunidad[i]->get_Visible() == false) {
				vector_Inmunidad.erase(vector_Inmunidad.begin() + i);
			}
		}
		if (!vector_Jeringa.empty()) {
			for (short i = 0; i < vector_Jeringa.size(); i++) {
				if (vector_Jeringa[i]->Area().IntersectsWith(Player->Area())) {
					vector_Jeringa[i]->set_Visible(false);
					Player->set_CantidadBalas(Player->get_CantidadBalas() + 10);
				}
			}
		}
		for (short i = 0; i < vector_Jeringa.size(); i++) {
			if (vector_Jeringa[i]->get_Visible() == false) {
				vector_Jeringa.erase(vector_Jeringa.begin() + i);
			}
		}
	}
	
	//Afirma si ganaste el juego o no
	bool GanasteJuego() {
		if (Player->get_PildorasRecolectadas() >= 10) {
			return true;
		}
		return false;
	}
	
	//Retornar Cantidad de Balas
	short get_BalasJugador() {
		return Player->get_CantidadBalas();
	}
	
	//Retornar Cantidad de Vidas
	short get_VidasJugador() {
		return Player->get_Vida();
	}
	
	//Retornar Pastillas Recolectadas
	short get_PastillasObtenidas() {
		return Player->get_PildorasRecolectadas();
	}
	
	//Habilitar Huida
	void set_HabilitarEndGame(bool fin) {
		this->fin = fin;
	}
	
	bool get_HabilitarEndGame() {
		return this->fin;
	}
	
	//Rectangulos Invisibles para obstaculos 
	Rectangle Area_Prueba() {
		return Rectangle(130, 250, 80, 10);
	}
	
	Rectangle Perimetro1() { //No tocar ya esta listo
		return Rectangle(130, 250, 80, 10);
	}
	
	Rectangle Perimetro2() { //No tocar ya esta listo
		return Rectangle(310,220,125,60);
	}
	
	Rectangle Perimetro3() {//No tocar ya esta listo
		return Rectangle(120,80,100,90);
	}
	
	Rectangle Perimetro4() {//No tocar ya esta listo
		return Rectangle(330,90,90,55);
	}
	
	Rectangle Perimetro5() {
		return Rectangle(310, 365, 105, 5);
	}
	
	Rectangle Perimetro6() {
		return Rectangle(175,390,60,30);
	}
	
	void DibujarRectangulo(Graphics^g) {
		Pen^ p = gcnew Pen(Color::Yellow,6);
		p->DashStyle = Drawing2D::DashStyle::Solid;
		g->DrawRectangle(p, Area_Prueba());
	}
	
	//Colisiones con Casas o Obstaculos
	bool ColisionesCasas1() {
		if (Player->NextArea().IntersectsWith(Perimetro1())) {
			return true;
		}
		return false;
	}
	
	bool ColisionesCasas2() {
		if (Player->NextArea().IntersectsWith(Perimetro2())) {
			return true;
		}
		return false;
	}
	
	bool ColisionesCasas3() {
		if (Player->NextArea().IntersectsWith(Perimetro3())) {
			return true;
		}
		return false;
	}
	
	bool ColisionesCasas4() {
		if (Player->NextArea().IntersectsWith(Perimetro4())) {
			return true;
		}
		return false;
	}
	
	bool ColisionesCasas5() {
		if (Player->NextArea().IntersectsWith(Perimetro5())) {
			return true;
		}
		return false;
	}
	
	bool ColisionesCasas6() {
		if (Player->NextArea().IntersectsWith(Perimetro6())) {
			return true;
		}
		return false;
	}
	
	//Area del refugio
	Rectangle Area_Refugio() {
		return Rectangle(340, 155, 20, 20);
	}
	
	void DibujarRefugio(Graphics^g) {
		Pen^ p = gcnew Pen(Brushes::Black,8);
		p->DashStyle = Drawing2D::DashStyle::Solid;
		g->DrawRectangle(p, Area_Refugio());
	}
	
	bool ColisionRefugio() {
		if (Player->NextArea().IntersectsWith(Area_Refugio())) {
			return true;
		}
		return false;
	}
};