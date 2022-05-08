/*Nama File	: InsertionSort.c*/
/*Deskripsi	: Membuat sebuah pengurutan data yang mana membandingkan
              semua data mulai dari data ke-2 (array index 1) dengan data ke-1 (array index 0)
              dan mulai dari datanya terus bertambah sampai berapa jumlah sekumpulan data dan dibandingkan datanya sampai data ke-1*/
/*Pembuat	: Mochammad Arya Jadmika - 24060121130085*/
/*Tgl pembuatan	: Selasa, 3 Mei 2022 21.37 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("---------------Insertion Sort Descending---------------\n");
    int n, i, j;
    printf("Masukkan banyaknya data : \n");
    scanf ("%d", &n);
    int arr[n];

    /*Perulangan untuk menginput data sebanyak n*/
    printf("Masukkan datanya yang belum terurut : \n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    /*Fungsi Insertion Sort Descending*/
    for(i = 0; i < n; i++){
        for(j = i; j > 0 && arr[j] > arr[j-1]; j--){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            }
        }

    /*Hasil data yang telah diurutkan*/
    printf("Hasil pengurutannya adalah : \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
