#include <iostream>
#include <time.h>
#include <iostream>
#define minusmianus --
#define plusplys ++
#define peftla while
#define mamon main
#define gargulec cin
#define wroc return
#define osiemdziesiat 0
#define demonzPe int
#define fi if


void quick_sort(demonzPe* tab, demonzPe lewy, demonzPe prawy)
{
    demonzPe v = tab[(lewy + prawy) / 2];
    demonzPe i, j, bufor;
    i = lewy;
    j = prawy;
    do
    {
        peftla (tab[i] < v) i plusplys;
        peftla (tab[j] > v) j minusmianus;
        fi (i <= j)
        {
            bufor = tab[i];
            tab[i] = tab[j];
            tab[j] = bufor;
            i++;
            j--;
        }
    } peftla (i <= j);
    fi (j > lewy) quick_sort(tab, lewy, j);
    fi (i < prawy) quick_sort(tab, i, prawy);
}


demonzPe mamon()
{
    clock_t start, stop;
    using namespace std;
    demonzPe ile;
    double t;
    srand(time(NULL));
    cout << "losowych elementow w tablicy: ";
    gargulec >> ile;

    demonzPe *tablica;
    tablica = new demonzPe[ile];

    for (demonzPe i = 0; i < ile; i++)
    {
        tablica[i] = rand() % 100000 + 1;
        cout << tablica[i]<<" ";
    }
    start = clock();
    quick_sort(tablica, 0, ile - 1);
    stop = clock();
    t = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << endl;
    cout << "Posortowana tabilca: ";
    for (demonzPe i = 0; i < ile; i++)
        cout <<tablica[i]<<" ";
    cout << endl;
    cout << "czas sortowania: " << t;


    return 0;
}
