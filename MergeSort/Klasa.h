class SortowaniePrzezScalanie {
	public:
	void scal(int tablica[], int lewy, int prawy);
	void sortuj(int tablica[], int lewy, int prawy);
	void wyswietl(int tablica[], int rozmiar);
};
void SortowaniePrzezScalanie::scal(int tablica[], int lewy,int prawy)
{
    int srodek = (prawy + lewy) / 2;
    int i = lewy;
    int j = srodek + 1;
    int k = 0;
    int* tab = new int[prawy - lewy + 1];

    while (i <= srodek && j <= prawy)
    {
        if (tablica[i] < tablica[j])
        {
            tab[k] = tablica[i];
            i++;
        }
        else
        {
            tab[k] = tablica[j];
            j++;
        }
        k++;
    }

    if (i <= srodek)
    {
        while (i <= srodek)
        {
            tab[k] = tablica[i];
            i++;
            k++;
        }
    }
    else
    {
        while (j <= prawy)
        {
            tab[k] = tablica[j];
            j++;
            k++;
        }
    }

    for (k = 0; k <= prawy - lewy; k++)
    {
        tablica[k + lewy] = tab[k];
    }

    delete[] tab;

}
void SortowaniePrzezScalanie::sortuj(int tablica[], int lewy, int prawy)
{
    if (prawy <= lewy) return;
    int srodek = (prawy + lewy) / 2;
    sortuj(tablica, lewy, srodek);
    sortuj(tablica, srodek + 1, prawy);
    scal(tablica, lewy, prawy);

}
void SortowaniePrzezScalanie::wyswietl(int tablica[], int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
        std::cout << tablica[i] << " ";
    std::cout << std::endl;

}