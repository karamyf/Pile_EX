
class Pile
{
    int *tab;
    int sommet;
    int longr;

public:

    Pile();

    Pile(int size = SIZE);

    ~Pile();

    void Empiler(int);

    int Depiler();

    bool PileVide();

    void AfficherPile();

    int Sommmet();

    int size();

};
