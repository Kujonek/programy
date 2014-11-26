/* 
 * File:   main.cpp
 * Author: Dominik
 *
 * Created on 22 listopad 2014, 10:53
 */

#include <cstdlib>
#include <iostream>
#include <String>
using namespace std;

/*
 * 
 */

class uzytkownik{
public:
    string imie;
    string nazwisko;
    int wiek;
    
    void wczytaj(string i, string n, int w);
    void wypisz();
    uzytkownik()
        {
        imie="dominik";
        nazwisko="grabowski";
        wiek=23;
        }
};
void uzytkownik::wczytaj(string i, string n, int w){
    imie=i;
    nazwisko=n;
    wiek=w;
}
void uzytkownik::wypisz(){
    cout<<imie<<endl;
    cout<<nazwisko<<endl;
    cout<<wiek<<endl;
}





int main() {
    uzytkownik x;
    x.wypisz();
    x.wczytaj("Adrian", "Grabowski",17);
    x.wypisz();
    
    return 0;
}

