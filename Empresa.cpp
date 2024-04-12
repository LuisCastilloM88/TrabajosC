#include <iostream>
using namespace std;
class Gerente{
	char nombre[30];
	int cc;
	float sueldo;
	public:
		void leer(void);
		void ver(void);
		float valor(void);
};
class Vendedor{
	char nombre[30];
	int cc;
	float sueldo;
	public:
		void leer(void);
		void ver(void);
		float valor(void);
};
class Operario{
	char nombre[30];
	int cc,con;
	float sueldo;
	float trans;
	float hd,hn,hdd,hnd,sum;
	float pd,pn,pdd,pnd;
	float sala,salud;
	public:
		void leer(void);
		void ver(void);
		float valor(void);
		void salario(void);
};
void Gerente::leer(void){
	cout<<"Digite nombre"<<endl;
	getchar();
	gets(nombre);
	cout<<"Digite identificacion"<<endl;
	cin>>cc;
	cout<<"Digite sueldo"<<endl;
	cin>>sueldo;
}
void Gerente::ver(void){
	cout<<"Nombre : "<<nombre<<endl;
	cout<<"Identificacion : "<<cc<<endl;
	cout<<"Sueldo : "<<sueldo<<endl;
}
float Gerente::valor(void){
	return sueldo;
}
void Vendedor::leer(void){
	cout<<"Digite nombre"<<endl;
	getchar();
	gets(nombre);
	cout<<"Digite identificacion"<<endl;
	cin>>cc;
	cout<<"Digite sueldo"<<endl;
	cin>>sueldo;
}
void Vendedor::ver(void){
	cout<<"Nombre : "<<nombre<<endl;
	cout<<"Identificacion : "<<cc<<endl;
	cout<<"Sueldo : "<<sueldo<<endl;
}
float Vendedor::valor(void){
	return sueldo;
}
void Operario::leer(void){
	con=0;
	cout<<"Digite nombre"<<endl;
	getchar();
	gets(nombre);
	cout<<"Digite identificacion"<<endl;
	cin>>cc;
	cout<<"Digite sueldo"<<endl;
	cin>>sueldo;
	cout<<"Digite las horas extras diurnas"<<endl;
	cin>>hd;
	sum=hd;
	cout<<"Digite las horas extras nocturnas"<<endl;
	cin>>hn;
	sum=sum+hn;
	cout<<"Digite las horas extras diurnas festivas"<<endl;
	cin>>hdd;
	sum=sum+hdd;
	cout<<"Digite las horas extras nocturnas festivas"<<endl;
	cin>>hnd;
	sum=sum+hnd;
	while(con!=1){
		if(sueldo<=2000000){
			trans=117172;
			con=1;
		}
	}
}
void Operario::ver(void){
	cout<<"Nombre : "<<nombre<<endl;
	cout<<"Identificacion : "<<cc<<endl;
	cout<<"Sueldo : "<<sueldo<<endl;
	cout<<"Pago por horas extra diurnas : "<<hd<<endl;
	cout<<"Pago por horas extra nocturnas : "<<hn<<endl;
	cout<<"Pago por horas extra diurnas festivas : "<<hdd<<endl;
	cout<<"Pago por horas extra nocturnas festivas : "<<hnd<<endl;
	cout<<"Salario : "<<sala<<endl;
	cout<<"Ayuda de transporte : "<<trans<<endl;
}
float Operario::valor(void){
	return sueldo;
}
void Operario::salario(void){
	sala=sueldo;
	if(sum<=40){
		hd=hd*4731;
		hn=hn*6624;
		hdd=hdd*7570;
		hnd=hnd*7949;
		sala=sala+hd+hn+hdd+hnd;
	}
	salud=sueldo*0,04;
	sala=sueldo-salud;
}
class Empresa{
	char nomempresa[30];
	int NIT;
	float prom;
	Vendedor V;
	Gerente G;
	Operario O;
	public:
		void leer(void);
		void ver(void);
		void promedio(void);
};
void Empresa::leer(void){
	cout<<"Digite el nombre de la empresa"<<endl;
	getchar();
	gets(nomempresa);
	cout<<"Digite el NIT de la empresa"<<endl;
	cin>>NIT;
	G.leer();
	V.leer();
	O.leer();
	O.salario();
}
void Empresa::ver(void){
	cout<<"Empresa : "<<nomempresa<<endl;
	cout<<"NIT : "<<NIT<<endl;
	G.ver();
	V.ver();
	O.ver();
	cout<<"Sueldo promedio : "<<prom<<endl;
}
void Empresa::promedio(void){
	prom=(G.valor()+V.valor()+O.valor())/3.0;
}
int main(){
	Empresa uno;
	uno.leer();
	uno.promedio();
	uno.ver();
}
