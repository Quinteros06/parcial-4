#include <iostream>


using namespace std;

float miarray(float estatura []){
	
    float suma=0, pro;
    for(int i=0;i<25;i++){
        
        suma = suma+estatura[i];
    }
    pro = suma/25;
    cout<<"El promedio es: "<<pro<<endl;
    return pro;
}


int array1(float estatura [], float pro){
	
    int mayor=0, menor=0, b=0;
    
    for(int i=0;i<25;i++){
        if(estatura[i]<pro){
            menor++;
        }
        if(estatura[i]>pro){
            mayor++;
        }
        if(estatura[i]==pro){
            b++;
        }
    }
    cout<<"Estaturas mayores al promedio: "<<mayor<<endl;
    cout<<"Estaturas menores al promedio: "<<menor<<endl;
    return 0;
}


int main(){
    float estatura[25];
    float pro;

     for(int i=0;i<25;i++){
        cout<<"Ingrese estatura "<<i+1<< ": ";
        cin>>estatura[i];
    }

    pro=miarray(estatura);
    array1(estatura,pro);
    return 0;
}
