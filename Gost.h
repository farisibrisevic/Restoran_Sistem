#include "Usluga.cpp"

class Gost : public Osoba{
    std::vector <Usluga> usluge;
public:
    void Smjesti_Gosta();
    std::vector <Usluga> get_Usluge();
    Usluga get_Usluga(int i);
};

std::ostream& operator <<(std::ostream& out, Gost g);