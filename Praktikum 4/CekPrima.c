/*Nama File	: CekPrima.c*/
/*Deskripsi	: Mengecek apakah sebuah masukan bilangan integer sembarang termasuk
                bilangan prima atau bukan*/
/*Pembuat	: Mochammad Arya Jadmika - 24060121130085*/
/*Tgl pembuatan	: Jum'at, 18 Maret 2022 9.55 WIB*/


#include <stdio.h> /*Header file*/

int main() /*Program Utama*/
{
/*Kamus*/
    int N; /*Bilangan integer yang akan dimasukkan*/
    int i; /*Counter*/
    int faktor = 0;

/*Algoritma*/
    printf ("_______Mengecek Bilangan Prima atau Bukan_______\n");

    printf ("\nMasukkan bilangan bulat positif = ");
    scanf ("%d", &N); /*Input*/

    /*cek jika bilangan modulus == 0 maka bukan bilangan prima*/
    for (i = 2; i <=N/2 ; i++){
        if (N % i == 0){
            faktor=1;
            break;
        }
    }

    /*conditional untuk bilangan prima atau bukan*/
    if (N == 1){
        printf("%d Bukan bilangan prima \n", N);
    } else if (N <= 0){
        printf("Bilangan yang dimasukkan sama dengan nol atau kurang dari nol\n");
    } else{
        if (faktor == 1){
            printf("%d Bukan bilangan prima\n", N);
        } else {
            printf("%d Termasuk bilangan prima\n", N);
        }
    }
    return 0;
}


