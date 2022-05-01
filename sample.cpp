#include "iostream"
#include <cmath>



using namespace std;

void sample1(); //Dortgenlerde Alan ve Cevre Hesaplama
void sample2(); //Karede Alan ve cevre Hesaplama 
void sample3(); // ayları isimlerine göre yazma
void sample4(); // ehliyet +18 alabilir
void sample5(); //4 er artma 
void sample6(); //4 e tam bölünen
void sample7(); //tek cift kontrolu

int main()
{
    sample7();
    return 0;
}

void sample1()
{
    int yukseklik, genislik,alan,cevre;
    
    cout<<"Alan ve Cevre Hesaplama\n"<<"Yukseklik: ";
    cin>>yukseklik;
    cout<<"genislik: ";
    cin>>genislik;
    cout<<"Alan: "<<genislik*yukseklik<<endl<<"Cevre: "<<(genislik+yukseklik)*2;
}

void sample2()
{
    int kareKenar;
    cout<<"Karenin Kenari: ";
    cin>>kareKenar;
    cout<<"Alan: "<<kareKenar*kareKenar<<endl<<"Cevre: "<<kareKenar*4;

}

void sample3()
{
    int ay;
    cout<<"Sayi Girin: ";
    cin>>ay;
    switch (ay)
    {
    case 1:
        cout<<"ocak";
        break;
    case 2:
        cout<<"subat";
        break;
    case 3:
        cout<<"mart";
        break;
    case 4:
        cout<<"nisan";
        break;
    case 5:
        cout<<"mayıs";
        break;
    case 6:
        cout<<"haziran";
        break;  
    case 7:
        cout<<"temmuz";
        break;
    case 8:
        cout<<"agustos";
        break;
    case 9:
        cout<<"eylul";
        break;
    case 10:
        cout<<"ekim";
        break;
    case 11:
        cout<<"kasim";
        break;
    case 12:
        cout<<"aralik";
        break; 
    default:
        break;
    }
}

void sample4()
{
    int yas;
    cout<<"yasiniz:";
    cin>>yas;
    if(yas>18) cout<<"ehliyet alabilirsiniz";
    else cout<<"ehliyet alamasiniz";
    cout<<endl<<"ehliyet "<<(yas>18?"alabillirsiniz":"alamasiniz");
}

void sample5()
{
    for(int i=0;i<100;i+=4)
    {
        cout<<i<<endl;
    }
}

void sample6()
{
    for(int i=0;i<100;i++)
    {
        if(i%4==0) cout<<i<<endl;
    }
}

void sample7()
{
    int sayi;
    cout<<"sayi: ";
    cin>>sayi;
    cout<<(sayi%2==0?"cift":"tek");
}






