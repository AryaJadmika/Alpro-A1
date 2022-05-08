/*Nama File	: BubbleSort.c*/
/*Deskripsi	: Membuat sebuah pengurutan data yang mana membandingkan dua data yang berdekatan
              dan menukarnya sampai dalam urutan yang diinginkan.​*/
/*Pembuat	: Mochammad Arya Jadmika - 24060121130085*/
/*Tgl pembuatan	: Senin, 2 Mei 2022 22.00 WIB*/

#include <stdio.h>
#include <stdlib.h>

/* Fungsi bubble sort descending*/
void bubbleSortDesc(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if (arr [j+1] > arr [j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    printf("---------------Bubble Sort Descending---------------\n");
    int array[100], n, i, j;
    printf("Masukkan banyaknya data : \n");
    scanf ("%d", &n);

    /*Perulangan untuk menginput data sebanyak n*/
    printf("Masukkan datanya yang belum terurut : \n");
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    /*Hasil data yang telah diurutkan*/
    bubbleSortDesc(array, n);
    printf("Hasil pengurutannya adalah : \n");
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
