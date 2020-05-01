#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;


struct reclutas{
	
	char nombre[20];
	char sexo[20];
	char curso[20];
	char sex1[20]="HOMBRE";
	char sex2[20]="MUJER";
	char a[20]="ARMAS";
	char b[20]="PILOTOS";

	
	
}recluta[20];

int main(){
					
	int n;
	int ca=0;
	int cb=0;
	int ch=0;
	int cm=0;
	

	int posm=0,posh=0,posa=0,posb=0;
	
	cout<<".Digite Cuantas Reclutas Desea Ingresar: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		fflush(stdin);
		cout<<endl;
		
		cout<<i+1<<".Digita El Nombre del Recluta: ";
		cin.getline(recluta[i].nombre,30,'\n');
		fflush(stdin);
		
		cout<<i+1<<".Digita El Sexo del Recluta: ";
		cin.getline(recluta[i].sexo,30,'\n');
		strupr(recluta[i].sexo);
		
		while((strcmp(recluta[i].sexo,recluta[i].sex1)!=0)&&(strcmp(recluta[i].sexo,recluta[i].sex2)!=0)){
			fflush(stdin);
			cout<<"\nDEBE DE INGRESAR SI ES HOMBRE O MUJER\n";
			cout<<i+1<<".Digita El Sexo del Recluta: ";
			cin.getline(recluta[i].sexo,30,'\n');
			strupr(recluta[i].sexo);
			fflush(stdin);
			
		}
	
		if(strcmp(recluta[i].sex1,recluta[i].sexo)==0){
			ch++;
			posh=i;
		}
		if(strcmp(recluta[i].sex2,recluta[i].sexo)==0){
			cm++;
			posm=i;
		}	
		fflush(stdin);
		cout<<i+1<<".Digita la Seccion del Recluta: ";
		cin.getline(recluta[i].curso,30,'\n');
		strupr(recluta[i].curso);
		
		while((strcmp(recluta[i].curso,recluta[i].a)!=0)&&(strcmp(recluta[i].curso,recluta[i].b)!=0)){
			fflush(stdin);
			cout<<"\nDigite si ud esta en la Seccion ARMAS O PILOTOS\n: ";
			cout<<i+1<<".Digita la Seccion del Recluta: ";
			cin.getline(recluta[i].curso,30,'\n');
			strupr(recluta[i].curso);
			
			
		}
		
		if(strcmp(recluta[i].a,recluta[i].curso)==0){
			ca++;
			posa=i;
		}
		 if(strcmp(recluta[i].b,recluta[i].curso)==0){
			cb++;
			posb=i;
		}	

		
	}
	
	for(int i=0;i<n;i++){
		if(posh=i){
		
		cout<<"\nNumero de Hombres con los que contamos: "<<ch;
		}
		if(posm=i){
		cout<<"\nNumero de Mujeres con los que contamos: "<<cm;break;
	}
}
cout<<endl;

		for(int i=0;i<n;i++){
	
		if(posa=i){
		
		cout<<"\nNumero de Personas en la Seccion DE ARMAS es: "<<ca;
		}
		if(posb=i){
		cout<<"\nNumero de Personas en la Seccion DE PILOTOS es: "<<cb;break;
	}

}
	
	
	getch();
	return 0;
}
