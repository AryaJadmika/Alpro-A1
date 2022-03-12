/*Nama File	: CekBulan.c*/
/*Deskripsi	: mengecek dan memvalidasi nama-nama bulan dari nomor bulan, yaitu 1 s.d. 12
              dan menampilkannya di layar*/
/*Pembuat	: Mochammad Arya Jadmika - 24060121130085*/
/*Tgl pembuatan	: Kamis, 10 Maret 2022 21.38 WIB*/


#include <stdio.h> /*Header file*/

int main() /*Program Utama*/
{
/*Kamus*/
    int NoBulan; /*Nomor bulan*/

/*Algoritma*/
    printf ("_______Mengecek Bulan_______\n");
    printf ("\nMasukkan nomor bulan = ");
    scanf ("%d", &NoBulan); /*Input*/
    if (NoBulan<1 || NoBulan>12) {
        printf ("Masukan nomor bulan tidak tepat");
    }else{         /*Nomor bulan diantara 1 sampai dengan 12*/
        switch(NoBulan){
        case 1:
            printf ("Januari");
            break;
        case 2:
            printf ("Februari");
            break;
        case 3:
            printf ("Maret");
            break;
        case 4:
            printf ("April");
            break;
        case 5:
            printf ("Mei");
            break;
        case 6:
            printf ("Juni");
            break;
        case 7:
            printf ("Juli");
            break;
        case 8:
            printf ("Agustus");
            break;
        case 9:
            printf ("September");
            break;
        case 10:
            printf ("Oktober");
            break;
        case 11:
            printf ("November");
            break;
        case 12:
            printf ("Desember");
            break;
        }
    }
    return 0;
}

