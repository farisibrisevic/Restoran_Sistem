#include "Osoba.h"

Osoba::Osoba()
{
    this->ime = "undef";
    this->prezime = "undef";
}
void Osoba::set_Ime(std::string s)
{
    this->ime = s;
}
void Osoba::set_Prezime(std::string s)
{
    this->prezime = s;
}
std::string Osoba::get_Ime()
{
    return this->ime;
}
std::string Osoba::get_Prezime()
{
    return this->prezime;
}