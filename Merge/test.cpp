#include "pch.h"
#include "gtest/gtest.h"
#include "Klasa.h"
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

TEST(SortowaniePrzezScalanieTest, TablicaPosortowanaRosnaco)
{
   SortowaniePrzezScalanie sort;
    int tablica[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int kopiaTablicy[10];
    copy(begin(tablica),end(tablica),begin(kopiaTablicy));
    sort.sortuj(tablica, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        ASSERT_EQ(tablica[i], kopiaTablicy[i]);
    }
}
TEST(SortowaniePrzezScalanieTest,TablicyPosortowanaMalejaco)
{
    SortowaniePrzezScalanie sort;
     int tablica[11];
    for (int i = 0; i < 11; ++i) {
        tablica[i] = 10 - i;
    }
    sort.sortuj(tablica, 0, 10);
    ASSERT_TRUE(std::is_sorted(tablica, tablica + 11));
    for (int i = 0; i < 11; ++i) {
        ASSERT_EQ(tablica[i], i);
    }
}
TEST(SortowaniePrzezScalanieTest, SortowanieLosowejTablicy)
{
    SortowaniePrzezScalanie sort;
    int rozmiar = 20;
    int* tablica = new int[rozmiar];
    for (int i = 0; i < rozmiar; ++i) {
        tablica[i] = rand() % 20 + 1;
    }
  
    sort.sortuj(tablica, 0, rozmiar - 1);

    ASSERT_TRUE(is_sorted(tablica, tablica + rozmiar));

    delete[] tablica;
}
TEST(SortowaniePrzezScalanieTest,TablicyZLiczbamiUjemnymi)
{
    SortowaniePrzezScalanie sort;
    int rozmiar = 20;
    int* tablica = new int[rozmiar];
    for (int i = 0; i < rozmiar; ++i) {
        tablica[i] = -1 * (rand() % 20 + 1);
    }
    sort.sortuj(tablica, 0, rozmiar - 1);
    ASSERT_TRUE(std::is_sorted(tablica, tablica + rozmiar));
    delete[] tablica;
}
TEST(SortowaniePrzezScalanieTest,TablicyZLiczbamiUjemnymiIDodatnimi)
{
    SortowaniePrzezScalanie sort;
    int rozmiar = 20;
    int* tablica = new int[rozmiar];
    for (int i = 0; i < rozmiar; ++i) {
        tablica[i] = rand() % 40 - 20; 
    }
    sort.sortuj(tablica, 0, rozmiar - 1);
    ASSERT_TRUE(std::is_sorted(tablica, tablica + rozmiar));
    delete[] tablica;
}
TEST(SortowaniePrzezScalanieTest, ObslugaPustejTablicy)
{
    SortowaniePrzezScalanie sort;
    int rozmiar = 0;  
    int* tablica = new int[rozmiar];
    sort.sortuj(tablica, 0, rozmiar - 1);
    SUCCEED();
    delete[] tablica;
}
int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
