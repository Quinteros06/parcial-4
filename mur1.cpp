#include <iostream>
#include <string>

using namespace std;

void miarray(char frase[100]){
	 
	 int i=0;
	 cout<<"Ingresa la frase:";
	 cin>>frase;
	 while(frase[i]!='\0'){
	 	
	 	if(frase[i]=='M'|| frase[i]=='m')
	 	frase[i]='0';
	 	if(frase[i]=='U'|| frase[i]=='u')
	 	frase[i]='1';
	 	if(frase[i]=='R'|| frase[i]=='r')
	 	frase[i]='2';
	 	if(frase[i]=='C'|| frase[i]=='c')
	 	frase[i]='3';
	 	if(frase[i]=='I'|| frase[i]=='i')
	 	frase[i]='4';
	 	if(frase[i]=='E'|| frase[i]=='e')
	 	frase[i]='5';
	 	if(frase[i]=='L'|| frase[i]=='l')
	 	frase[i]='6';
	 	if(frase[i]=='A'|| frase[i]=='a')
	 	frase[i]='7';
	 	if(frase[i]=='G'|| frase[i]=='g')
	 	frase[i]='8';
	 	if(frase[i]=='O'|| frase[i]=='o')
	 	frase[i]='9';
	 	i++;
	 }
	 cout<<"la frase en codigo es:"<<frase;
}

int main(){
	
char frase[100];
miarray(frase);
	return 0;
}
