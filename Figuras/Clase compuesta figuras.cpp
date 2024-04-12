#include <iostream>
using namespace std;

class Cuadrado{
	float lado;
	float area,perimetro;
	public:
		void leer(void);
		void proceso(void);
		float valor(void);
		void ver(void);
};
class Triangulo{
	float base,altura;
	float area,perimetro;
	public:
		void leer(void);
		void proceso(void);
		float valor(void);
		void ver(void);
};
class Circulo{
	float radio;
	float area,perimetro;
	public:
		void leer(void);
		void proceso(void);
		float valor(void);
		void ver(void);
};
void Cuadrado::leer(void){
	cout<<"Digite un lado del cuadrado"<<endl;
	cin>>lado;
}
void Triangulo::leer(void){
	cout<<"Digite la base del triangulo"<<endl;
	cin>>base;
	cout<<"Digite la altura del triangulo"<<endl;
	cin>>altura;
}
void Circulo::leer(void){
	cout<<"Digite el radio del circulo"<<endl;
	cin>>radio;
}
void Cuadrado::proceso(void){
	perimetro=lado+lado+lado+lado;
	area=lado*lado;
}
void Triangulo::proceso(void){
	perimetro=base+altura;
	area=(base*altura)/2.0;
}
void Circulo::proceso(void){
	perimetro=2.0*3.14*radio;
	area=3.14*(radio*radio);
}
void Cuadrado::ver(void){
	cout<<"Cuadrado : "<<endl;
	cout<<"Lado : "<<lado<<endl;
	cout<<"Perimetro : "<<perimetro<<endl;
	cout<<"Area : "<<area<<endl;
}
void Triangulo::ver(void){
	cout<<"Triangulo : "<<endl;
	cout<<"Base : "<<base<<endl;
	cout<<"Altura : "<<altura<<endl;
	cout<<"Perimetro : "<<perimetro<<endl;
	cout<<"Area : "<<area<<endl;
}
void Circulo::ver(void){
	cout<<"Circulo : "<<endl;
	cout<<"radio : "<<radio<<endl;
	cout<<"Perimetro : "<<perimetro<<endl;
	cout<<"Area : "<<area<<endl;
}
float Cuadrado::valor(void){
	return area;
}
float Triangulo::valor(void){
	return area;
}
float Circulo::valor(void){
	return area;
}
class Figura{
	Cuadrado C;
	Triangulo T;
	Circulo Ci;
	public:
		void leerf(void);
		void procesof(void);
		void verf(void);
};
void Figura::leerf(void){
	C.leer();
	T.leer();
	Ci.leer();
	C.proceso();
	T.proceso();
	Ci.proceso();
}
void Figura::procesof(void){
	float vec[2];
	float tmp;
	int i;
	i=0;
	vec[i]=C.valor();
	i=1;
	vec[i]=T.valor();
	i=2;
	vec[i]=Ci.valor();
	for(int j=0;j<2;j++){
        for(int x=i+1;x<2-1;x++){
        if(vec[j]>vec[x]){
            tmp=vec[j];
            vec[j]=vec[x];
            vec[x]=tmp;
        }
    }
}
    cout<<"El area mas grande es de : "<<vec[2]<<endl;
    cout<<"El area del medio es de : "<<vec[1]<<endl;
    cout<<"El area mas pequeña es de : "<<vec[0]<<endl;
}
void Figura::verf(void){
	C.ver();
	T.ver();
	Ci.ver();
}
int main(){
	Figura F;
	F.leerf();
	F.verf();
	F.procesof();
}
