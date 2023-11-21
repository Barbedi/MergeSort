#include "pch.h"
#include "gtest/gtest.h"
#include "Klasa.h"

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
int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
