#include "Osoba.cpp"

enum Pozicija{salter = 1, konobar, vod_odjela, nema};

class Radnik : public Osoba{
    Pozicija pozicija;
    std::string dodatno;
    int ID;
public:
    Radnik();
    ~Radnik() = default;

    void set_Dodatno(std::string s);
    void set_ID(int n);
    void set_Pozicija(Pozicija p);

    int get_ID();
    std::string get_Dodatno();
    Pozicija get_Pozicija();
};

std::ostream& operator <<(std::ostream& out, Radnik r);
std::istream& operator >>(std::istream& in, Radnik& r);