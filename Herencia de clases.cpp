#include <iostream>
using namespace std;
//Herencia simple-publica
class Persona{
	char nom[30];
	int id;
	int edad;
	public:
		void leer(void);
		void ver(void);
};
class Estudiante:public Persona{
	int cod;
	float nota[5];
	float promedio;
	public:
	    void leere(void);
	    void procesoe(void);
	    void vere(void);
};
class Trabajador:public Persona{
	char cargo[20];
	float sueldo;
	float trans;
	float hd,hn,hdd,hnd,sum;
	float pd,pn,pdd,pnd;
	float sala,salud;
	public:
		void leert(void);
		void procesot(void);
		void vert(void);
};
void Persona::leer(void){
	cout<<"Digite nombre "<<endl;
	gets(nom);
	cout<<"Digite identificacion "<<endl;
	cin>>id;
	cout<<"Digite edad "<<endl;
	cin>>edad;
}
void Persona::ver(void){
	cout<<"Nombre : "<<nom<<endl;
	cout<<"Identificacion : "<<id<<endl;
	cout<<"Edad : "<<edad<<endl;
}
void Estudiante::leere(void){
	cout<<"Digite codigo "<<endl;
	cin>>cod;
	for(int i=0;i<5;i++){
	cout<<"Digite la nota "<<i+1<<endl;
	cin>>nota[i];
}
}
void Estudiante::procesoe(void){
	promedio=(nota[0]+nota[1]+nota[2]+nota[3]+nota[4])/5.0;
	if(promedio>4.75&&promedio<=5.0)
    	promedio=5.0;
    if(promedio>4.25&&promedio<4.75)
    	promedio=4.5;
    if(promedio>3.75&&promedio<4.25)
    	promedio=4.0;
    if(promedio>3.25&&promedio<3.75)
    	promedio=3.5;
    if(promedio>2.75&&promedio<3.25)
    	promedio=3.0;
    if(promedio>2.25&&promedio<2.75)
    	promedio=2.5;
    if(promedio>1.75&&promedio<2.25)
    	promedio=2.0;
    if(promedio>1.25&&promedio<1.75)
    	promedio=1.5;
    if(promedio>0.75&&promedio<1.25)
    	promedio=1.0;
    if(promedio>0.25&&promedio<0.75)
    	promedio=0.5;
    if(promedio>0&&promedio<0.25)
    	promedio=0;
}
void Estudiante::vere(void){
	cout<<"Codigo : "<<cod<<endl;
	cout<<"Nota : "<<nota<<endl;
}
void Trabajador::leert(void){
	int con=0;
	cout<<"Digite cargo "<<endl;
	getchar();
	gets(cargo);
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
void Trabajador::procesot(){
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
void Trabajador::vert(void){
	cout<<"Cargo : "<<cargo<<endl;
	cout<<"Sueldo : "<<sueldo<<endl;
	cout<<"Pago por horas extra diurnas : "<<hd<<endl;
	cout<<"Pago por horas extra nocturnas : "<<hn<<endl;
	cout<<"Pago por horas extra diurnas festivas : "<<hdd<<endl;
	cout<<"Pago por horas extra nocturnas festivas : "<<hnd<<endl;
	cout<<"Salario : "<<sala<<endl;
	cout<<"Ayuda de transporte : "<<trans<<endl;
}
int main(){
	Estudiante E;
	Trabajador T;
	E.leer();
	E.leere();
	T.leer();
	T.leert();
	E.ver();
	E.vere();
	T.ver();
	T.vert();
}
