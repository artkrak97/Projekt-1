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


int main()
{
    return 0;
}
