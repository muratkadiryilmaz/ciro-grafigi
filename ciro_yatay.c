/*  Murat Kadir Yılmaz
    Computer Engineering Student
    -------------------------------------------
    Program, 12 ayin ciro degerlerini 1K - 10K araliginda rastgele uretir.
    Bu degerleri yatay bir yildiz (*) grafiği olarak terminalde gosterir.
 */

// Kütüphanler:
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); // Rastegele sayı üretmek için zaman bazlı fonksiyon.
    
    int dizi[12];
    printf("12 Aylik ciro hesaplaniyor...\n\n");
    
    for(int i = 0; i < 12; i++){ // Rastgele ciro değerlerini oluşturur.
        dizi[i] = rand() %10 + 1; // 1 ile 10 arasında.
    }
    printf("12 Aylik ciro (1K - 10K):\n");
    for(int i = 0; i < 12; i++){ // Ciro değerlerini yazdır.
        printf("%2d ",dizi[i]); 
    }
    printf("\n\n");
    printf("Ciro Grafigi (Yatay Gorunum):\n\n");
    
    for(int i = 0; i < 12; i++){ // Yatay grafik oluşturma.
        printf("%02d.:",i+1); // Ay numarasını iki haneli yazdır.
    
    for(int j = 0; j < dizi[i]; j++){
        printf("  *");
    }
    printf("\n");
}
    return 0;
}