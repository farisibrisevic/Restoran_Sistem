#include "includes.cpp"

class Osoba{
    std::string ime, prezime;
public:
    Osoba();
    ~Osoba() = default;

    void set_Ime(std::string s);
    std::string get_Ime();

    void set_Prezime(std::string s);
    std::string get_Prezime();
};