#include "Radnik.h"

Radnik::Radnik()
{
    Osoba();
    this->ID = -1;
    this->pozicija = nema;
    this->dodatno = "undef";
}
void Radnik::set_ID(int n)
{
    this->ID = n;
}
void Radnik::set_Pozicija(Pozicija p)
{
    this->pozicija = p;
}
void Radnik::set_Dodatno(std::string s)
{
    this->dodatno = s;
}
int Radnik::get_ID()
{
    return this->ID;
}
Pozicija Radnik::get_Pozicija()
{
    return this->pozicija;
}
std::string Radnik::get_Dodatno()
{
    return this->dodatno;
}

std::istream& operator>>(std::istream& in, Radnik& r)
{
    std::string s;
    int izbor = 0;
    Pozicija poz;

    std::cout << "Unesite ime radnika : "<<std::endl;
    std::cin>>s;
    r.set_Ime(s);

    std::cout << "Unesite Prezime radnika : "<<std::endl;
    std::cin>>s;
    r.set_Prezime(s);

    std::cout << "Unesite ID broj radnika : "<<std::endl;
    std::cin>>izbor;
    r.set_ID(izbor);

    std::cout << "Molimo izaberite poziciju radnika : \n1. Konobar,\n2. Salter,\n3. Vod_Odjela,\n4. Nije aktivan\n";
    
    std::cin>>izbor;
    
    switch(izbor){
    case 1:
        r.set_Pozicija(konobar);
        break;
    case 2:
        r.set_Pozicija(salter);
        break;
    case 3:
        r.set_Pozicija(vod_odjela);
        break;
    case 4:
        r.set_Pozicija(nema);
        break;
    }
    std::cout<<"Pozicija postavljena."<<std::endl;
    std::cout<<"Radnik zabiljezen!\n\n";
    return in;
}

std::ostream& operator<<(std::ostream& out, Radnik r)
{
    out << "{ " << r.get_Ime() << " , " << r.get_Prezime() << " | ID : " << r.get_ID() << " , ";
    Pozicija poz;
    poz = r.get_Pozicija();
    switch(poz)
    {
    case salter:
        out << "salter";
        break;
    case konobar:
        out << "konobar";
        break;
    case vod_odjela:
        out << "vod_odjela";
        break;
    case nema:
        out << "nema poziciju";
        break;
    }
    out << " }\n";
    return out;
}

//salter = 1, konobar, vod_odjela, nema