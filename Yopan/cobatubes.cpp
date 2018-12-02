#include <iostream>
#include <cstdlib>
#include<conio.h>
#include <ctime>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main(){
    int x,n;
    cout<<"\t\tSELAMAT DATANG DI GAME BRAIN CHALLANGE\n\n";
    cout<<"\t\t\t\t1. main\n";
    cout<<"\t\t\t\t2. keluar\n";
    cin>>n;
    system("cls");
    if(n==1){
        cout<<"scene 1 : \n";
        cout<<"/ - - / / + * @ $ / / $ - $ $\n\n";
        cout<<"Note : ingatlah jumlah * yang muncul pada scene ini\n\n\n\n";
        for(int i=0;i<5;i++){
                cout<<i;
                Sleep(1000);


        }
        system("cls");
        cout<<"scene 2: \n";
        cout<<"- / * * * & @ & @ / - + * $ $\n\n";
        cout<<"Note : ingatlah jumlah * yang muncul pada scene ini";
        Sleep(5000);

        system("cls");
        cout<<"scene 3: \n";
        cout<<"- / @ * * & / * + * - @ * - /\n\n";
        cout<<"Note : ingatlah jumlah * yang muncul pada scene ini";
        Sleep(5000);
        system("cls");
        cout<<"berapa jumlah '*' pada scene 1? \n\n";
        cout<<"Jawaban: "; cin>>x;
        system("cls");
        if (x!=1){
            cout<<"maaf jawab anda salah";

            Sleep(5000);
            system("cls");
            return 0;
        }
        else{
            cout<<"scene 4: \n\n";
            cout<<"- / * / / & - * & / - - * + $\n\n";
            cout<<"Note : ingatlah jumlah * yang muncul pada scene ini";
            Sleep(5000);
            system("cls");

            cout<<"berapa jumlah '*' pada scene 2 dan ? \n\n";
            cout<<"Jawaban: "; cin>>x;
            system("cls");
            if (x!=4){
            cout<<"maaf jawab anda salah\nPermainan Berakhir\n";
            return 0;
            }else{
                cout<<"Selamat Anda bisa menjawab semua pertanyaan";
                Sleep(5000);
                system("cls");
            }
        }
    }else{
    return 0;
    }
}
