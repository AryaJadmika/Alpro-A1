/*Nama File	: Luas_Bujursangkar.c*/
/*Deskripsi	: Menghitung luas bujursangkar dan menampilkannya*/
/*Pembuat	: Mochammad Arya Jadmika - 24060121130085*/
/*Tgl pembuatan	: Sabtu, 5 Maret 2022 14.30 WIB*/

#include <stdio.h> /*Header file*/

int main() /*Program Utama*/
{
/*Kamus*/
    int Sisi; /*Sisi bujursangkar*/
    int Luas; /*Luas bujursangkar*/
/*Algoritma*/
    printf ("_______Menghitung Luas Bujursangkar_______\n");
    printf ("\nMasukkan Sisi(S) = ");
    scanf ("%d", &Sisi); /*Input*/
    Luas = Sisi * Sisi; /*(Proses) hitung luas bujursangkar*/
    /*Output*/
    printf("Luas Bujursangkar adalah = %d\n",Luas);
    return 0;
}
