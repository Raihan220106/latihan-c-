#include <iostream>

using namespace std;

int main(){
    double pi= 3.14;
    int  rkuadrat= 64 ;
    int  r = 8;
    int  h = 5;
    double volumetabung = pi * rkuadrat * h;
    double luaspermukaantabung = 2 * pi * r *(r+h);

cout<<"volume tabung:"<< pi << "*" << rkuadrat << "*" << h << " = " << volumetabung << endl ;
cout<<"luas permukaan tabung:"<< 2 << "*" << pi << "*" << r << "*" <<(r+h)<<"=" << luaspermukaantabung << endl;

    return 0 ;

}
