#include "Restoran.h"

void Restoran::dodat_gosta(Gost g)
{
    this->gosti.push_back(g);
}
void Restoran::Dodaj_Radnika(Radnik r)
{
    this->radnici.push_back(r);
}
void Restoran::citaj_Goste()
{
    for(int i = 0; i < this->gosti.size(); i++)
    {
        std::cout<<this->gosti[i]<<std::endl;
    }
}
void Restoran::citaj_Radnike()
{
    for(int i = 0; i < this->radnici.size(); i++)
    {
        std::cout<<this->radnici[i]<<std::endl;
    }
}

/*
 Ovdje su potrošeni sati i sati tuđih života da se sve ispiše u fajl kako treba, međutim ne ide.

 Nešto nekad bude izostavljeno, nekad ima i viška. Odustajem...
 */
void Restoran::kreiraj_Racun(Gost g)
{
    float cijena_Full;
    Datum d;
    d.set_Datum();
    int poz;
    std::string uslugica;
    std::ofstream file;
    file.open(g.get_Ime() + "_" + g.get_Prezime() + ".txt");
    file<<d.get_Day()<<"."<<d.get_Month()<<"."<<d.get_Year()<<".\n\n"<<std::endl;
    file<<"---------------------------------"<<std::endl;
    for(int i = 0; i < g.get_Usluge().size(); i++)
    {
        poz = g.get_Usluga(i).get_Vrsta();
        switch(poz)
        {
        case 1:
            uslugica = "Sok";
            break;
        case 2:
            uslugica = "Kafa";
            break;
        case 3:
            uslugica = "Limunada";
            break;
        case 4:
            uslugica = "Gazirano pice";
           break;
        case 5:
            uslugica = "Sendvic";
            break;
        case 6:
            uslugica = "Pizza";
            break;
        case 7:
            uslugica = "Pasta";
            break;
        case 8:
            uslugica = "Cevapi";
            break;
        case 9:
            uslugica = "Pita";
            break;
        case 10:
            uslugica = "Piletina";
            break;
        case 11:
            uslugica = "Corba";
            break; 
        }
        file << uslugica<< g.get_Usluga(i).get_Cijena()<<" KM / BAM\n";
    }
    for(int i = 0; i < g.get_Usluge().size();i++)
    {
        cijena_Full += g.get_Usluga(i).get_Cijena();
    }
    file<<"---------------------------------"<<"\n\t\t Cijena : "<<cijena_Full<<" KM / BAM";
    file.close();
}
std::vector <Gost> Restoran::get_Gosti()
{
    return this->gosti;
}
Gost Restoran::get_Gost(int i)
{
    return this->gosti[i];
}