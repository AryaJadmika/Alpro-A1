/*Nama File	: CekHari.c*/
/*Deskripsi	: mengecek dan memvalidasi nama-nama hari dari nomor hari, yaitu 1 s.d. 7
              dan menampilkannya di layar*/
/*Pembuat	: Mochammad Arya Jadmika - 24060121130085*/
/*Tgl pembuatan	: Kamis, 10 Maret 2022 19.28 WIB*/


#include <stdio.h> /*Header file*/

int main() /*Program Utama*/
{
/*Kamus*/
    int NoHari; /*Nomor hari*/

/*Algoritma*/
    printf ("_______Mengecek Hari_______\n");
    printf ("\nMasukkan nomor hari = ");
    scanf ("%d", &NoHari); /*Input*/
    if (NoHari<1 || NoHari>7) {
        printf ("Masukan nomor hari tidak tepat");
    }else{         /*Nomor hari diantara 1 sampai dengan 7*/
        switch(NoHari){
        case 1:
            printf ("Senin");
            break;
        case 2:
            printf ("Selasa");
            break;
        case 3:
            printf ("Rabu");
            break;
        case 4:
            printf ("Kamis");
            break;
        case 5:
            printf ("Jum'at");
            break;
        case 6:
            printf ("Sabtu");
            break;
        case 7:
            printf ("Minggu");
            break;
        }
    }
    return 0;
}
