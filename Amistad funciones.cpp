#include <iostream>
using namespace std;

class S;class H;
class B{
	char nom[30];
    int cod;
    float nota[5];
    float promedio;
    public:
	    void leer(void);
	    void ver(void);
	    friend void calcularpromedio(B,S,H);
	    friend void vocales(B,S,H);
};
class S{
	char nom[30];
    int cod;
    float nota[5];
    float promedio;
    public:
	    void leer(void);
	    void ver(void);
	    friend void calcularpromedio(B,S,H);
	    friend void vocales(B,S,H);
};
class H{
	char nom[30];
    int cod;
    float nota[5];
    float promedio;
    public:
	    void leer(void);
	    void ver(void);
	    friend void calcularpromedio(B,S,H);
	    friend void vocales(B,S,H);
};
void calcularpromedio(B b,S s,H h){
	float pro;
	pro=(b.promedio+s.promedio+h.promedio)/3.0;
	if(pro>4.75&&pro<=5.0)
    	pro=5.0;
    if(pro>4.25&&pro<4.75)
    	pro=4.5;
    if(pro>3.75&&pro<4.25)
    	pro=4.0;
    if(pro>3.25&&pro<3.75)
    	pro=3.5;
    if(pro>2.75&&pro<3.25)
    	pro=3.0;
    if(pro>2.25&&pro<2.75)
    	pro=2.5;
    if(pro>1.75&&pro<2.25)
    	pro=2.0;
    if(pro>1.25&&pro<1.75)
    	pro=1.5;
    if(pro>0.75&&pro<1.25)
    	pro=1.0;
    if(pro>0.25&&pro<0.75)
    	pro=0.5;
    if(pro>0&&pro<0.25)
    	pro=0;
	cout<<"Promedio total : "<<pro<<endl;
}
void vocales(B b,S s,H h){
	int vb;
	int vs;
	int vh;
	for(int i=0;i<30;i++){
		switch(b.nom[i]){
			case 'a': vb++; break;case 'A': vb++; break;
			case 'e': vb++; break;case 'E': vb++; break;
			case 'i': vb++; break;case 'I': vb++; break;
			case 'o': vb++; break;case 'O': vb++; break;
			case 'u': vb++; break;case 'U': vb++; break;
		}
	}
	for(int i=0;i<30;i++){
		switch(s.nom[i]){
			case 'a': vs++; break;case 'A': vs++; break;
			case 'e': vs++; break;case 'E': vs++; break;
			case 'i': vs++; break;case 'I': vs++; break;
			case 'o': vs++; break;case 'O': vs++; break;
			case 'u': vs++; break;case 'U': vs++; break;
		}
	}
	for(int i=0;i<30;i++){
		switch(h.nom[i]){
			case 'a': vh++; break;case 'A': vh++; break;
			case 'e': vh++; break;case 'E': vh++; break;
			case 'i': vh++; break;case 'I': vh++; break;
			case 'o': vh++; break;case 'O': vh++; break;
			case 'u': vh++; break;case 'U': vh++; break;
		}
	}
	cout<<"La cantidad de vocales en el estudiante B es : "<<vb<<endl;
	cout<<"La cantidad de vocales en el estudiante S es : "<<vs<<endl;
	cout<<"La cantidad de vocales en el estudiante H es : "<<vh<<endl;
}
void B::leer(void){
	cout<<"Digite nombre"<<endl;
	getchar();
	gets(nom);
	cout<<"Digite codigo"<<endl;
	cin>>cod;
	for(int i=0;i<5;i++){
	cout<<"Digite la nota "<<i+1<<endl;
	cin>>nota[i];
	}
	promedio=(nota[0]+nota[1]+nota[2]+nota[3]+nota[4])/5.0;
}
void S::leer(void){
	cout<<"Digite nombre"<<endl;
	getchar();
	gets(nom);
	cout<<"Digite codigo"<<endl;
	cin>>cod;
	for(int i=0;i<5;i++){
	cout<<"Digite la nota "<<i+1<<endl;
	cin>>nota[i];
	}
	promedio=(nota[0]+nota[1]+nota[2]+nota[3]+nota[4])/5.0;
}
void H::leer(void){
	cout<<"Digite nombre"<<endl;
	getchar();
	gets(nom);
	cout<<"Digite codigo"<<endl;
	cin>>cod;
	for(int i=0;i<5;i++){
	cout<<"Digite la nota "<<i+1<<endl;
	cin>>nota[i];
	}
	promedio=(nota[0]+nota[1]+nota[2]+nota[3]+nota[4])/5.0;
}
void B::ver(void){
	cout<<"Nombre : "<<nom<<endl;
	cout<<"Codigo : "<<cod<<endl;
	for(int i=0;i<5;i++){
	cout<<"Nota "<<i+1<<" : "<<nota[i]<<endl;
	}
}
void S::ver(void){
	cout<<"Nombre : "<<nom<<endl;
	cout<<"Codigo : "<<cod<<endl;
	for(int i=0;i<5;i++){
	cout<<"Nota "<<i+1<<" : "<<nota[i]<<endl;
	}
}
void H::ver(void){
	cout<<"Nombre : "<<nom<<endl;
	cout<<"Codigo : "<<cod<<endl;
	for(int i=0;i<5;i++){
	cout<<"Nota "<<i+1<<" : "<<nota[i]<<endl;
	}
}
int main(){
	B uno;
	S dos;
	H tres;
	uno.leer();
	dos.leer();
	tres.leer();
	uno.ver();
	dos.ver();
	tres.ver();
	calcularpromedio(uno,dos,tres);
	vocales(uno,dos,tres);
}
