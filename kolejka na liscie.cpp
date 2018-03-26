#include<iostream>
#include <windows.h>

using namespace std;

const int MAXINT = 0;

// Definicja typu elementów listy


struct slistEl
{
slistEl*next;

int wartosc;
};

// Definicja typu obiektowegokolejka


class kolejka
{
private:
slistEl*glowa;

slistEl*ogon
;

public:
kolejka();      // konstruktor
~kolejka();     // destruktor

int poczatek(void);

void dodaj(int v);

void usun(void);
};



// Metody obiektu kolejka

// Konstruktor tworzy pustą listę


kolejka::kolejka
()
{

glowa=ogon= NULL;

}

// Destruktor-usuwa listę z pamięci


kolejka::~kolejka
()

{

while(glowa) usun();

}

// Zwraca początek kolejki.

// Wartość specjalna to-MAXINT


int kolejka::poczatek(void)
{

if(glowa)
    return glowa->wartosc;

else
return -MAXINT;

}

// Zapisuje do kolejki


void kolejka::dodaj (int v)

{
    slistEl* p =new slistEl;
p->next= NULL;

p->wartosc= v;

if(ogon)
ogon->next= p;

else
glowa= p;
ogon= p;

}

// Usuwa z kolejki



void kolejka::usun(void)

{
if(glowa)

{

slistEl* p =glowa;
glowa=glowa->next;

if(!glowa)
ogon= NULL;

delete p;
}
}



// Program główny



int main()
{

int wybor;
int i;
int rozmiar=0;

kolejka Q; // kolejka
do{


system("CLS");
        cout << "MENU GLOWNE KOLEJKI:"<<endl;
        cout << "******************"<<endl;
        cout << "1. Dodaj element "<<endl;
        cout << "2. usun element "<<endl;
       cout << "3. rozmiar kolejki "<<endl;
        cout << "4. czy kolejka jest pusta? "<<endl;
        cout << "5. Koniec programu "<<endl;
        cout << "wybor opcji: ";
        cin >> wybor;



        switch (wybor)
        {
        case 1:{
      cout<< "podaj wartosc liczby do wstawienia:" <<endl;
    cin >>i;
    Q.dodaj(i);
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
            Q.usun();

            cout<< Q.poczatek() << endl;
            cout<< "początek się zmienił więc usunięto element z początku"<< endl;
            rozmiar--;
             Sleep(1000);
            break;
}
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
