#include <iostream>
using namespace std;

void dessineRectangle(int l, int h)
{
    for(int ligne(0); ligne < h; ligne++)
    {
        if(ligne == 1)
        {
            for(int colonne(0); colonne < l; colonne++)
            {
                cout << "*";
            }
        }
        else if(ligne>1 && ligne<h)
        {
            cout << "*";
            for(int colonne(0); colonne < l-1; colonne++)
            {
                cout << " ";
            }
            cout << "*";
        }
        else if(ligne==h);
        {
            for(int colonne(0); colonne < l; colonne++)
            {
                cout << "*";
            }
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
