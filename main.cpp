#include "Restoran.cpp"

Restoran app;

int main()
{
    int izbor;
    std::string ime, prezime;
    Gost g;
    Radnik r;
    while(1)
    {
        std::cout<<"Dobrodosli u svoj restoran! PTF UNZE RESTORAN 2024.\n\n\tMolimo izaberite opciju : \n\n----------------------\n1. Dodaj Gosta\n----------------------\n2. Kreiraj racun\n----------------------\n3. Citaj goste\n----------------------\n4. Dodaj radnika\n----------------------\n5. Citaj radnike\n----------------------"<<std::endl;
        std::cin>>izbor;
        switch(izbor)
        {
            case 1:
            {
                g.Smjesti_Gosta();
                app.dodat_gosta(g);
                break;
            }
            case 2:
            {
                system("cls");
                std::cout<<"Unesite ime i prezime gosta kojeg za kojeg zelite napraviti racun : \n\tIme : ";
                std::cin>>ime;
                std::cout<<"\n\tPrezime : ";
                std::cin>>prezime;
                for(int i = 0; i < app.get_Gosti().size(); i++)
                {
                    if(app.get_Gost(i).get_Ime() == ime && app.get_Gost(i).get_Prezime() == prezime)
                    {
                        app.kreiraj_Racun(app.get_Gost(i));
                    }
                }
                break;
            }
            case 3:
            {
                app.citaj_Goste();
                break;
            }
            case 4:
            {
                std::cin>>r;
                app.Dodaj_Radnika(r);
                break;
            }
            case 5:
            {
                app.citaj_Radnike();
                break;
            }
            case 6:
            {
                exit(0);
            }
        }
    }
    return 0;
}