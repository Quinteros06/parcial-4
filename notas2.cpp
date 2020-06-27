#include <iostream>

using namespace std;

float arra1(float nota[][5], int num){

	for (int i = 0; i < num; i++)
	{
		cout<<endl<<"Estudiante"<<i+1 <<endl;
		
		for (int j=0; j<= 4; j++)
		{
			cout<<"Ingrese la nota "<<j+1 << ": ";
			cin>>nota[i][j];
		}
	}return nota[num][5];
}

float arraynota(float nota[][5], int num, float notaf[][5]){ 

	for (int i = 0; i < num; i++)
	{
		for (int j= 0; j<= 4; j++)
		{
			notaf [i][j] = nota[i][j] * 0.2;
		}
	}return notaf[num][5];
}

float arrayG(float nota[][5], int num, float notaf[][5], float suma[][1]){


	for (int i=0; i<num; i++)
	{
		for (int j=0; j<=0; j++)
		{
			suma[i][1] = notaf[i][j] + notaf[i][j+1] + notaf[i][j+2] + notaf[i][j+3] +notaf[i][j+4];
			
			cout <<"La nota del estudiante "<< i+1 << " es: ";
			
			if(suma[i][1]>=6.00){
				
				cout <<suma[i][1] << endl;
				cout <<"El estudiante aprobo." << endl;
				
			}else{
				
				cout <<suma[i][1] << endl;
				cout <<"El estudiante reprobo." << endl;
			}
		}
	}return suma[num][1];
}

int main(void){
	
	int num;
	
	cout <<"Ingrese el numero de estudiantes: ";
	cin >>num;

	float nota[num][5]; 
	float notaf[num][5]; 
	float suma[num][1];

	arra1(nota, num);
	arraynota(nota, num, notaf);
	arrayG(nota, num, notaf, suma);
}
