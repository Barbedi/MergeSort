#pragma once
#ifndef KLASA_H
#define KLASA_H


class SortowaniePrzezScalanie
{
public:
    SortowaniePrzezScalanie() {};
    ~SortowaniePrzezScalanie() {};
    void scal(int tablica[], int lewy, int prawy);
    void sortuj(int tablica[], int lewy, int prawy);
    void sortujOdwrotnie(int tablica[], int lewy, int prawy);


};
#endif // !KLASA_H