#include "pch.h"
#include "gtest/gtest.h"
#include "Klasa.h"

using namespace std;

TEST(SortowaniePrzezScalanieTest, TablicaPosortowanaRosnaco)
{
   SortowaniePrzezScalanie sort;
    int tablica[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int kopiaTablicy[10];
    copy(std::begin(tablica),end(tablica),begin(kopiaTablicy));
    sort.sortuj(tablica, 0, 9);
    for (int i = 0; i < 10; i++)
    {
        ASSERT_EQ(tablica[i], kopiaTablicy[i]);
    }
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
