#include <stdio.h>

void putarMotorUtama(int rpm, int waktu) {
    printf("Motor utama berputar dengan kecepatan %d rpm selama %d menit.\n", rpm, waktu);
}

void putarMotorPembukaKlep(int waktu) {
    printf("Motor pembuka klep terbuka selama %d menit.\n", waktu);
}

int deteksiKekeruhanAir(int kekeruhan) {
    
    if (kekeruhan <= 8) {
        return 1000; 
    } else if (kekeruhan <= 30) {
        return 1200; 
    } else {
        return 1500; 
    }
}

void jalankanMesinCuci(int kekeruhan) {
    printf("\nMesin cuci untuk level kekeruhan %d NTU:\n", kekeruhan);

    putarMotorPembukaKlep(2);

    int kecepatanMotorUtama = deteksiKekeruhanAir(kekeruhan);

    putarMotorUtama(kecepatanMotorUtama, 60);

    putarMotorPembukaKlep(2);

    
    putarMotorUtama(2000, 3);

    
    putarMotorPembukaKlep(2);

    
    putarMotorUtama(kecepatanMotorUtama, 60);

    
    putarMotorPembukaKlep(2);


    putarMotorUtama(2000, 3);
}


int main() {
    int levelKekeruhan;
    printf("Masukkan level kekeruhan air (6, 8, 12, 18, 24, 30, 36, 42, 49): ");
    scanf("%d", &levelKekeruhan);

    jalankanMesinCuci(levelKekeruhan);

    return 0;
}