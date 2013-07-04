#include <iostream>
using namespace std;

void dessineRectangle(int largeur, int hauteur)
{
    for(int ligne(0); ligne < hauteur; ligne++)
    {
        if(ligne == 0 || ligne == hauteur-1)
        {
            for(int colonne(0); colonne < largeur; colonne++)
            {
                cout << "*";
            }
        }
        else if(ligne>0 && ligne<hauteur)
        {
            cout << "*";
            for(int colonne(0); colonne < largeur-2; colonne++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int largeur, hauteur;
    cout << "Largeur du rectangle : ";
    cin >> largeur;
    cout << "Hauteur du rectangle : ";
    cin >> hauteur;

    dessineRectangle(largeur, hauteur);
    return 0;
}
