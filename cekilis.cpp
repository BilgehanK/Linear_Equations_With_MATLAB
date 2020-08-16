#include <iostream>
#include <time.h>
using namespace std;

int main(){

    //Cekilis Yapma Uygulamasi
    //dizi <-- alfabe, 0 25 - ĞÇÖÜ + Q

    srand(time(NULL));//seed - minecraft harita olusturma <---> seed random

    //Alfabe ve Rastgele Sayilari tutmak icin diziler olusturuldu
    char alfabe[26];
    int rastgeleHarf[26];

    //Alfabe sira ile burada tanimlandi
    for(int i = 65; i <= 90; i++){

        alfabe[i - 65] = char(i);
    }

    //Cekilise Katilicak kisi sayisi
    int kisiSayisi = 6;

    /*while(1){

        cout<<"Cekilise kac kisi katiliyor: ";
        cin>>kisiSayisi;

        if(kisiSayisi <= 26 && kisiSayisi > 0){

            break;

        }
        else{
            system("cls");
            cout<<"Kisi sayisi hatali..."<<endl;
        }
    }*/

    //Isımleri kullanıcıdan alma
    string isimler[kisiSayisi];

        for(int i = 0; i < kisiSayisi; i++){
            cout<<i + 1<<". kisinin adi: ";
            cin>>isimler[i];
        }

        //
        int rastgeleIsim[kisiSayisi];

        //Isimleri rastgele sirada yazmak icin rastgele kisi Sayisi kadar sayi olusturma

        for(int i = 0; i < kisiSayisi; i++){

                int rastgeleSayi = rand() % kisiSayisi;

                //birinci sayiyi direk yazdirmamiz lazim
                if(i == 0){
                    rastgeleIsim[i] = rastgeleSayi;

                }
                else{

                    for(int j = 0; j <= i; j++){

                        if(rastgeleSayi == rastgeleIsim[j]){
                            i--;
                            break;
                        }

                        if(j == i){
                            rastgeleIsim[i] = rastgeleSayi;
                        }
                    }
                }
            }



    //Rastgele ve birbirinden farkli 26 sayi olusturma
    for(int i = 0; i < 26; i++){

        int rastgeleSayi = rand() % 26;

        //birinci sayiyi direk yazdirmamiz lazim
        if(i == 0){
            rastgeleHarf[i] = rastgeleSayi;

        }
        else{

            for(int j = 0; j <= i; j++){

                if(rastgeleSayi == rastgeleHarf[j]){
                    i--;
                    break;
                }

                if(j == i){
                    rastgeleHarf[i] = rastgeleSayi;
                }
            }
        }
    }


    cout<<"\n\n";

    for(int i = 0; i < 6; i++){

        cout<<isimler[rastgeleIsim[i]]<<": ";

        for(int j = 4*i; j < 4*i + 4; j++){
            cout<<alfabe[rastgeleHarf[j]]<<" ";

        }

        if(i == 4){
            cout<<alfabe[rastgeleHarf[24]];
        }
        else if(i == 5){
            cout<<alfabe[rastgeleHarf[25]];
        }
        cout<<endl;
    }




    //Bunu dongude yapmamiz lazim. 6 kisi icin 6 harf istenecek. Bu cikan 6 harf bi daha cikmamali


    return 0;
}
