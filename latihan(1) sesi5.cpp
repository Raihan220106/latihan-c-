#include <iostream>
#include <string>

using namespace std;

int main (){

     bool tap_in = true ;

     if(tap_in){
        cout << "anda berhasil Tap in";
     }else{
        cout << "anda gagal Tap in";
        }

       /* Huruf mutu
        nilai 90 sd 100 -> A
        nilai 70 sd 90 -> B
        nilai 60 sd 70 -> C
        nilai 40 sd 50 -> E
        kalau tidak ada nilai ->F*/

        int nilai = 90;
        char huruf_mutu='A';

        if(nilai >= 90){
            huruf_mutu='A';
        }else if(nilai > 70 && nilai <= 90) {
           huruf_mutu='B';
        }else if(nilai > 60 && nilai <= 70) {
           huruf_mutu='C';
        }else if(nilai > 40 && nilai <= 60) {
           huruf_mutu='D';
        }else if(nilai > 60 ) {
           huruf_mutu='E';
        }else{
           huruf_mutu='F';
        }
        cout << "huruf mutu yang kamu dapat adalah" <<huruf_mutu;


        }


