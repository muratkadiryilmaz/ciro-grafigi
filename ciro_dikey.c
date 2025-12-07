/*
    Murat Kadir Yilmaz
    Computer Engineering Student
    -------------------------------------------
    Program, 12 ayin ciro degerlerini 1K - 10K araliginda rastgele uretir.
    Bu degerleri dikey bir yildiz (*) grafigi olarak terminalde gosterir.
*/

// Kütüphaneler:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Rastgele sayı üretmek için zaman bazlı fonksiyon.

    int dizi[12];
    int max = 0;

    printf("12 Aylik ciro hesaplaniyor...\n\n");
    for (int i = 0; i < 12; i++){ // Rastgele ciro değerlerini oluşturur.
        dizi[i] = rand() % 10 + 1; // 1 ile 10 arasında.
        if (dizi[i] > max)
            max = dizi[i];
    }
    printf("12 Aylik ciro (1K - 10K):\n");
    for(int i = 0; i<12; i++){  // // Ciro değerlerini yazdır.
        printf("%2d ",dizi[i]);
    }
    printf("\n\n");
    printf("Ciro Grafigi (Dikey Gorunum): \n\n");
    
    for (int i = max; i > 0; i--){ // Yukaridan asagiya satirlar
        for (int j = 0; j < 12; j++){ // Soldan saga aylar
            if (i <= dizi[j])
                printf("  *  ");
            else
                printf("     ");
        }
        printf("\n");
    }

    for (int i = 0; i < 12; i++){ // Ay numaralarini yazdir.
        printf("%4d.", i + 1);
    }
    printf("\n");

    return 0;
}
