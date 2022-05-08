/*Nama File	: SelectionSort.c*/
/*Deskripsi	: Membuat sebuah pengurutan data yang mana membandingkan semua data
              lalu setelah nilainya ditemukan barulah dilakukan pertukaran nilai.​
              Nilai yang sudah ditetapkan tidak akan dibandingkan lagi​.​*/
/*Pembuat	: Mochammad Arya Jadmika - 24060121130085*/
/*Tgl pembuatan	: Selasa, 3 Mei 2022 21.05 WIB*/

#include <stdio.h>
#include <stdlib.h>

/*Fungsi Selection Sort Descending*/
int selectionSortDesc(int arr[], int n){
    int i, j, posisi, swap;
    for(i = 0; i < n-1; i++){
        posisi = i;
        for(j = i+1; j < n; j++){
            if(arr[posisi] < arr[j]){
                posisi = j;
            }
        }
        if(posisi != i){
            swap = arr[i];
            arr[i] = arr[posisi];
            arr[posisi] = swap;
        }
    }
}

int main()
{
    printf("---------------Selection Sort Descending---------------\n");
    int array[100], n, i, j;
    printf("Masukkan banyaknya data : \n");
    scanf ("%d", &n);

    /*Perulangan untuk menginput data sebanyak n*/
    printf("Masukkan datanya yang belum terurut : \n");
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    /*Hasil data yang telah diurutkan*/
    selectionSortDesc(array, n);
    printf("Hasil pengurutannya adalah : \n");
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
