#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

using namespace std;

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();

int i;
void aleatoriovectorA(), MostrarB(), mostrarVectores(), RestarByA();
void aleatoriovectorB(), MostrarA(), alrevesA(), almacenarD(), SumarAyB();
int vecA[100], vecB[100], vecC[100], vecD[100], vecE[100], A[100], B[100];
int opcion=0;
int opcion_menu = 0;
int tamano,j, contador ;

struct Reses
{
	
	int edad, Peso;
	char NumeroDserie[100], Sexo;
} Capacidad[100];
	
int main(){
	
	
	
	srand((unsigned) time(NULL));

	do{
		
		//inicializacion del menu
		system("color F5");
		
	
		cout << "\n|--------------------------------------|";
		cout << "\n|        Ejercicios del taller         |";
		cout << "\n|--------------------------------------|";
		cout << "\n| 1.  Ejercicio 1                       |";
		cout << "\n| 2.  Ejercicio 2                      |";
		cout << "\n| 3.  Ejercicio 3                      |";
		cout<<  "\n| 4.  Ejercicio 4                      |";
		cout << "\n|------------------------------------- |";
		cout << "\n\n Escoja una Opcion: ";
		cin >> opcion_menu;
		//casos de mi menu
		switch(opcion_menu){
		case 1:
			cout << "\n\n Ejecutando el punto 1: \n\n";
			ejercicio1();				
			break;
		case 2:
			cout << "\n\n Ejecutando el punto 2: \n\n";
		  ejercicio2();
			break;
		case 3:
			cout << "\n\n Ejecutando el punto 3:  \n\n";
			ejercicio3();
			break;
		case 4:
			cout << "\n\n Ejecutando el punto 4: \n\n";
		   ejercicio4();
			break;
		case 5: 
			cout << "\n\n Programa finalizado...";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
			
		
		}
	} while (opcion_menu != 5);
	
	return 0;
}

void ejercicio1(){
	

	int bueno;
	int deficiente;
	int exelente;

	float notas[20];
	int regular;
	deficiente = 0;
	regular = 0;
	bueno = 0;
	exelente = 0;

	for (i=1;i<=20;i++) {
		notas[i-1] = (float)(rand()%50)/10;
	}
	cout << "==========>>>>>[Notas de los estudiantes]<<<<<==========" << endl;
	
	for (i=1;i<=20;i++) {
		cout << notas[i-1] << endl;
	}
	for (i=1;i<=20;i++) {
		if (notas[i-1]>=0 && notas[i-1]<=1.1) {
			deficiente = deficiente+1;
		}
		if (notas[i-1]>=1.1 && notas[i-1]<=3.1) {
			regular = regular+1;
		}
		if (notas[i-1]>=3.1 && notas[i-1]>=4.1) {
			bueno = bueno+1;
		}
		if (notas[i-1]>=4.1 && notas[i-1]<=5) {
			exelente = exelente+1;
		}
	}
	cout <<"--------------------------------------------------------- |"<< endl;
	cout << "Los estudiantes deficientes son:" << deficiente << endl;
	cout << "Los estudiantes regulares son:" << regular << endl;     
	cout << "Los estudiantes buenos son:" << bueno << endl;          
	cout << "Los estudiantes exelentes son:" << exelente << endl;    
	cout <<"----------------------------------------------------------|";


}

void ejercicio2(){
	
	srand((unsigned) time(NULL));
	cout << " Ingrese el tamaño del vector: ";
	cin >> tamano;

	do{
		
		//inicializacion del menu
		system("color F5");
		
	
		cout << "\n|-----------------------------------------------------------------------------------------------|";
		cout << "\n|                             MENU DE VECTORES                                                  |";
		cout << "\n|--------------------------------------|--------------------------------------------------------|";
		cout << "\n| 1. Llenar el vector A                |  5. Mostrar en D los semejantes de A y B               |";
		cout << "\n| 2. Llenar el vector B                |  6. En Vector E, los valores del Vector A inverso      |";
		cout << "\n| 3. Suma de los vectores A y B        |  7. Mostrar Vectores                                   |";
		cout<<  "\n| 4. Resta de los vectores B y A       |  8. Salir                                              |";
		cout << "\n|--------------------------------------|--------------------------------------------------------|";
		cout << "\n\n Escoja una Opcion: ";
		cin >> opcion_menu;
		//casos de mi menu
		switch(opcion_menu){
		case 1:
			cout << "\n\n LLENANDO VECTOR A:  \n\n";
			aleatoriovectorA();					//Llamada de la funcion
			break;
		case 2:
			cout << "\n\n LLENANDO VECTOR B: \n\n";
			aleatoriovectorB();
			break;
		case 3:
			cout << "\n\n SUMA DE VECTORES A Y B:  \n\n";
			SumarAyB();
			break;
		case 4:
			cout << "\n\n RESTA DE VECTORES B Y A: \n\n";
		   	RestarByA();
			break;
		case 5: 
			cout << "\n\n INMACENE VECTOR D:  \n\n";
			almacenarD();
			break;
		case 6:
			cout << "\n\n INVERSO VECTOR A:  \n\n";
			alrevesA();
			break;
		case 7: 
			cout << "\n\n MOSTRAR VECTORES: \n\n";
			mostrarVectores();
			break;
		case 8:
			cout << "\n\n Programa finalizado...";
			break;
		default:
			cout << "\n\n Opcion No Valida \n\n";
		}
	} while (opcion_menu != 8);
	
	
}
//Definicion de las funcioness
void aleatoriovectorA(){
	for( i = 0; i<tamano; i++){
 	 vecA[i]= rand()%(100);
	}
	for( i = 0; i<tamano; i++){
 	 cout<<vecA[i]<<endl;
	}
	
}

void aleatoriovectorB(){
	for( i= 0; i<tamano; i++){
	vecB[i]= -100 + rand()%(-100-100);
	}
	for( i = 0; i<tamano; i++){
 	 cout<<vecB[i]<<endl;
	}
	
}

void SumarAyB(){
	
	for(i = 0; i<tamano; i++){
		vecC[i] = vecA[i]+ vecB[i];
	}
	for( i = 0; i<tamano; i++){
		cout<<vecC[i]<<endl;	
	}
}

void RestarByA(){

	for(i = 0; i<tamano; i++){
		vecD[i] = vecB[i] - vecA[i];
	}

	for(i = 0; i<tamano; i++){
		cout<<vecD[i]<<endl;
	}
}

void almacenarD(){

	for(i = 0;i < tamano;i++){
		for(j = 0; j < tamano;j++){
			if(vecA[i]==vecB[i]){
				vecD[contador]=vecA[i];
				contador++;
			}
		}
	}
	

for(i = 0;i<contador;i++){
	cout<<"\nArreglo["<<i<<"] = "<<vecD[i];
	
	
}
}

void alrevesA(){
	
	
	for( i = tamano; i>=0;i--){
	vecE[i] = vecA[i];
	}
	
	for( i = tamano; i>=0;i--){
	cout<<vecE[i]<<endl;
	}
	
}

void MostrarA(){
for(i=0; i<tamano; i++){
A[i]= vecA[i];	
}
for(i=0; i<tamano; i++){
cout<< A[i]<<endl;	
}		
		
}

void MostrarB(){
for(i=0; i<tamano; i++){
B[i]= vecB[i];	
}
for(i=0; i<tamano; i++){
cout<< B[i]<<endl;	
}			
	
}
void mostrarVectores(){
	
	//Sub menu para mostar los vectores
	
	do{
	
		cout << "\n|------------------------------------------------------------------------------------------|";
		cout << "\n|                      Mostrar los vectores A, B, C, D                                     |";
		cout << "\n|--------------------------------------|---------------------------------------------------|";                                                                                                     
		cout << "\n|   1. Mostra el Vector A              |       3. Mostrar el Vector C       	              |";
		cout<<	"\n|   2. Mostrar el Vector B             |       4. Mostrar el Vector D                      |";                                                 
		cout << "\n|--------------------------------------|---------------------------------------------------|";
		cout << "\n\n Escoja una Opcion: ";
		cin >> opcion;
		switch(opcion){
			//definimos nuestros casos
		case 1:
			cout << "\n\n VECTOR A:  \n\n";
			MostrarA();							            
			break;
		case 2:
			cout << "\n\n  VECTOR B: \n\n";
			MostrarB();
			break;
		case 3:
			cout << "\n\n  VECTOR C:  \n\n";
			cout<<"La suma de los vectores A Y B es : "<<endl;
			SumarAyB();
			
			break;
		case 4:
			cout << "\n\n  VECTOR D: \n\n";
		    cout<<"La resta del vector B y A es : "<<endl;
			RestarByA();
			cout<<"\almacenarD: "<<endl;
		    almacenarD();
			break;
		default:
			cout << "\n\n Opcion No Valida por favor intente de nuevo \n\n";
		}
	} while(opcion != 4);
	

}
	


void ejercicio3(){
	
	
	
}

void ejercicio4(){
	
char Op='S';
      int Contador=0;
      string gorda[100];
      
		system("cls"); 	
        system("color 1");
        cout <<"\n|---------------------------------|";
        cout <<"\n| CARNES DE RES CAMAGUEY          |";
        cout <<"\n|---------------------------------|";
        for(int i=1;i<100;i++){
        	while (Op == 'S') 
	    {
	    	
		cout<<"\n Ingrese el Numero de Serie: \n";
		cin>>Capacidad[i].NumeroDserie;
		
        cout<<"\n La Edad es de: \n";
        cout<<"\n";
        Capacidad[i].edad =1+rand()%10;
        cout<< Capacidad[i].edad,"\n";
        cin.sync();
        cout << "\n";
        cout <<" \nDigite :";
        cout << "\n";
        cout << "\n|--------------------|";
        cout << "\n| M-> Macho          |";
		cout << "\n|--------------------|";
		cout << "\n| H -> Hembra:       |" ;
		cout << "\n|--------------------|";
		  cout << "\n";
		cout << "\nDijite el sexo: ";
        cin >> Capacidad[i].Sexo;
        Capacidad[i].Sexo = toupper(Capacidad[i].Sexo);
        
        if ((Capacidad[i].Sexo =='M') || (Capacidad[i].Sexo =='H'))
		{
		cout<<"\n Sexo Guardado con Exito \n";
		}
		else
        {
		cout<<"\n Digite un Sexo Valido... \n";
        }
        
        cin.sync();
        cout<<"\n Ingrese el Peso en Kilogramos \n";
        cin>>Capacidad[i].Peso;
        cout<<"\n Peso Registrado (Kg) \n";
        
        if ((Capacidad[i].Sexo == 'H') && (Capacidad[i].Peso>40)){
        	Contador=Contador+1;
        	
        	gorda[i] = Capacidad[i].NumeroDserie;
        
        	cout<<"\n El numero total de Hembras Obesas registradas es de: "<<Contador<<" \n\n ";
            cout<<"\nNumero de serie de las hembras con cobrepeso:";
            cout << "\n";
			for (i=1;i<=Contador;i++){
		  	
          	cout<<"\n"<<gorda[i]<<"\n";
          	
		  }
		  
		}
		else
		{
			cout<<"\n El numero total de Hembras Obesas registradas es de: "<<Contador<<" \n\n ";
		}
        
		do {
        	cout<< "\n DESEA CONTINUAR  S/N : \n" ;
        	Op = getche();
        	Op = toupper(Op);
              }  while ((Op != 'S') && (Op != 'N'));
        
          }
          
      }
        
        	
	
}
