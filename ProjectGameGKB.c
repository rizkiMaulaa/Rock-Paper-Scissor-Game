#include <stdio.h>//header input output
#include <stdlib.h>//header standard library
#include <time.h>//header untuk time
/* Project Algoritma Pemrograman
   Kelompok 2:
   1. Rizal Sanjaya
   2. Naga Tunggal
   3. Rizki Maula*/

int poin_anda=0;//skor anda
int poin_lawan=0;//skor komputer
int permainanke=0;//banyaknya permainan yang dilakukan

void menugame(){//menu tampilan game
    printf("================================================================================================\n");
    printf("=*=*=*=*==*=*=*=*==*=*=*=*==*=*=*=*=*=*=SUWIT----GAME*==*=*=*=*==*=*=*=*==*=*=*=*==*=*=*=*==*=*=\n");
    printf("=======================================By::Rizki-Naga-Rizal=====================================\n");
    printf("================================================================================================\n");
    printf("                                ||1. gunting                 ||\n");
    printf("                                ||2. kertas                  ||\n");
    printf("                                ||3. batu                    ||\n");
    printf("                                ||0. exit                    ||\n");
    printf("================================================================================================\n");
    printf("=*=*=*=*==*=*=*=*==*=*=*=*==*=*=*=*=GUNTING-BATU-KERTAS=*=*=*=*==*=*=*=*==*=*=*=*==*=*=*=*==*=*=\n");
    printf("================================================================================================\n");
    printf("                                ||Poin kamu:%d               ||\n", poin_anda);
    printf("                                ||Poin Komputer:%d           ||\n", poin_lawan);
    printf("                                ||Permainan ke - %d          ||\n", permainanke);
    printf("================================================================================================\n");
}

void wait(){//waktu tunggu setelah menginput jurus(inputan)
    for(int i=0; i<1000000000; i++){
    }
}

int main(){//kode main
    int pilih_player, pilih_com;//variabel untuk inputan player dan random komputer

    srand(time(NULL));//penulisan agar hasil random tidak memiliki pola yang sama
    do{
        system("cls");//clear screen
        menugame();//menampilkan menu game
        do{
            printf("\n===================================================\n");
            printf("||Pilihan jurus (1. gunting,2. kertas,3. batu)= ");;
            scanf("%d", &pilih_player);
            fflush(stdin);//solve skipping problem of scanf() with clean the input buffer
            printf("\n===================================================\n");
        }while(pilih_player<1 && pilih_player>3);//perulangan akan terus dilakukan hingga batas

        pilih_com=rand()%3+1;
        if(pilih_com==1){//komputer memilih gunting
            if(pilih_player==1){//anda memilih gunting
                printf("\n===================================================\n");
                printf("||pemain memilih: gunting\n");
                wait();
                printf("||komputer memilih: gunting\n");
                printf("||--------------------HASIL SERI-------------------\n");
                printf("===================================================\n");
                printf("tekan enter untuk lanjut");
                permainanke++;//nomor permainan bertambah
                getchar();//untuk mengakhiri program dengan enter
            }else if(pilih_player==2){//anda memilih kertas
                printf("\n===================================================\n");
                printf("||pemain memilih: kertas\n");
                wait();
                printf("||komputer memilih: gunting\n");
                printf("||------------------KOMPUTER MENANG!!--------------\n");
                printf("===================================================\n");
                printf("tekan enter untuk lanjut");
                poin_lawan++;//poin komputer bertambah
                permainanke++;//nomor permainan bertambah
                getchar();//untuk mengakhiri program dengan enter
            }else if(pilih_player==3){//batu
                printf("\n===================================================\n");
                printf("||pemain memilih: batu\n");
                wait();
                printf("||komputer memilih: gunting\n");
                printf("||--------------------PEMAIN MENANG!!--------------\n");
                printf("===================================================\n");
                printf("tekan enter untuk lanjut");
                poin_anda++;//poin anda bertambah
                permainanke++;//nomor permainan bertambah
                getchar();//untuk mengakhiri program dengan enter
            }
        }else if(pilih_com==2){//kertas
            if(pilih_player==1){//gunting
                printf("\n===================================================\n");
                printf("||pemain memilih: gunting\n");
                wait();
                printf("||komputer memilih: kertas\n");
                printf("||-------------------PEMAIN MENANG!!---------------\n");
                printf("===================================================\n");
                printf("tekan enter untuk lanjut");
                poin_anda++;
                permainanke++;
                getchar();
            }else if(pilih_player==2){//kertas
                printf("\n===================================================\n");
                printf("||pemain memilih: kertas\n");
                wait();
                printf("||komputer memilih: kertas\n");
                printf("||---------------------HASIL SERI------------------\n");
                printf("===================================================\n");
                printf("tekan enter untuk lanjut");
                permainanke++;
                getchar();
            }else if(pilih_player==3){//batu
                printf("\n===================================================\n");
                printf("||pemain memilih: batu\n");
                wait();
                printf("||komputer memilih: kertas\n");
                printf("||--------------------KOMPUTER MENANG!!------------\n");
                printf("===================================================\n");
                printf("tekan enter untuk lanjut");
                poin_lawan++;
                permainanke++;
                getchar();
            }    
        }else if(pilih_com==3){//batu
            if(pilih_player==1){//gunting
                printf("\n===================================================\n");
                printf("||pemain memilih: gunting\n");
                wait();
                printf("||komputer memilih: batu\n");
                printf("||-----------------KOMPUTER MENANG!!---------------\n");
                printf("===================================================\n");
                printf("tekan enter untuk lanjut");
                poin_lawan++;
                permainanke++;
                getchar();
            }else if(pilih_player==2){//kertas
                printf("\n===================================================\n");
                printf("||pemain memilih: kertas\n");
                wait();
                printf("||komputer memilih: batu\n");
                printf("||------------------PEMAIN MENANG!!----------------\n");
                printf("===================================================\n");
                printf("tekan enter untuk lanjut");
                poin_anda++;
                permainanke++;
                getchar();
            }else if(pilih_player==3){//batu
                printf("\n===================================================\n");
                printf("||pemain memilih: batu\n");
                wait();
                printf("||komputer memilih: batu\n");
                printf("||----------------------HASIL SERI-----------------\n");
                printf("===================================================\n");
                printf("tekan enter untuk lanjut");
                permainanke++;
                getchar();
            }    
        }    
    }while(pilih_player!=0);//perulangan selama inputan player tidak sama dengan 0
    printf("\nTekan enter untuk keluar");
    getchar();
    return 0;
}
