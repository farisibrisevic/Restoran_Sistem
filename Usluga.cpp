#include "Usluga.h" 

void Datum::set_Datum()
{
    int d;
    std::cout<<"Unesi Mjesec : "<<std::endl;
    enter_month:
    std::cin>>d;
    if(d < 1 || d > 12)
    {
        std::cout<<"Neispravan unos, molimo ponoviti unos : "<<std::endl;
        goto enter_month;
    }
    this->m = d;
    std::cout<<"Unesi Dan : "<<std::endl;
    enter_day:
    std::cin>>d;
    if(this->m == 2)
    {
        if(d < 1 || d > 28)
        {
            std::cout<<"Neispravan unos, molimo ponoviti unos : "<<std::endl;
            goto enter_day;
        }
    }
    else
    {
        if(d < 1 || d > 32)
        {
            std::cout<<"Neispravan unos, molimo ponoviti unos : "<<std::endl;
            goto enter_day;
        }
    }
    this->d = d;
    std::cout<<"Unesi Godinu : "<<std::endl;
    enter_year:
    std::cin>>d;
    if(d > 2024 || d < 2020)
    {
        std::cout<<"Neispravan unos, molimo ponoviti unos : "<<std::endl;
        goto enter_year;
    }
    this->y = d;
}
void Datum::set_Datum(int d, int m, int y)
{
    this->d = d;
    this->m = m;
    this->y = y;
}
int Datum::get_Day()
{
    return this->d;
}
int Datum::get_Month()
{
    return this->m;
}
int Datum::get_Year()
{
    return this->y;
}
Usluga::Usluga(Datum datum, Vrsta_Usluge vrsta, int id, float cijena, bool jel)
{
    this->datum_usluge = datum;
    this->vrsta = vrsta;
    this->ID_Usluge = id;
    this->cijena_usluge = cijena;
    this->za_Ponijeti = jel;
}
Usluga::Usluga()
{
    Datum d;
    d.set_Datum(0, 0, 0);
    this->datum_usluge = d;
    this->vrsta = prazno;
    this->ID_Usluge = 0;
    this->cijena_usluge = 0;
    this->za_Ponijeti = false;
}
void Usluga::set_Usluga()
{
    // enum Vrsta_Usluge{sok = 1, kafa, sendvic, sladoled, pizza, pasta, 
    // cevapi, pita, piletina, corba, gazirano_pice, limunada, prazno};
    int izbor;
    std::cout<<"Izaberite usluge koje zelite : "<<std::endl;
    std::cout<<"Pica : \n\t1. sok\n\t2. kafa\n\t3. limunada\n\t4. gazirano pice\n\nJela : \n\t5. sendvic\n\t6. pizza\n\t7. pasta\n\t8. cevapi\n\t9. pita\n\t10. piletina\n\t11. corba\n\n"<<std::endl;
    std::cout<<"Vas izbor : ";
    std::cin>>izbor;
    switch(izbor)
    {
        case 1:
            this->vrsta = sok;
            this->cijena_usluge = 2.5;
            break;
        case 2:
            this->vrsta = kafa;
            this->cijena_usluge = 1.5;
            break;
        case 3:
            this->vrsta = limunada;
            this->cijena_usluge = 2.0;
            break;
        case 4:
            this->vrsta = gazirano_pice;
            this->cijena_usluge = 2.5;
           break;
        case 5:
            this->vrsta = sendvic;
            this->cijena_usluge = 3.0;
            break;
        case 6:
            this->vrsta = pizza;
            this->cijena_usluge = 7.5;
            break;
        case 7:
            this->vrsta = pasta;
            this->cijena_usluge = 6.0;
            break;
        case 8:
            this->vrsta = cevapi;
            this->cijena_usluge = 7.0;
            break;
        case 9:
            this->vrsta = pita;
            this->cijena_usluge = 5.0;
            break;
        case 10:
            this->vrsta = piletina;
            this->cijena_usluge = 5.5;
            break;
        case 11:
            this->vrsta = corba;
            this->cijena_usluge = 4.5;
            break;  
        default:
            std::cout<<"Pogresan unos molimo unesite vrstu usluge ponovo!"<<std::endl;
            Sleep(2000);
            break;
    }
}
int Usluga::get_ID_Usluge()
{
    return this->ID_Usluge;
}
Datum Usluga::get_Datum()
{
    return this->datum_usluge;
}
Vrsta_Usluge Usluga::get_Vrsta()
{
    return this->vrsta;
}
float Usluga::get_Cijena()
{
    return this->cijena_usluge;
}
void Usluga::set_Ponijeti(bool jel)
{   
    this->za_Ponijeti = jel;
}
bool Usluga::get_Ponijeti()
{
    return this->za_Ponijeti;
}

std::ostream& operator<<(std::ostream& out, Usluga u){
    Vrsta_Usluge poz;
    poz = u.get_Vrsta();
    out<<"{ ";
    switch(poz)
    {
        case 1:
            out<<"sok";
            break;
        case 2:
            out<<"kafa";
            break;
        case 3:
            out<<"limunada";
            break;
        case 4:
            out<<"gazirano pice";
           break;
        case 5:
            out<<"sendvic";
            break;
        case 6:
            out<<"pizza";
            break;
        case 7:
            out<<"pasta";
            break;
        case 8:
            out<<"cevapi";
            break;
        case 9:
            out<<"pita";
            break;
        case 10:
            out<<"piletina";
            break;
        case 11:
            out<<"corba";
            break;  
    }
    out << " }\t";
    return out;
}

