#include <stdio.h>

typedef enum {
    ROAMER = 1,
    JUNGLER,
    MIDLANE,
    GOLDLANE,
    EXPLANE
} MLRole;

int main() {
    int pilihanInput;
    
    printf("=========================================\n");
    printf("   SISTEM MANAJEMEN ROLE MOBILE LEGENDS  \n");
    printf("=========================================\n");
    printf("Pilih Role Tim Anda:\n");
    printf("1. Roamer\n");
    printf("2. Jungler\n");
    printf("3. Midlane\n");
    printf("4. Goldlane\n");
    printf("5. Explane\n");
    printf("-----------------------------------------\n");
    printf("Masukkan pilihan Anda (1-5): ");
    
    if (scanf("%d", &pilihanInput) != 1) {
        printf("Error: Harap masukkan angka yang valid!\n");
        return 1;
    }
    
    printf("\n-----------------------------------------\n");
    
    switch(pilihanInput) {
        case ROAMER:
            printf("Role Terpilih: ROAMER\n");
            printf("Tugas Utama : Map Control, Membantu Laning Phase & Melakukan Ganking, Menjadi Initiator atau Penyelamat dalam Teamfight.\n");
            printf("Contoh Hero : Tigreal, Johnson, Minotaur\n");
            break;
            
        case JUNGLER:
            printf("Role Terpilih: JUNGLER\n");
            printf("Tugas Utama : Mengamankan Objektif Utama (Turtle & Lord), Melakukan pick off, Menjadi Damage dealer saat war.\n");
            printf("Contoh Hero : Yi sun shin, Lancelot, Fanny\n");
            break;
            
        case MIDLANE:
            printf("Role Terpilih: MIDLANE\n");
            printf("Tugas Utama : Memberikan High Damage dan Area Control saat Teamfight, Membantu Perebutan Objektif, Berotasi dan Melakukan Ganking.\n");
            printf("Contoh Hero : Eudora, Kagura, Valentina\n");
            break;
            
        case GOLDLANE:
            printf("Role Terpilih: GOLDLANE\n");
            printf("Tugas Utama : Farming & Mengumpulkan Gold Secepat Mungkin, Menjadi Sumber Damage Utama di Late Game, Meruntuhkan Turret (Push Objective).\n");
            printf("Contoh Hero : Granger, Obsidia, Claude\n");
            break;
            
        case EXPLANE:
            printf("Role Terpilih: EXPLANE\n");
            printf("Tugas Utama : Membantu Perebutan Turtle Pertama, Menjadi Frontliner & Secondary Initiator dalam Teamfight, Menincar Backline Musuh.\n");
            printf("Contoh Hero : Chou, Yu Zhong, Badang\n");
            break;
            
        default:
            printf("Pilihan tidak valid! Silakan jalankan ulang program.\n");
            break;
    }
    
    printf("=========================================\n");
    return 0;
}