/*Nama File	: FaktorBil.c*/
/*Deskripsi	: Menentukan faktor-faktor bilangan dari bilangan integer sembarang N (N>0)*/
/*Pembuat	: Mochammad Arya Jadmika - 24060121130085*/
/*Tgl pembuatan	: Jum'at, 18 Maret 2022 9.15 WIB*/


#include <stdio.h> /*Header file*/

int main() /*Program Utama*/
{
/*Kamus*/
    int N; /*Bilangan integer yang akan dimasukkan*/
    int i; /*Counter*/

/*Algoritma*/
    printf ("_______Menentukan Faktor dari Bilangan_______\n");

    printf ("\nMasukkan bilangan bulat positif = ");
    scanf ("%d", &N); /*Input*/

    printf("Faktor dari bilangan %d yaitu\n", N);
    for(i=1; i <= N; i++){
        /*sisa bagi = 0 maka termasuk faktor*/
        if (N % i == 0){
            printf(" %d", i);
        }
    }
    return 0;
}

