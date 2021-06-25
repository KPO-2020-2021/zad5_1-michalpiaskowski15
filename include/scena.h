#pragma once
#include "obiekt_sceny.h"
#include "lacze_do_gnuplota.hh"
#include <memory>
#include <vector>
#include <fstream>
#include "unistd.h"
#include "droniarz.hh"
#include "przeszkoda2.h"
#include "przeszkoda3.h"

class scena{
private:
    Droniarz dron;
    std::vector<std::shared_ptr<Droniarz>> wszystkie_drony;
    PzG::LaczeDoGNUPlota gnuplot;
    int index_drona;
    double promien_drona;
    double rozmiar_przeszkody;
public:
    std::vector<std::shared_ptr<obiekt_sceny>> wszystkie_przeszkody;
    scena();
    void rysowanie_sceny();
    void ustaw_index(int index);
    void animcja_lotu(double dlugosc, double kat);
    void lot_w_gore(double wysokosc);
    void zapisz_linie_lotu(vector3d &translacja, double wysokosc);
    void dodaj_przeszkode(double x, double y, char typ, std::string nazwa_przeszkody);
    void usun_przeszkode(int index);
    bool sprawdz_trase(vector3d &trasa);
};
