#pragma once
#include <iostream>
#include "Clases2.h"
#include <vector>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
class Controller2 {
private:
	//Vector de Objetos
	vector<Bala*>vector_Bala;
	vector<Pildoras*>vector_Pildoras;
	vector<Botiquin*>vector_Botiquin;
	vector<Jeringa*>vector_Jeringa;
	vector<Inmunidad*>vector_Inmunidad;
	vector<Llave*>vector_Llave;
	//Vector de Virus
	vector<EvOmicron*>vector_EvOmicron; // rojo
	vector<EvDelta*>vector_EvDelta;     // verde
	vector<EvOmega*>vector_EvOmega;     // azul
	vector<Omega*>vector_Omega;
	vector<Omicron*>vector_Omicron;
	vector<Delta*>vector_Delta;
	Jugador* Player;
	Doctor* Aliado;
	bool aux;
	bool fin;
	bool doctorr;
	//Colisiones con casas u obstaculos 
	bool colision1;
	bool colision2;
	bool colision3;
	bool colision4;
	bool colision5;
	bool existe_doctor;
	short pastillas_aparecidas;
	short llaves_aparecidas;
	bool aparicion_llaves;
public:
	Controller2(short x, short y, short x2, short y2) {
		Player = new Jugador(x, y);
		aux = false;
		colision1 = false;
		colision2 = false;
		colision3 = false;
		colision4 = false;
		colision5 = false;
		pastillas_aparecidas = 0;
		llaves_aparecidas = 0;
		aparicion_llaves = false;
		Aliado = new Doctor(x2, y2);
		existe_doctor = false;
		doctorr = true;
	}
	~Controller2() {
		delete Player;
	}
	//Setter and Getter
	void set_Aux(bool aux) {
		this->aux = aux;
	}
	bool get_Aux() {
		return this->aux;
	}
	void set_ActivarLlaves(bool boliano) {
		this->aparicion_llaves = boliano;
	}
	bool get_ActivarLlaves() {
		return this->aparicion_llaves;
	}
	//Agregar Evoluciones Virus
	void AgregarOmicron2(Graphics^ g, Random^ r) {
		vector_EvOmicron.push_back(new EvOmicron(g, r));
	}
	void AgregarDelta2(Graphics^ g, Random^ r) {
		vector_EvDelta.push_back(new EvDelta(g, r));
	}
	void AgregarOmega2(Graphics^ g, Random^ r) {
		vector_EvOmega.push_back(new EvOmega(g, r));
	}
	//Agregar Virus Normales
	void AgregarOmicron(Graphics^ g, Random^ r) {
		vector_Omicron.push_back(new Omicron(60, r->Next(50, g->VisibleClipBounds.Height - 90)));
	}
	void AgregarDelta(Graphics^ g, Random^ r) {
		vector_Delta.push_back(new Delta(r->Next(50, g->VisibleClipBounds.Width - 90), g->VisibleClipBounds.Height - 59));
	}
	void AgregarOmega(Graphics^ g, Random^ r) {
		vector_Omega.push_back(new Omega(r->Next(50, g->VisibleClipBounds.Width - 90), 40));
	}
	//Movimiento Virus Omicron
	void MoverOmicron() {
		short velocidad = 3;
		if (!vector_Omicron.empty()) {
			for (short i = 0; i < vector_Omicron.size(); i++) {
				//Verificacion Posicion X
				if (vector_Omicron.at(i)->get_X() <= Player->get_X()) {
					vector_Omicron.at(i)->set_Dx(velocidad);
				}
				else {
					vector_Omicron.at(i)->set_Dx(-velocidad);
				}
				//Verificacion Posicion Y
				if (vector_Omicron.at(i)->get_Y() <= Player->get_Y()) {
					vector_Omicron.at(i)->set_Dy(velocidad);
				}
				else {
					vector_Omicron.at(i)->set_Dy(-velocidad);
				}
			}
		}
	}
	void FuncionalidadOmicron(Graphics^ g, Bitmap^ img) {
		if (!vector_Omicron.empty()) {
			for (Omicron* c : vector_Omicron) {
				c->Mover(g);
				c->Dibujar(g, img);
			}
		}
	}
	//Movimiento Virus Delta
	void MoverDelta() {
		short velocidad = 5;
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
	void FuncionalidadDelta(Graphics^ g, Bitmap^ img) {
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
	void FuncionalidadOmega(Graphics^ g, Bitmap^ img) {
		if (!vector_Omega.empty()) {
			for (Omega* o : vector_Omega) {
				o->Mover(g);
				o->Dibujar(g, img);
			}
		}
	}
	//Movimiento EvVirus Omicron
	void MoverEvOmicron() {
		short velocidad = 4;
		if (!vector_EvOmicron.empty()) {
			for (short i = 0; i < vector_EvOmicron.size(); i++) {
				//Verificacion Posicion X
				if (vector_EvOmicron.at(i)->get_X() <= Player->get_X()) {
					vector_EvOmicron.at(i)->set_Dx(velocidad);
				}
				else {
					vector_EvOmicron.at(i)->set_Dx(-velocidad);
				}
				//Verificacion Posicion Y
				if (vector_EvOmicron.at(i)->get_Y() <= Player->get_Y()) {
					vector_EvOmicron.at(i)->set_Dy(velocidad);
				}
				else {
					vector_EvOmicron.at(i)->set_Dy(-velocidad);
				}
			}
		}
	}
	void FuncionalidadEvOmicron(Graphics^ g, Bitmap^ img) {
		if (!vector_EvOmicron.empty()) {
			for (EvOmicron* c : vector_EvOmicron) {
				c->Mover(g);
				c->Dibujar(g, img);
			}
		}
	}
	//Movimiento EvVirus Delta
	void MoverEvDelta() {
		short velocidad = 6;
		if (!vector_EvDelta.empty()) {
			for (short i = 0; i < vector_EvDelta.size(); i++) {
				//Verificacion Posicion X
				if (vector_EvDelta.at(i)->get_X() <= Player->get_X()) {
					vector_EvDelta.at(i)->set_Dx(velocidad);
				}
				else {
					vector_EvDelta.at(i)->set_Dx(-velocidad);
				}
				//Verificacion Posicion Y
				if (vector_EvDelta.at(i)->get_Y() <= Player->get_Y()) {
					vector_EvDelta.at(i)->set_Dy(velocidad);
				}
				else {
					vector_EvDelta.at(i)->set_Dy(-velocidad);
				}
			}
		}
	}
	void FuncionalidadEvDelta(Graphics^ g, Bitmap^ img) {
		if (!vector_EvDelta.empty()) {
			for (EvDelta* d : vector_EvDelta) {
				d->Mover(g);
				d->Dibujar(g, img);
			}
		}
	}
	//Movimiento EvVirus Omega
	void MoverEvOmega() {
		short velocidad = 10;
		if (!vector_EvOmega.empty()) {
			for (short i = 0; i < vector_EvOmega.size(); i++) {
				//Verificacion Posicion X
				if (vector_EvOmega.at(i)->get_X() <= Player->get_X()) {
					vector_EvOmega.at(i)->set_Dx(velocidad);
				}
				else {
					vector_EvOmega.at(i)->set_Dx(-velocidad);
				}
				//Verificacion Posicion Y
				if (vector_EvOmega.at(i)->get_Y() <= Player->get_Y()) {
					vector_EvOmega.at(i)->set_Dy(velocidad);
				}
				else {
					vector_EvOmega.at(i)->set_Dy(-velocidad);
				}
			}
		}
	}
	void FuncionalidadEvOmega(Graphics^ g, Bitmap^ img) {
		if (!vector_EvOmega.empty()) {
			for (EvOmega* o : vector_EvOmega) {
				o->Mover(g);
				o->Dibujar(g, img);
			}
		}
	}
	// Agregar Objetos
	void AgregarBotiquin(Graphics^ g, Random^ r) {
		for (short i = 0; i < 1; i++) {
			Botiquin* nuevo = new Botiquin(g, r);
			if (!nuevo->Area().IntersectsWith(I_Perimetro1()) && !nuevo->Area().IntersectsWith(I_Perimetro2()) &&
				!nuevo->Area().IntersectsWith(I_Perimetro3()) && !nuevo->Area().IntersectsWith(I_Perimetro4()) &&
				!nuevo->Area().IntersectsWith(I_Perimetro5()) && !nuevo->Area().IntersectsWith(I_Perimetro6())
				&& !nuevo->Area().IntersectsWith(I_Perimetro7())) {
				vector_Botiquin.push_back(nuevo);
			}
			else {
				delete nuevo;
				i--;
			}
		}
	}

	//Importante
	void AgregarPildoras(Graphics^ g, Random^ r, short aux) {
		if (pastillas_aparecidas < 10) {
			for (short i = 0; i < 1; i++) {
				Pildoras* nuevo = new Pildoras(g, r, aux);
				if (!nuevo->Area().IntersectsWith(I_Perimetro1()) && !nuevo->Area().IntersectsWith(I_Perimetro2()) &&
					!nuevo->Area().IntersectsWith(I_Perimetro3()) && !nuevo->Area().IntersectsWith(I_Perimetro4()) &&
					!nuevo->Area().IntersectsWith(I_Perimetro5()) && nuevo->get_X() > 15 && nuevo->get_X() <= g
					->VisibleClipBounds.Width - 40 && nuevo->get_Y() <= g->VisibleClipBounds.Height - 15 &&
					!nuevo->Area().IntersectsWith(I_Perimetro6()) && !nuevo->Area().IntersectsWith(I_Perimetro7())
					&& !nuevo->Area().IntersectsWith(I_Perimetro8()) && !nuevo->Area().IntersectsWith(I_Perimetro9())
					&& !nuevo->Area().IntersectsWith(I_Perimetro10()) && !nuevo->Area().IntersectsWith(I_Perimetro11())) {
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
	void AgregarLlaves(Graphics^g,Random^r) {
		if (get_ActivarLlaves() == true) {
			if (llaves_aparecidas < 5) {
				for (short i = 0; i < 1; i++) {
					Llave* nuevo = new Llave(g, r);
					if (!nuevo->Area().IntersectsWith(I_Perimetro1()) && !nuevo->Area().IntersectsWith(I_Perimetro2()) &&
						!nuevo->Area().IntersectsWith(I_Perimetro3()) && !nuevo->Area().IntersectsWith(I_Perimetro4()) &&
						!nuevo->Area().IntersectsWith(I_Perimetro5()) && nuevo->get_X() > 15 && nuevo->get_X() <= g
						->VisibleClipBounds.Width - 40 && nuevo->get_Y() <= g->VisibleClipBounds.Height - 15 &&
						!nuevo->Area().IntersectsWith(I_Perimetro6()) && !nuevo->Area().IntersectsWith(I_Perimetro7())
						&& !nuevo->Area().IntersectsWith(I_Perimetro8()) && !nuevo->Area().IntersectsWith(I_Perimetro9())
						&& !nuevo->Area().IntersectsWith(I_Perimetro10()) && !nuevo->Area().IntersectsWith(I_Perimetro11())) {
						vector_Llave.push_back(nuevo);
						this->pastillas_aparecidas++;
					}
					else {
						delete nuevo;
						i--;
					}
				}
			}
		}
	}
	void AgregarJeringas(Graphics^ g, Random^ r) {
		for (short i = 0; i < 1; i++) {
			Jeringa* nuevo = new Jeringa(g, r);
			if (!nuevo->Area().IntersectsWith(I_Perimetro1()) && !nuevo->Area().IntersectsWith(I_Perimetro2()) &&
				!nuevo->Area().IntersectsWith(I_Perimetro3()) && !nuevo->Area().IntersectsWith(I_Perimetro4()) &&
				!nuevo->Area().IntersectsWith(I_Perimetro5()) && !nuevo->Area().IntersectsWith(I_Perimetro6())
				&& !nuevo->Area().IntersectsWith(I_Perimetro7()) && !nuevo->Area().IntersectsWith(I_Perimetro8())
				&& !nuevo->Area().IntersectsWith(I_Perimetro9()) && !nuevo->Area().IntersectsWith(I_Perimetro10())
				&& !nuevo->Area().IntersectsWith(I_Perimetro11())) {
				vector_Jeringa.push_back(nuevo);
			}
			else {
				delete nuevo;
				i--;
			}
		}
	}
	void AgregarInmunidad(Graphics^ g, Random^ r) {
		for (short i = 0; i < 1; i++) {
			Inmunidad* nuevo = new Inmunidad(g, r);
			if (!nuevo->Area().IntersectsWith(I_Perimetro1()) && !nuevo->Area().IntersectsWith(I_Perimetro2()) &&
				!nuevo->Area().IntersectsWith(I_Perimetro3()) && !nuevo->Area().IntersectsWith(I_Perimetro4()) &&
				!nuevo->Area().IntersectsWith(I_Perimetro5()) && !nuevo->Area().IntersectsWith(I_Perimetro6())
				&& !nuevo->Area().IntersectsWith(I_Perimetro7()) && !nuevo->Area().IntersectsWith(I_Perimetro8())
				&& !nuevo->Area().IntersectsWith(I_Perimetro9())) {
				vector_Inmunidad.push_back(nuevo);
			}
			else {
				delete nuevo;
				i--; //Agregar un ultimo rectangulo del arbol abajo a la izquierda
			}
		}
	}


	void AgregarBala(Graphics^ g, Keys k) {
		short velocidad_bala = 15;
		if (Player->get_CantidadBalas() != 0) {
			if (k == Keys::X) {
				short aux1 = Player->get_CantidadBalas() - 1;
				Player->set_CantidadBalas(aux1);
				if (Player->get_Accion() == Arriba1) {
					vector_Bala.push_back(new Bala(Player->get_X(), Player->get_Y() - 1, 0, -velocidad_bala));
				}
				if (Player->get_Accion() == Abajo1) {
					vector_Bala.push_back(new Bala(Player->get_X(), Player->get_Y() + 1, 0, velocidad_bala));
				}
				if (Player->get_Accion() == Izquierda1) {
					vector_Bala.push_back(new Bala(Player->get_X() - 1, Player->get_Y(), -velocidad_bala, 0));
				}
				if (Player->get_Accion() == Derecha1) {
					vector_Bala.push_back(new Bala(Player->get_X() + 1, Player->get_Y(), velocidad_bala, 0));
				}
			}
		}
	}
	void FuncionalidadBala(Graphics^ g, Bitmap^ img) {
		if (!vector_Bala.empty()) {
			for (Bala* c : vector_Bala) {
				c->Mover(g);
				c->Dibujar(g, img);
			}
		}
	}
	//Funcionalidad Jugador
	void MoverJugador(Keys tecla, bool mover) {
		short velocidad;
		if (get_HabilitarEndGame() == false)
			velocidad = 4;
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
	void FuncionalidadJugador(Graphics^ g, Bitmap^ img) {
		if (ColisionesCasas1() == false && ColisionesCasas2() == false && ColisionesCasas3() == false
			&& ColisionesCasas4() == false && ColisionesCasas5() == false && ColisionesCasas6() == false
			&& ColisionesCasas7()==false && ColisionesCasas8()==false && ColisionesCasas9()==false && 
			ColisionesCasas10() ==false && ColisionesCasas11() ==false)
			Player->Mover(g);
		Player->Dibujar(g, img);
	}
	//Funcionalidad Doctor
	void DispararDoctor(Graphics^g,Random^r) {
		short numero_random = r->Next(1, 5);
		short velocidad_bala2 = 15;
		if (numero_random == 1) { //Izquierda
			Aliado->set_Accion(Izquierda2);
			vector_Bala.push_back(new Bala(Aliado->get_X() - 1, Aliado->get_Y(), -velocidad_bala2, 0));
		}
		if (numero_random == 2) { //Derecha
			Aliado->set_Accion(Derecha2);
			vector_Bala.push_back(new Bala(Aliado->get_X() + 1, Aliado->get_Y(), velocidad_bala2, 0));
		}
		if (numero_random == 3) { //Arriba
			Aliado->set_Accion(Arriba2);
			vector_Bala.push_back(new Bala(Aliado->get_X(), Aliado->get_Y() - 1, 0, -velocidad_bala2));
		}
		if (numero_random == 4) { //Abajo
			Aliado->set_Accion(Abajo2);
			vector_Bala.push_back(new Bala(Aliado->get_X(), Aliado->get_Y() + 1, 0, velocidad_bala2));
		}
	}

	bool ColisionJugadorDoctor() {
		if (Player->Area().IntersectsWith(Aliado->Area())) {
			return true;
		}
		return false;
	}

	void CambiarVelocidadDoctor() {
		short velocidad_doctor = 7;
		Aliado->set_Dy(5);
		if (Aliado->get_Y() >= 280) {
			Aliado->set_Dy(0);
			existe_doctor = true;
		}
	}
	void MoverDoctor(Graphics^g,Bitmap^img) {
		Aliado->Mover(g);
		Aliado->Dibujar(g, img);
	}
	//Recuerdo Doctor Colision
	/*void FuncionalidadDoctor(Graphics^g,Bitmap^img,Random^r) {
		if (ColisionJugadorDoctor() == true)
			doctorr = true;
		if(doctorr==true){
			CambiarVelocidadDoctor();
			MoverDoctor(g,img);
			if (existe_doctor == true) {
				Aliado->set_Pararse(true);
				DispararDoctor(g, r);
			}
		}
	}*/
	void FuncionalidadDoctor(Graphics^ g, Bitmap^ img, Random^ r) {
		if (doctorr == true) {
			CambiarVelocidadDoctor();
			MoverDoctor(g, img);
			if (existe_doctor == true) {
				Aliado->set_Pararse(true);
				DispararDoctor(g, r);
			}
		}
	}
	//Funcionalidad Objetos
	void DibujarInmunidad(Graphics^ g, Bitmap^ img) {
		for (Inmunidad* C : vector_Inmunidad) {
			C->Dibujar(g, img);
		}
	}
	void DibujarJeringa(Graphics^ g, Bitmap^ img) {
		for (Jeringa* C : vector_Jeringa) {
			C->Dibujar(g, img);
		}
	}
	void DibujarBotiquin(Graphics^ g, Bitmap^ img) {
		for (Botiquin* C : vector_Botiquin) {
			C->Dibujar(g, img);
		}
	}
	void DibujarPildoras(Graphics^ g, Bitmap^ img1, Bitmap^ img2, Bitmap^ img3, Bitmap^ img4) {
		for (short i = 0; i < vector_Pildoras.size(); i++) {
			vector_Pildoras[i]->Dibujar(g, img1, img2, img3, img4);
		}
	}
	void DibujarLlaves(Graphics^g,Bitmap^img) {
		for (short i = 0; i < vector_Llave.size(); i++) {
			vector_Llave[i]->Dibujar(g,img);
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
	bool ColisionesJugadorEvVirus() {
		if (Player->get_Vida() != 0) {
			if (!vector_EvOmicron.empty()) {
				for (short i = 0; i < vector_EvOmicron.size(); i++) {
					if (vector_EvOmicron[i]->Area().IntersectsWith(Player->Area())) {
						vector_EvOmicron[i]->set_Visible(false);
						vector_EvOmicron.erase(vector_EvOmicron.begin() + i);
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
			if (!vector_EvDelta.empty()) {
				for (short i = 0; i < vector_EvDelta.size(); i++) {
					if (vector_EvDelta[i]->Area().IntersectsWith(Player->Area())) {
						vector_EvDelta[i]->set_Visible(false);
						vector_EvDelta.erase(vector_EvDelta.begin() + i);
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
			if (!vector_EvOmega.empty()) {
				for (short i = 0; i < vector_EvOmega.size(); i++) {
					if (vector_EvOmega[i]->Area().IntersectsWith(Player->Area())) {
						vector_EvOmega[i]->set_Visible(false);
						vector_EvOmega.erase(vector_EvOmega.begin() + i);
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
	void ColisionBalaVirus(Graphics^ g) {
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
				if (vector_Bala[i]->get_X() + vector_Bala[i]->get_DX() <= 0 || vector_Bala[i]->get_Y()
					+ vector_Bala[i]->get_Dy() <= 0 || vector_Bala[i]->get_Y() + vector_Bala[i]->get_Dy() +
					vector_Bala[i]->get_Alto() >= g->VisibleClipBounds.Height || vector_Bala[i]->get_X() +
					vector_Bala[i]->get_DX() + vector_Bala[i]->get_Ancho() >= g->VisibleClipBounds.Width) {
					vector_Bala.erase(vector_Bala.begin() + i);
				}
			}
		}
	}
	void ColisionBalaEvVirus(Graphics^ g) {
		//Balas colisiona con un virus Delta

		if (!vector_Bala.empty() && !vector_EvDelta.empty()) {
			for (short i = 0; i < vector_Bala.size(); i++) {
				for (short j = 0; j < vector_EvDelta.size(); j++) {
					if (vector_Bala[i]->Area().IntersectsWith(vector_EvDelta[j]->Area())) {
						vector_Bala[i]->set_Visible(false);
						vector_EvDelta[j]->set_Vida(vector_EvDelta[j]->get_Vida() - 1);
						if (vector_EvDelta.at(j)->get_Vida() <= 0) {
							vector_EvDelta.erase(vector_EvDelta.begin() + j);
						}
					}
				}
			}
		}

		//Balas colisiona con un virus Omega
		if (!vector_Bala.empty() && !vector_EvOmega.empty()) {
			for (short i = 0; i < vector_Bala.size(); i++) {
				for (short j = 0; j < vector_EvOmega.size(); j++) {
					if (vector_Bala[i]->Area().IntersectsWith(vector_EvOmega[j]->Area())) {
						vector_Bala[i]->set_Visible(false);
						vector_EvOmega[j]->set_Vida(vector_EvOmega[j]->get_Vida() - 1);
						if (vector_EvOmega[j]->get_Vida() <= 0) {
							vector_EvOmega.erase(vector_EvOmega.begin() + j);
						}
					}
				}
			}
		}
		//Balas colisiona con un virus Omicron
		if (!vector_Bala.empty() && !vector_EvOmicron.empty()) {
			for (short i = 0; i < vector_Bala.size(); i++) {
				for (short j = 0; j < vector_EvOmicron.size(); j++) {
					if (vector_Bala[i]->Area().IntersectsWith(vector_EvOmicron[j]->Area())) {
						vector_Bala[i]->set_Visible(false);
						vector_EvOmicron[j]->set_Vida(vector_EvOmicron[j]->get_Vida() - 1);
						if (vector_EvOmicron[j]->get_Vida() <= 0) {
							vector_EvOmicron.erase(vector_EvOmicron.begin() + j);
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
				if (vector_Bala[i]->get_X() + vector_Bala[i]->get_DX() <= 0 || vector_Bala[i]->get_Y()
					+ vector_Bala[i]->get_Dy() <= 0 || vector_Bala[i]->get_Y() + vector_Bala[i]->get_Dy() +
					vector_Bala[i]->get_Alto() >= g->VisibleClipBounds.Height || vector_Bala[i]->get_X() +
					vector_Bala[i]->get_DX() + vector_Bala[i]->get_Ancho() >= g->VisibleClipBounds.Width) {
					vector_Bala.erase(vector_Bala.begin() + i);
				}
			}
		}
	}
	void ColisionJugadorPildoras(Graphics^ g) {
		short pildoras;
		for (short i = 0; i < vector_Pildoras.size(); i++) {
			if (vector_Pildoras[i]->Area().IntersectsWith(Player->Area())) {
				pildoras = Player->get_PildorasRecolectadas() + 1;
				vector_Pildoras.erase(vector_Pildoras.begin() + i);
				Player->set_PildorasRecolectadas(pildoras);
			}
		}
	}
	void ColisionJugadorLlaves(Graphics^g) {
		short llaves;
		for (short i = 0; i < vector_Llave.size(); i++) {
			if (vector_Llave[i]->Area().IntersectsWith(Player->Area())) {
				llaves = Player->get_LlavesRecolectadas()+1;
				vector_Llave.erase(vector_Llave.begin() + i);
				Player->set_LlavesRecolectadas(llaves);
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
					Player->set_CantidadBalas(Player->get_CantidadBalas() + 15);
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
		if (Player->get_LlavesRecolectadas() >= 5) {
			return true;
		}
		return false;
	}
	//Retornar Cantidad de Llaves Recolectadas
	short get_LlavesRecolectadas() {
		return Player->get_LlavesRecolectadas();
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
	bool HabilitarCasiFin() {
		if (get_PastillasObtenidas() >= 10)
			return true;
		return false;
	}
	//Rectangulos Invisibles para obstaculos 
	Rectangle Area_Prueba() { //Desarrollo de Perimetro 1
		return Rectangle(410, 320, 60, 100);
	}
	Rectangle I_Perimetro1() { //No tocar ya esta listo
		return Rectangle(110, 97, 70, 50);
	}
	Rectangle I_Perimetro2() { //No tocar ya esta listo
		return Rectangle(350, 290, 80, 40);
	}
	Rectangle I_Perimetro3() { //No tocar ya esta listo
		return Rectangle(140, 300,60, 30);
	}
	Rectangle I_Perimetro4() { // No tocar ya esta listo
		return Rectangle(330, 90, 90, 30);
	}
	Rectangle I_Perimetro5() { // No tocar ya esta listo
		return Rectangle(410, 50, 20, 20);
	}
	Rectangle I_Perimetro6() { //No tocar ya esta listo
		return Rectangle(40, 350, 50, 30);
	}
	Rectangle I_Perimetro7() { // No tocar ya esta listo
		return Rectangle(40, 40, 35, 20);
	}
	Rectangle I_Perimetro8() {
		return Rectangle(410, 10, 60, 135);
	}
	Rectangle I_Perimetro9() {
		return Rectangle(410,275,60,80);
	}
	Rectangle I_Perimetro10() {
		return Rectangle(20, 350, 60, 75);
	}
	Rectangle I_Perimetro11() {
		return Rectangle(410, 320, 60, 100);
	}
	void set_JugadorVidas(short vida) {
		vida = vida + Player->get_Vida();
		Player->set_Vida(vida);
	}
	void DibujarRectangulo(Graphics^ g) {
		Pen^ p = gcnew Pen(Color::Yellow, 6);
		p->DashStyle = Drawing2D::DashStyle::Solid;
		g->DrawRectangle(p, Area_Prueba());
	}
	//Colisiones con Casas o Obstaculos
	bool ColisionesCasas1() {
		if (Player->NextArea().IntersectsWith(I_Perimetro1())) {
			return true;
		}
		return false;
	}
	bool ColisionesCasas2() {
		if (Player->NextArea().IntersectsWith(I_Perimetro2())) {
			return true;
		}
		return false;
	}
	bool ColisionesCasas3() {
		if (Player->NextArea().IntersectsWith(I_Perimetro3())) {
			return true;
		}
		return false;
	}
	bool ColisionesCasas4() {
		if (Player->NextArea().IntersectsWith(I_Perimetro4())) {
			return true;
		}
		return false;
	}
	bool ColisionesCasas5() {
		if (Player->NextArea().IntersectsWith(I_Perimetro5())) {
			return true;
		}
		return false;
	}
	bool ColisionesCasas6() {
		if (Player->NextArea().IntersectsWith(I_Perimetro6())) {
			return true;
		}
		return false;
	}
	bool ColisionesCasas7() {
		if (Player->NextArea().IntersectsWith(I_Perimetro7())) {
			return true;
		}
		return false;
	}
	bool ColisionesCasas8() {
		if (Player->NextArea().IntersectsWith(I_Perimetro8())) {
			return true;
		}
		return false;
	}
	bool ColisionesCasas9() {
		if (Player->NextArea().IntersectsWith(I_Perimetro9())) {
			return true;
		}
		return false;
	}
	bool ColisionesCasas10() {
		if (Player->NextArea().IntersectsWith(I_Perimetro10())) {
			return true;
		}
		return false;
	}
	bool ColisionesCasas11() {
		if (Player->NextArea().IntersectsWith(I_Perimetro11())) {
			return true;
		}
		return false;
	}
	//Area del refugio
	Rectangle Area_Refugio() { // Listo
		return Rectangle(155, 335, 10, 10);
	}
	void DibujarRefugio(Graphics^ g) {
		Pen^ p = gcnew Pen(Brushes::Black, 8);
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
