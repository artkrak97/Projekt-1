#include<iostream>
#include <windows.h>

using namespace std;

// Definicja typu obiektowego stos


struct
slistEl
{

slistEl* next;
int wartosc;

};

class
stos
{
private:
slistEl* S;   // lista przechowuj¹ca stos
public:
stos();       // konstruktor

~stos();      // destruktor

bool czy_pusty(void);

slistEl* poczatek(void);

void dodaj(int v);

void usun(void);

};

// Metody obiektu stos

// Konstruktor


stos::stos()
{

S = NULL;

}

// Destruktor -zwalnia tablicê dynamiczn¹


stos::~stos
()

{

while
(S) usun();

}



// Zwraca szczyt stosu

slistEl*stos::poczatek(void)
{
return S;
}

// Zapisuje na stos

void stos::dodaj(int v)

{
    slistEl* e =new slistEl;
e->wartosc= v;

e->next= S;

S = e;
}

// Usuwa ze stosu

void stos::usun(void)
{
if(S)
{
slistEl* e = S;
S = S->next;

delete e;
}
}



// Program g³ówny



int main
()

{
    int wybor;
int i;
int rozmiar=0;


stos S;
do{


system("CLS");
        cout << "MENU GLOWNE Stosu:"<<endl;
        cout << "******************"<<endl;
        cout << "1. dodaj element "<<endl;
        cout << "2. usun element "<<endl;
       cout << "3. rozmiar stosu "<<endl;
        cout << "4. czy stos jest pusty? "<<endl;
        cout << "5. Koniec programu "<<endl;
        cout << "wybor opcji: ";
        cin >> wybor;



        switch (wybor)
        {
        case 1:{
      cout<< "podaj wartosc liczby do wstawienia:" <<endl;
    cin >>i;
   S.dodaj(i);
    rozmiar++;

 Sleep(1000);
            break;
        }
        case 2:
if (rozmiar==0)
{
            cout<< "pusta"<< endl;

 Sleep(1000);

        }
else {
          S.usun();
       cout<< S.poczatek()->wartosc << endl;
        cout<< "poczatek sie zmienil wiec usunieto element ze szczytu stosu"<< endl;

            rozmiar--;
             Sleep(1000);

}
            break;
              case 3:
          cout<< rozmiar<<endl;

            break;

        case 4:
            {

        if (rozmiar==0)
        {
            cout<< "pusta"<< endl;

 Sleep(1000);

        }
        else{
         cout<<   "nie pusta"<< endl;


 Sleep(1000);
 }
            }
            break;


            }

 Sleep(1000);

}
            while (wybor!=5);

return 0;
}
