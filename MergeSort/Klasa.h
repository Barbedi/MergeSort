class SortowaniePrzezScalanie {
	public:
	void scal(int tablica[], int lewy, int srodek, int prawy);
	void sortuj(int tablica[], int lewy, int prawy);
	void wyswietl(int tablica[], int rozmiar);
};
void SortowaniePrzezScalanie::scal(int tablica[], int lewy, int srodek, int prawy)
{


}
void SortowaniePrzezScalanie::sortuj(int tablica[], int lewy, int prawy)
{
    if (lewy < prawy)
    {
        int srodek = (lewy + prawy) / 2;
        sortuj(tablica, lewy, srodek);
        sortuj(tablica, srodek + 1, prawy);
        scal(tablica, lewy, srodek, prawy);
    }

}
void SortowaniePrzezScalanie::wyswietl(int tablica[], int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
        std::cout << tablica[i] << " ";
    std::cout << std::endl;

}