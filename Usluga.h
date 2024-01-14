#include "Radnik.cpp"

class Datum{
    int d, m, y;
public:
    void set_Datum(int d, int m, int y);
    void set_Datum();
    int get_Day();
    int get_Month();
    int get_Year();
};

enum Vrsta_Usluge{sok = 1, kafa, sendvic, sladoled, pizza, pasta, cevapi, pita, piletina, corba, gazirano_pice, limunada, prazno};

class Usluga{
    int ID_Usluge;
    Datum datum_usluge;
    Vrsta_Usluge vrsta;
    float cijena_usluge;
    bool za_Ponijeti = false;
public:
    Usluga(Datum datum, Vrsta_Usluge vrsta, int id, float cijena, bool jel);
    Usluga();
    ~Usluga() = default;
    void set_Usluga();
    int get_ID_Usluge();
    Datum get_Datum();
    Vrsta_Usluge get_Vrsta();
    float get_Cijena();
    void set_Ponijeti(bool jel);
    bool get_Ponijeti();
};

std::ostream& operator <<(std::ostream& out, Usluga u);
//std::istream& operator <<(std::istream& in, Usluga& u);