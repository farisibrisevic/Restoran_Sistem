#include "Gost.h"

void Gost::Smjesti_Gosta()
{
    Usluga u;
    char n;
    std::string s;
    std::cout<<"Unesite ime gosta : "<<std::endl;
    std::cin>>s;
    set_Ime(s);
    std::cout<<"Unesite prezime gosta : "<<std::endl;
    std::cin>>s;
    set_Prezime(s);
    while(n != 'n')
    {
        u.set_Usluga();
        this->usluge.push_back(u);
        std::cout<<"Da li zelite dodati jos usluga : (y / n)"<<std::endl;
        std::cin>>n;
    }
    std::cout<<"Smjesten gost "<<get_Ime()<<" "<<get_Prezime()<<"!"<<std::endl;
}

std::vector <Usluga> Gost::get_Usluge()
{
    return this->usluge;
}

Usluga Gost::get_Usluga(int i)
{
    return this->usluge[i];
}

std::ostream& operator<<(std::ostream& out, Gost g){
    out << g.get_Ime() <<" "<<g.get_Prezime()<<"\n\t";
    for(int i = 0; i < g.get_Usluge().size(); i++)
    {
        std::cout<<g.get_Usluga(i);
    }
    return out;
}