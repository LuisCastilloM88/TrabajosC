#include <iostream>
#define tam 5
using namespace std;
class Datos{
int a[100];
float f[100];
char cad[100];
public:
Datos();
int operator[](int x);
void Leer();
void Leerf();
void Leerc();
void Ordenar();
void Ordenarf();
void Ordenarc();
void Imprimir();
void Imprimirf();
void Imprimirc();
};
int Datos::operator[](int x){
	return a[x];
}
Datos::Datos(){
	for(int i=0;i<100;i++){
		a[i]=0;
		f[i]=0.0;
		cad[i]=0;
	}
}
void Datos::Leer(){
	cout<<"Digite los datos del arreglo"<<endl;
	for(int i=0;i<tam;i++){
		cin>>a[i];
	}
}
void Datos::Leerf(){
	cout<<"Digite los datos del arreglo"<<endl;
	for(int i=0;i<tam;i++){
		cin>>f[i];
	}
}
void Datos::Leerc(){
	cout<<"Digite los datos del arreglo"<<endl;
	for(int i=0;i<tam;i++){
	cin>>cad[i];
}
}
void Datos::Ordenar()
{
	cout<<"Ordenando arreglo"<<endl;
   int i, j, temporal;
 
   for (i = tam - 1; i > 0; i--)
      for (j = 0; j < i; j++)
         if (a[j] < a[j + 1]) {
            temporal = a[j];
            a[j] =a[j + 1];
            a[j + 1] = temporal;
         }
}
void Datos::Ordenarf(){
	cout<<"Ordenando arreglo"<<endl;
	   int i, j, temporal;
 
   for (i = tam - 1; i > 0; i--)
      for (j = 0; j < i; j++)
         if (f[j] < f[j + 1]) {
            temporal = f[j];
            f[j] =f[j + 1];
            f[j + 1] = temporal;
         }
}
void Datos::Ordenarc(){
	cout<<"Ordenando arreglo"<<endl;
	 int i, j, temporal;
 
   for (i = tam - 1; i > 0; i--)
      for (j = 0; j < i; j++)
         if (cad[j] < cad[j + 1]) {
            temporal = cad[j];
            cad[j] =cad[j + 1];
            cad[j + 1] = temporal;
         }
}
void Datos::Imprimir(){
	cout<<"El arreglo quedo asi: "<<endl;
	for(int i=0;i<tam;i++){
		cout<<a[i]<<endl;
	}
}
void Datos::Imprimirf(){
	cout<<"El arreglo quedo asi: "<<endl;
	for(int i=0;i<tam;i++){
		cout<<f[i]<<endl;
	}
}
void Datos::Imprimirc(){
	cout<<"El arreglo quedo asi: "<<endl;
	for(int i=0;i<tam;i++){
		cout<<cad[i]<<endl;
	}
}
int main(){
	Datos d;
	int opc=0;
	int x;
	do{
		system("cls");
		cout<<"Escoja una opcion"<<endl;
		cout<<"1. Arreglo int"<<endl;
		cout<<"2. Arreglo float"<<endl;
		cout<<"3. Arreglo char"<<endl;
		cout<<"4. Ver arreglo int en posicion marcada"<<endl;
		cout<<"5. Salir"<<endl;
		cin>>opc;
		switch(opc){
			case 1:{
				d.Leer();
				d.Ordenar();
				d.Imprimir();
				break;
			}
			case 2:{
				d.Leerf();
				d.Ordenarf();
				d.Imprimirf();
				break;
			}
			case 3:{
				d.Leerc();
				d.Ordenarc();
				d.Imprimirc();
				break;
			}
			case 4:{
				cout<<"Digite la posicion del arreglo que quiere ver"<<endl;
				cin>>x;
				cout<<"La posicion "<<x<<" es: "<<d[x-1]<<endl;
				break;
			}
		}
		system("pause");
	}while(opc!=5);
}
	
	
	
	
	
	
	
	
