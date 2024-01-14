#include "Gost.cpp"

class Restoran{
    int id;
    std::vector <Gost> gosti;
    std::vector <Radnik> radnici;
public:
    void Dodaj_Radnika(Radnik r);
    void dodat_gosta(Gost g);
    void citaj_Goste();
    void citaj_Radnike();
    void kreiraj_Racun(Gost u);
    std::vector <Gost> get_Gosti();
    Gost get_Gost(int i);
};