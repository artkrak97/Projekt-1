#include <iostream>
#include <windows.h>


using namespace std;

int stos [6];
int rozmiar;

void wyswietl_stos()
{
    system("CLS");


    cout<<endl;
    cout<<"*******************"<<endl;
    cout<<"*ZAWARTOSC STOSU: *"<<endl;
    cout<<"******************"<<endl;

    for (int i=rozmiar; i>=1; i--)
    {
        cout<<stos[i]<<endl;
    }

    if (rozmiar==0) cout<<"pusty"<<endl;

    cout << "******************"<<endl<<endl;

}

//------------------------------------------------------------------------

void dodaj()
{
    if (rozmiar>=5)
    {
        cout << "Stos pelny!";
        Sleep(1000);
    }
    else
    {
        cout<<endl<< "podaj jaka liczbe chcesz dodac : ";

        rozmiar=rozmiar+1;
        cin>>stos[rozmiar];
    }
}

//------------------------------------------------------------------------

void usun()
{
    if (rozmiar>=1)
    {
        cout<<endl<<"usuwanie liczby: "<<stos[rozmiar];
        Sleep(1000);

        rozmiar=rozmiar-1;
    }
    else
    {
        cout << "Stos pusty!";
        Sleep(1000);
    }
}
void wielkosc()
{
    cout<<endl<<"Liczba elementow na stosie: "<<rozmiar;
    Sleep(1000);
}

void czy_pusty()
{

    if (rozmiar==0) cout<<endl<<"stos pusty";
    else cout<<endl<<"wystempuja elementy";
    Sleep(1000);
}

int main ()
{
    int wybor;


    do{
        wyswietl_stos();


        cout << "MENU GLOWNE STOSU:"<<endl;
        cout << "******************"<<endl;
        cout << "1. Dodaj element "<<endl;
        cout << "2. usun element "<<endl;
       cout << "3. rozmiar stosu "<<endl;
        cout << "4. czy stos jest pusty? "<<endl;
        cout << "5. Koniec programu "<<endl;
        cout << "wybor opcji: ";
        cin >> wybor;



        switch (wybor)
        {
        case 1:
           dodaj();
            break;

        case 2:
        usun();
            break;
              case 3:
            wielkosc();
            break;

        case 4:
            czy_pusty();
            break;
            }
}
            while (wybor!=5);
    return 0;
}
