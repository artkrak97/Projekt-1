#include <iostream>
#include <windows.h>

using namespace std;

int kolejka[6];
int rozmiar;
int glowa;
int ogon;



void dodaj()
{
    if (rozmiar>=6)
    {
        cout << "osiagnieto maksymalny rozmiar kolejki!";
        Sleep(1000);
    }
    else
    {
        cout<<endl<< "podaj liczbe do dodania: ";
        cin>>kolejka[ogon];
        ogon=(ogon+1)%6;
        rozmiar++;
    }
}


void usun()
{
    if (rozmiar==0)
    {
        cout<<"brak elementow w kolejce!";
        Sleep(1000);
    }
    else
    {
        cout<<endl<<"usuwanie elementu z kolejki: "<<kolejka[glowa];
        glowa=(glowa+1)%6;
        rozmiar=rozmiar-1;
		Sleep(1000);

    }


}

void wyswietl_kolejke()
{

    cout<<endl;
    cout<<"******************"<<endl;
    cout<<"*LICZBY W KOLEJCE*:"<<endl;
    cout<<"******************"<<endl;


    if (rozmiar==0)
    {
        cout<<"pusta";
    }

    else
    {

        int indeks;

        for (int i=0; i<rozmiar; i++)
        {
            indeks=glowa+i;
            if (glowa+i>=6) indeks=glowa+i-6;
            cout<<kolejka[indeks]<<" ";
        }

    }

    cout<<endl<<"******************"<<endl<<endl;


}
int main(){

    int wybor;


    do{
        wyswietl_kolejke();



        cout<<"glowa="<<glowa<<"   ogon="<<ogon<<"   rozmiar="<<rozmiar<<endl<<endl;

        cout << "MENU GLOWNE KOLEJKI:"<<endl;
        cout << "******************"<<endl;
        cout << "1. Dodaj element "<<endl;
        cout << "2. usun element "<<endl;
        cout << "3. koniec "<<endl;
        cout << "wybor opcji: ";
        cin >> wybor;



        switch (wybor)
        {
        case 1:
            dodaj();
            break;

        case 2:
            usun();
            break;}
}
            while (wybor!=3);

return 0;
}
