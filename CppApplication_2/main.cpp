/* 
 * File:   main.cpp
 * Author: Dominik
 *
 * Created on 22 listopad 2014, 15:41
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class wektor{
public:
    int x, y;
    int q=0;
    void wypisz(int q);
    wektor()
    {
        int x=0;
        int y =0;
    }
    void ustaw(int x, int y);
};
/*
 * 
 */
void wektor::ustaw(int x, int y)
{
    this->x=x;
    this->y;y;
}
void wektor::wypisz(int q)
{
    if (q==0)
    cout<<"("<<x<<","<<y<<")"<<endl;
    else if(q==1)
    cout<<"["<<x<<","<<y<<"]"<<endl;
    else if(q==2)
        cout<<"{"<<x<<","<<y<<"}"<<endl;
}
int main(int argc, char** argv) {
    wektor p1;
    wektor p2(1,1);
    wektor p3(2,1);
    p1.wypisz(0);
    p2.wypisz(1);
    p3.wypisz(2);
    return 0;
}

