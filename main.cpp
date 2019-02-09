/*
Ejemplo de Menu con múltiples extensiones y opciones.
Recopilatorio de Ejercicios en C++:
	Manipulacion de Bits
	Generacion de Numeros Aleatorios
	Punteros y Referencias
	Archivos
	Recursion
	Metodos de ordenamiento
	Tipos de Datos Abstractos
	Ejemplos Varios
	
*/
#include <random>
#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <fstream>
#include <direct.h>
#include <iomanip>
#include <conio.h>
using namespace std;
struct Nodo{
	int dato;
	Nodo *sgt;
};
struct Nodo2{
	Nodo2 *ant;
	int dato;
	Nodo2 *sgt;
};
struct NodoArbol{
	int valor;
	NodoArbol *izq;
	NodoArbol *der;
};
typedef Nodo2* tLista;
struct listaDE{
	tLista ini;
	tLista fin;
};
typedef Nodo* pLista;
typedef Nodo* tPila;
typedef Nodo* pCola;
typedef NodoArbol* ABB;
struct Cola{
	pCola delante;
	pCola atras;
};
struct Persona{
	char sexo;
	char nombre[20];
	Persona *sgt;
};
struct ColaPersona{
	Persona *delante;
	Persona *atras;
};
pLista lista = NULL;
tPila pila = NULL;
pCola primero = NULL;
pCola ultimo = NULL;
listaDE listita;
ABB arbol = NULL;

int start(); int menuPrincipal(); int menuBits(); int menuAleatorios();
int menuPunteros(); int menuArchivos(); int menuRecursion(); 
int menuOrdenamiento(); int menuDatosAbstractos(); int menuListasSimples();
int menuListasDobles(); int menuColas(); int menuPilas(); int menuArboles();
int menuEjemplos();

int finBits(int OP); int finAleatorios(int OP); int finPunteros(int OP);
int finArchivos(int OP); int finRecursion(int OP); int finOrdenamiento(int OP);
int finListas(int OP); int finListasDobles(int OP); int finPilas(int OP);
int finColas(int OP); int finArboles(int OP); int finEjemplos(int OP);

void bits1(); void bits2(); void bits3(); void bits4(); void bits5();
void impBits(int n);void encripta(char *f,int n); void encriptaNeg(char *f);
union flotante{
	unsigned entero; float f;
};
void aleat1(); void aleat2(); void aleat3(); void aleat4(); void aleat5();
void combinaAleatoria(int n, int r, int x[]); int poisson(float lambda);
void puntero1(); void puntero2(); void puntero3(); void puntero4(); void puntero5();
void intercambia(int &a, int &b);void makeVector(int v[],int n);
void seeVecotr(int v[],int n);void ordenaPunteros(int n, int *p);
bool esPalindroma(char *p);
void arch1(); void arch2(); void arch3(); void arch4(); void arch5();
void crearArchivo(char *archivo);
int const LIM = 50; void Cortar(char *origen); void Unir(char *origen);
void comprimir(char *origen,char *destino);void descomprimir(char *origen,char *destino);
void recur1(); void recur2(); void recur3(); void recur4(); void recur5();
int fibonacci(int n); unsigned long long factorial(int n); int mcd(int a,int b);
void permuta(char a[],int n);void Hanoi(int n,char a,char c,char b);
unsigned long int veces = 0;
void ord1(); void ord2(); void ord3(); void ord4(); void ord5();
void bubble(int v[],int n);void insertion(int v[],int n);
void selectionSort(int v[],int n); 
void intercala(int *a, int na, int *b, int nb, int *v);
void mergesort(int v[], int n); void blublle2directions(int v[],int n);
void mostrarLista(pLista lista);void insertarInicio(pLista &lista, int v);
void insertarFin(pLista &lista, int v); void insertaPos(pLista &lista, int pos, int v);
void modificaPos(pLista &lista, int pos, int v); void eliminaInicio(pLista &lista);
void eliminaFin(pLista &lista); void eliminaPos(pLista &lista, int pos);
void sortLista(pLista &lista); void eliminaLista(pLista &lista);
int menuOp2(); int menuOp4();
void initializer(listaDE &lista); void mostrarListaDE(listaDE lista);
void mostrarListaInversaDE(listaDE lista); void insertaIniDE(listaDE &lista,int v);
void insertaFinDE(listaDE &lista,int v); void eliminaIniDE(listaDE &lista);
void eliminaFinDE(listaDE &lista);
void push(tPila &pila, int v); int pop(tPila &pila); void mostrarPila(tPila pila);
void mostrarCola(pCola cola); void encolar(pCola &primero,pCola &ultimo,int v);
int desEncolar(pCola &primero,pCola &ultimo);

void inicializaP(ColaPersona &);void encolaP(ColaPersona &, Persona);
Persona desencolaP(ColaPersona &); void verColaP(ColaPersona);

void inicializa(Cola &q); void encola(Cola &q,int n); int desencola(Cola &q);
void verCola(Cola q);
void inserta(ABB &arbol,int n); void postorden(ABB arbol); void preorden(ABB arbol);
void enorden(ABB arbol); void verArbol(ABB arbol,int nro);
void ejemplo1(); void ejemplo2(); void ejemplo3(); void ejemplo4(); void ejemplo5(); 
char a1=' ',a2=' ',a3=' ',b1=' ',b2=' ',b3=' ',c1=' ',c2=' ',c3=' ',turno,again;
int win=-1,jug,i=0;
void tablero();
int cuerpo[200][2];
int n = 1, tam = 10, dir = 3;
int x = 10, y = 12;
int xc = 30, yc = 15;
int velocidad = 60;
char tecla;

string vacio[3][3] = {"-","-","-","-","-","-","-","-","-"};
int turnos = 0, info=0, info2=0, X, Y, gana=0, replay=0;

#define C "+" // Cruce
#define H "-" // Horizontal
#define V "|" // Vertical
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ESC 27
int const MAX = 50;

void Obtener_Longitudes();
bool Validar_Acceso(char dato1[],int Num_dato1, char dato2[],int Num_dato2);
bool Acceso(); int loged();

char usuario[]={'a','d','m','i','n'};
char contrasena[]={'c','e','r','o','s'};
int contador_usuario = 0;
int contador_contrasena = 0;
char user[50], pass[50];

int main(int argc, char *argv[]) {
	start();
	Sleep(5000);
	system("cls");
	int loggin = loged();
	while(loggin!=1){
		system("cls");
		cout << "Intentelo nuevamente" << endl;
		loggin = loged();
	}
	initializer(listita);
	system("cls");
	int op;
	do{
		op = menuPrincipal();
		switch(op){
		case 1:
			system("cls");
			op = menuBits();
			break;
		case 2:
			system("cls");
			op = menuAleatorios();
			break;
		case 3:
			system("cls");
			op = menuPunteros();
			break;
		case 4:
			system("cls");
			op = menuArchivos();
			break;
		case 5:
			system("cls");
			op = menuRecursion();
			break;
		case 6:
			system("cls");
			op = menuOrdenamiento();
			break;
		case 7:
			system("cls");
			op = menuDatosAbstractos();
			break;
		case 8:
			system("cls");
			op = menuEjemplos();
			break;
		case 9:
			system("cls");
			cout << "Hasta luego" << endl;
			break;
		default:
			system("cls");
			cout << "Opcion no valida " << endl;
			break;
		};
	} while(op != 9);
	return 0;
}
int loged(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                       INICIAR SESION                            =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       Usuario                                                   =" << endl;
	cout << "=       Password                                                  =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	if (Acceso()==true) {
		return 1;
	} else {
		cout<<"\n\n Loging incorrecto\n\n";
		return 0;
	}
	
}
int start(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                       Integrantes                               =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       Brando Carrera Tirado                                     =" << endl;
	cout << "=       Luis Quiroz Burga                                         =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
}
int menuFinprog(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                 ¿Que desea realizar ahora?                      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Regresar al Menu Anterior                             =" << endl;
	cout << "=       [2] Regresar al Menu Principal                            =" << endl;
	cout << "=       [3] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int v; cin >> v;
	return v;
}
int menuPrincipal(){
	system("cls");
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                       Menu Principal                            =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Manipulacion de Bits                                  =" << endl;
	cout << "=       [2] Generacion de Numeros Aleatorios                      =" << endl;
	cout << "=       [3] Punteros y Referencias                                =" << endl;
	cout << "=       [4] Archivos                                              =" << endl;
	cout << "=       [5] Recursion                                             =" << endl;
	cout << "=       [6] Metodos de ordenamiento                               =" << endl;
	cout << "=       [7] Tipos de Datos Abstractos                             =" << endl;
	cout << "=       [8] Ejemplos Varios                                       =" << endl;
	cout << "=       [9] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int v; cin >> v;
	return v;
}
int menuBits(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                 Menu Manipulación de Bits                       =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Uso de los operadores a nivel de bits                 =" << endl;
	cout << "=       [2] Mostrar los bits de un numero como se ve en memoria   =" << endl;
	cout << "=       [3] Encriptar Frase                                       =" << endl;
	cout << "=       [4] Encriptar Frase por Negacion de Bits                  =" << endl;
	cout << "=       [5] Mostar los bits de un numero punto flotante           =" << endl;
	cout << "=       [6] Regresar al menu principal                            =" << endl;
	cout << "=       [7] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
		system("cls");
		bits1();
		int op1;
		op1 = menuFinprog();
		finBits(op1);
		break;
	case 2:
		system("cls");
		bits2();
		int op2;
		op2 = menuFinprog();
		finBits(op2);
		break;
	case 3:
		system("cls");
		bits3();
		int op3;
		op3 = menuFinprog();
		finBits(op3);
		break;
	case 4:
		system("cls");
		bits4();
		int op4;
		op4 = menuFinprog();
		finBits(op4);
		break;
	case 5:
		system("cls");
		bits5();
		int op5;
		op5 = menuFinprog();
		finBits(op5);
		break;
	case 6:
		system("cls");
		break;
	case 7:
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
	default:
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuBits();
		break;
	};
}
int menuAleatorios(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=            Menu Generacion de numeros aleatorios                =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Genera tiros de un Dado                               =" << endl;
	cout << "=       [2] Muestra una distribucion Normal                       =" << endl;
	cout << "=       [3] Muestra una distribucion Exponencial                  =" << endl;
	cout << "=       [4] Combinacion Aleatoria                                 =" << endl;
	cout << "=       [5] Muestra una distribucion de Poisson con media Lambda  =" << endl;
	cout << "=       [6] Regresar al menu principal                            =" << endl;
	cout << "=       [7] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
		system("cls");
		aleat1();
		int op1;
		op1 = menuFinprog();
		finAleatorios(op1);
		break;
	case 2:
		system("cls");
		aleat2();
		int op2;
		op2 = menuFinprog();
		finAleatorios(op2);
		break;
	case 3:
		system("cls");
		aleat3();
		int op3;
		op3 = menuFinprog();
		finAleatorios(op3);
		break;
	case 4:
		system("cls");
		aleat4();
		int op4;
		op4 = menuFinprog();
		finAleatorios(op4);
		break;
	case 5:
		system("cls");
		aleat5();
		int op5;
		op5 = menuFinprog();
		finAleatorios(op5);
		break;
	case 6:
		system("cls");
		break;
	case 7:
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
	default:
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuAleatorios();
		break;
	};
}
int menuPunteros(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=            Menu Punteros y Referencias                          =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Tipos de datos y la direccion de memoria que ocupa    =" << endl;
	cout << "=       [2] Intercambia dos Valores                               =" << endl;
	cout << "=       [3] Direcciones de memoria de los elementos de un arreglo =" << endl;
	cout << "=       [4] Ordenar un arreglo mediante punteros                  =" << endl;
	cout << "=       [5] Determina si una palabra es palindroma con punteros   =" << endl;
	cout << "=       [6] Regresar al menu principal                            =" << endl;
	cout << "=       [7] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
		system("cls");
		puntero1();
		int op1;
		op1 = menuFinprog();
		finPunteros(op1);
		break;
	case 2:
		system("cls");
		puntero2();
		int op2;
		op2 = menuFinprog();
		finPunteros(op2);
		break;
	case 3:
		system("cls");
		puntero3();
		int op3;
		op3 = menuFinprog();
		finPunteros(op3);
		break;
	case 4:
		system("cls");
		puntero4();
		int op4;
		op4 = menuFinprog();
		finPunteros(op4);
		break;
	case 5:
		system("cls");
		puntero5();
		int op5;
		op5 = menuFinprog();
		finPunteros(op5);
		break;
	case 6:
		system("cls");
		break;
	case 7:
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
	default:
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuPunteros();
		break;
	};
}
int menuArchivos(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                      Menu Archivos                              =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Escribir un Archivo                                   =" << endl;
	cout << "=       [2] Leer Archivo                                          =" << endl;
	cout << "=       [3] Copiar Archivo                                        =" << endl;
	cout << "=       [4] Hacha                                                 =" << endl;
	cout << "=       [5] Comprimir y Descomprimir Archivo                       =" << endl;
	cout << "=       [6] Regresar al menu principal                            =" << endl;
	cout << "=       [7] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=         *Importante: Crear la carpta T3_archivos en el Disco D  =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
		system("cls");
		arch1();
		int op1;
		op1 = menuFinprog();
		finArchivos(op1);
		break;
	case 2:
		system("cls");
		arch2();
		int op2;
		op2 = menuFinprog();
		finArchivos(op2);
		break;
	case 3:
		system("cls");
		arch3();
		int op3;
		op3 = menuFinprog();
		finArchivos(op3);
		break;
	case 4:
		system("cls");
		arch4();
		int op4;
		op4 = menuFinprog();
		finArchivos(op4);
		break;
	case 5:
		system("cls");
		arch5();
		int op5;
		op5 = menuFinprog();
		finArchivos(op5);
		break;
	case 6:
		system("cls");
		break;
	case 7:
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
	default:
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuArchivos();
		break;
	};
}
int menuRecursion(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                      Menu Recursion                             =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Serie Fibonacci                                       =" << endl;
	cout << "=       [2] Factorial de un Numero                                =" << endl;
	cout << "=       [3] Maximo comun Divisor                                  =" << endl;
	cout << "=       [4] Permuta Letras                                        =" << endl;
	cout << "=       [5] Torres de Hanoi                                       =" << endl;
	cout << "=       [6] Regresar al menu principal                            =" << endl;
	cout << "=       [7] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
		system("cls");
		recur1();
		int op1;
		op1 = menuFinprog();
		finRecursion(op1);
		break;
	case 2:
		system("cls");
		recur2();
		int op2;
		op2 = menuFinprog();
		finRecursion(op2);
		break;
	case 3:
		system("cls");
		recur3();
		int op3;
		op3 = menuFinprog();
		finRecursion(op3);
		break;
	case 4:
		system("cls");
		recur4();
		int op4;
		op4 = menuFinprog();
		finRecursion(op4);
		break;
	case 5:
		system("cls");
		recur5();
		int op5;
		op5 = menuFinprog();
		finRecursion(op5);
		break;
	case 6:
		system("cls");
		break;
	case 7:
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
	default:
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuRecursion();
		break;
	};
}
int menuOrdenamiento(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                Menu Metodos de Ordenamiento                     =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Ordenamiento por Burbuja                              =" << endl;
	cout << "=       [2] Ordenamiento por Seleccion Directa                    =" << endl;
	cout << "=       [3] Ordenamiento por Insercion Directa                    =" << endl;
	cout << "=       [4] Ordenamiento por MergeSort                            =" << endl;
	cout << "=       [5] Ordenamiento por Burbuja en dos direcciones           =" << endl;
	cout << "=       [6] Regresar al menu principal                            =" << endl;
	cout << "=       [7] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
		system("cls");
		ord1();
		int op1;
		op1 = menuFinprog();
		finOrdenamiento(op1);
		break;
	case 2:
		system("cls");
		ord2();
		int op2;
		op2 = menuFinprog();
		finOrdenamiento(op2);
		break;
	case 3:
		system("cls");
		ord3();
		int op3;
		op3 = menuFinprog();
		finOrdenamiento(op3);
		break;
	case 4:
		system("cls");
		ord4();
		int op4;
		op4 = menuFinprog();
		finOrdenamiento(op4);
		break;
	case 5:
		system("cls");
		ord5();
		int op5;
		op5 = menuFinprog();
		finOrdenamiento(op5);
		break;
	case 6:
		system("cls");
		break;
	case 7:
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
	default:
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuOrdenamiento();
		break;
	};
}
int menuDatosAbstractos(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=               Menu Tipos de Datos Abstractos                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Listas Simples                                        =" << endl;
	cout << "=       [2] Listas Enlazadas Dobles                               =" << endl;
	cout << "=       [3] Pilas                                                 =" << endl;
	cout << "=       [4] Colas                                                 =" << endl;
	cout << "=       [5] Arboles                                               =" << endl;
	cout << "=       [6] Regresar al menu principal                            =" << endl;
	cout << "=       [7] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	do{
		switch(opcion){
		case 1:
			system("cls");
			opcion = menuListasSimples();
			break;
		case 2:
			system("cls");
			opcion = menuListasDobles();
			break;
		case 3:
			system("cls");
			opcion = menuPilas();
			break;
		case 4:
			system("cls");
			opcion = menuColas();
			break;
		case 5:
			system("cls");
			opcion = menuArboles();
			break;
		case 6:
			system("cls");
			break;
		default:
			system("cls");
			cout << "Opcion no Valida" << endl;
			opcion = menuDatosAbstractos();
			break;
		};
	} while(opcion != 6);
}
int menuListasSimples(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                    Menu Listas Simples                          =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Mostrar Lista                                         =" << endl;
	cout << "=       [2] Insertar Elemento                                     =" << endl;
	cout << "=       [3] Modificar Elemento                                    =" << endl;
	cout << "=       [4] Eliminar Elemento                                     =" << endl;
	cout << "=       [5] Ordenar Lista                                         =" << endl;
	cout << "=       [6] Limpiar Lista                                         =" << endl;
	cout << "=       [7] Regresar al menu Datos Abstractos                     =" << endl;
	cout << "=       [8] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
	{
		system("cls");
		cout << "[1] Mostrar Lista" << endl;
		mostrarLista(lista);
		getch();
		int op1;
		op1 = menuFinprog();
		finListas(op1);
		break;
	}
	case 2:
	{
		system("cls");
		cout << "[2] Insertar Elemento " << endl;
		system("cls");
		int selectMenu2 = 0;
		do{
			selectMenu2 = menuOp2();
			switch(selectMenu2){
			case 1:{
				system("cls");
				cout << "		Inserta al Inicio" << endl;
				cout << "Ingresa elemento: ";
				int v; cin >> v;
				insertarInicio(lista,v);
				mostrarLista(lista);
				getch();
				system("cls");
				break;
			}
			case 2:{
					system("cls");
					cout << "		Inserta al Final" << endl;
					cout << "Ingresa elemento: ";
					int v1; cin >> v1;
					insertarFin(lista,v1);
					mostrarLista(lista);
					getch();
					system("cls");
					break;
				}
			case 3:{
						system("cls");
						cout << "		Inserta en cualquier posicion" << endl;
						cout << "Ingresa Posicion: ";
						int pos; cin >> pos;
						cout << "Ingresa elemento: ";
						int v2; cin >> v2;
						insertaPos(lista,pos,v2);
						mostrarLista(lista);
						getch();
						system("cls");
						break;
					}
			case 4:
							break;
			default:{
				system("cls");
				cout << "Opcion no valida" << endl;
				getch();
				system("cls");
			}
			};
		}while(selectMenu2 != 4);
		int op2;
		op2 = menuFinprog();
		finListas(op2);
		break;
	}
	case 3:
	{
		system("cls");
		cout << "[3] Modificar Elemento    " << endl;
		cout << "		Modificar Elemento" << endl;
		mostrarLista(lista);
		cout << "Ingrese nuevo elemento: ";
		int v3; cin >> v3;
		cout << "Ingrese la posicion del elemento a cambiar: ";
		int pos1; cin >> pos1;
		modificaPos(lista,pos1,v3);
		mostrarLista(lista);
		getch();
		int op3;
		op3 = menuFinprog();
		finListas(op3);
		break;
	}
	case 4:
	{
		system("cls");
		cout << "[4] Eliminar Elemento  " << endl;
		int selectMenu4 = 0;
		do{
			selectMenu4 = menuOp4();
			switch(selectMenu4){
			case 1:
				system("cls");
				eliminaInicio(lista);
				mostrarLista(lista);
				getch();
				system("cls");
				break;
			case 2:
				system("cls");
				eliminaFin(lista);
				mostrarLista(lista);
				getch();
				system("cls");
				break;
			case 3:
				system("cls");
				cout << "		Elimina cualquier posicion de la lista" << endl;
				cout << "Ingrese Posicion a eliminar: ";
				int pos2; cin >> pos2;
				eliminaPos(lista,pos2);
				mostrarLista(lista);
				getch();
				system("cls");
				break;
			case 4:
				system("cls");
				break;
			default:
				system("cls");
				cout << "Opcion no valida" << endl;
				getch();
				system("cls");
				break;
			}
		} while(selectMenu4 != 4);
		int op4;
		op4 = menuFinprog();
		finListas(op4);
		break;
	}
	case 5:
	{
		system("cls");
		cout << "[5] Ordenar Lista   " << endl;
		sortLista(lista);
		mostrarLista(lista);
		getch();
		int op5;
		op5 = menuFinprog();
		finListas(op5);
		break;
	}
	case 6:
	{
		system("cls");
		eliminaLista(lista);
		getch();
		system("cls");
		int op6;
		op6 = menuFinprog();
		finListas(op6);
		break;
	}
	case 7:
	{
		system("cls");
		opcion = menuDatosAbstractos();
		break;
	}
	case 8:
	{
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
	}
	default:
	{
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuListasSimples();
		break;
	}
	};
}
int menuListasDobles(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=              Menu Listas Doblemente Enlazadas                   =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Mostrar Lista Doblemente Enlazada                     =" << endl;
	cout << "=       [2] Insertar al Inicio de la Lista Doblemente Enlazada    =" << endl;
	cout << "=       [3] Insertar al Final de la Lista Doblemente Enlazada     =" << endl;
	cout << "=       [4] Eliminar al Inicio de la Lista Doblemente Enlazada    =" << endl;
	cout << "=       [5] Eliminar al Final de la Lista Doblemente Enlazada     =" << endl;
	cout << "=       [6] Mostrar la Lista Doblemente Enlazada Invertida        =" << endl;
	cout << "=       [7] Regresar al menu Datos Abstractos                     =" << endl;
	cout << "=       [8] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
		system("cls");
		cout << "[1] Mostrar Lista Doblemente Enlazada" << endl;
		mostrarListaDE(listita);
		int op1;
		op1 = menuFinprog();
		finListasDobles(op1);
		break;
	case 2:
		system("cls");
		cout << "[2] Insertar al Inicio de la Lista DE" << endl;
		cout << "Ingresa el elemento a insertar: ";
		int v; cin >> v;
		insertaIniDE(listita,v);
		mostrarListaDE(listita);
		int op2;
		op2 = menuFinprog();
		finListasDobles(op2);
		break;
	case 3:
		system("cls");
		cout << "[3] Insertar al Final de la Lista Doblemente Enlazada" << endl;
		cout << "Ingresa el elemento a insertar: ";
		int v1; cin >> v1;
		insertaFinDE(listita,v1);
		mostrarListaDE(listita);
		int op3;
		op3 = menuFinprog();
		finListasDobles(op3);
		break;
	case 4:
		system("cls");
		cout << "[4] Eliminar al Inicio de la Lista Doblemente Enlazada " << endl;
		eliminaIniDE(listita);
		cout << "Elemento Eliminado" << endl;
		mostrarListaDE(listita);
		int op4;
		op4 = menuFinprog();
		finListasDobles(op4);
		break;
	case 5:
		system("cls");
		cout << "[5] Eliminar al Final de la Lista Doblemente Enlazada" << endl;
		eliminaFinDE(listita);
		cout << "Elemento Eliminado" << endl;
		mostrarListaDE(listita);
		int op5;
		op5 = menuFinprog();
		finListasDobles(op5);
		break;
	case 6:
		system("cls");
		cout << "[6] Mostrar la Lista Doblemente Enlazada Invertida" << endl;
		cout << "Lista Original: " << endl;
		mostrarListaDE(listita);
		cout << "Lista Invertida: " << endl;
		mostrarListaInversaDE(listita);
		int op6;
		op6 = menuFinprog();
		finListasDobles(op6);
		break;
	case 7:
		system("cls");
		opcion = menuDatosAbstractos();
		break;
	case 8:
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
	default:
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuListasDobles();
		break;
	};
}
int menuPilas(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                         Menu Pilas                              =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Mostrar Pila                                          =" << endl;
	cout << "=       [2] Apliar                                                =" << endl;
	cout << "=       [3] Desapilar                                             =" << endl;
	cout << "=       [4] Determinar si un numero es capicua                    =" << endl;
	cout << "=       [5] Convertir un numero en base 10 a una base menor que 16=" << endl;
	cout << "=       [6] Regresar al menu Datos Abstractos                     =" << endl;
	cout << "=       [7] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
		{
		system("cls");
		cout << "[1] Mostrar Pila" << endl;
		mostrarPila(pila);
		getch();
		int op1;
		op1 = menuFinprog();
		finPilas(op1);
		break;
		}
	case 2:
		{
		system("cls");
		cout << "[2] Apliar" << endl;
		mostrarPila(pila);
		cout << "Ingrese el elemento a apilar: ";
		int v; cin >> v;
		push(pila,v);
		mostrarPila(pila);
		getch();
		int op2;
		op2 = menuFinprog();
		finPilas(op2);
		break;
		}
	case 3:
		{
		system("cls");
		cout << "[3] Desapilar" << endl;
		mostrarPila(pila);
		cout << "Desapilando : " << pop(pila);
		mostrarPila(pila);
		getch();
		int op3;
		op3 = menuFinprog();
		finPilas(op3);
		break;
		}
	case 4:
		{
		system("cls");
		cout << "[4] Determinar si un numero es capicua " << endl;
		tPila p = NULL;
		cout << "Ingrese el numero: ";
		int n; cin >> n;
		int Nro = n;
		while(Nro>0){
			push(p,Nro%10);
			Nro /= 10;
		}
		int band = 1;
		Nro = n;
		while(Nro>0){
			if(Nro%10 != pop(p))
				band = 0;
			Nro /= 10;
		}
		if(band == 1)
			  cout << "Es capicua" << endl;
		else
			cout << "No es capicua" << endl;
		int op4;
		op4 = menuFinprog();
		finPilas(op4);
		break;
		}
	case 5:
		{
		system("cls");
		cout << "[5] Convertir un numero en base 10 a una base menor que 16" << endl;
		tPila p = NULL;
		cout << "Ingrese el numero: ";
		int n1; cin >> n1;
		cout << "Nueva base: ";
		int b; cin >> b;
		int nro = n1;
		while(nro>0){
			push(p,nro%b);
			nro /= b;
		}
		cout << n1 << " en base " << b << " es: ";
		while(p){
			int d = pop(p);
			if(d<10) cout << d;
			else cout << (char) (55+d);
		}
		int op5;
		op5 = menuFinprog();
		finPilas(op5);
		break;
		}
	case 6:
		{
		system("cls");
		opcion = menuDatosAbstractos();
		break;
		}
	case 7:
		{
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
		}
	default:
		{
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuPilas();
		break;
		}
	};
}

int menuColas(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                        Menu Colas                               =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Mostrar Cola                                          =" << endl;
	cout << "=       [2] Encolar                                               =" << endl;
	cout << "=       [3] Desencolar                                            =" << endl;
	cout << "=       [4] Intercalar los Elementos de dos colas                 =" << endl;
	cout << "=       [5] Dividir cola en una de hombres y otra de mujeres      =" << endl;
	cout << "=       [6] Regresar al menu Datos Abstractos                     =" << endl;
	cout << "=       [7] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
		system("cls");
		cout << "[1] Mostrar Cola" << endl;
		mostrarCola(primero);
		getch();
		int op1;
		op1 = menuFinprog();
		finColas(op1);
		break;
	case 2:
		system("cls");
		cout << "[2] Encolar   " << endl;
		mostrarCola(primero);
		cout << "Ingrese el elemento a encolar: ";
		int v; cin >> v;
		encolar(primero,ultimo,v);
		mostrarCola(primero);
		getch();
		int op2;
		op2 = menuFinprog();
		finColas(op2);
		break;
	case 3:
		system("cls");
		cout << "[3] Desencolar   " << endl;
		mostrarCola(primero);
		cout << "Desencolando a: " << desEncolar(primero,ultimo) << endl;
		mostrarCola(primero);
		getch();
		int op3;
		op3 = menuFinprog();
		finColas(op3);
		break;
	case 4:
		{
		system("cls");
		cout << "[4] Intercalar los Elementos de dos colas" << endl;
		Cola q, q1, q2;
		inicializa(q); inicializa(q1); inicializa(q2);
		cout << "Numero de elementos de la primera cola: ";
		int n1; cin >> n1;
		for(int i=1; i<=2*n1-1;i+=2){
			encola(q1,i);
		}
		cout << "Cola 1: "; verCola(q1);
		cout << "Numero de elementos de la segunda cola: ";
		int n2; cin >> n2;
		for(int i=2; i<=2*n2;i+=2){
			encola(q2,i);
		}
		cout << "Cola 2: "; verCola(q2);
		//Intercalamos
		while((q1.delante!=NULL)&&(q2.delante!=NULL)){
			encola(q,desencola(q1));
			encola(q,desencola(q2));
		}
		while(q1.delante!=NULL){
			encola(q,desencola(q1));
		}
		while(q2.delante!=NULL){
			encola(q,desencola(q2));
		}
		cout << "Cola Intercalada: " << endl;
		verCola(q);
		int op4;
		op4 = menuFinprog();
		finColas(op4);
		break;
		}
	case 5:
		system("cls");
		Persona cte;
		ColaPersona p, pH, pM;
		inicializaP(p); inicializaP(pH); inicializaP(pM);
		cout << "Numero de clientes: ";
		int n; cin >> n;
		for(int i=0;i<n;i++){
			cout << "Cliente " << i+1 << ":" << endl;
			cout << "Nombre: "; cin >> cte.nombre;
			cout << "Sexo M/F: "; cin >> cte.sexo;
			encolaP(p,cte);
		}
		cout << "Cola Original: " << endl;
		verColaP(p);
		while(p.delante){
			cte = desencolaP(p);
			if(cte.sexo == 'M' || cte.sexo == 'm')
				encolaP(pH,cte);
			else
				encolaP(pM,cte);
		}
		cout << "Cola de hombres :" << endl;
		verColaP(pH);
		cout << "Cola de Mujeres :" << endl;
		verColaP(pM);
		int op5;
		op5 = menuFinprog();
		finColas(op5);
		break;
	case 6:
		system("cls");
		opcion = menuDatosAbstractos();
		break;
	case 7:
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
	default:
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuColas();
		break;
	};
}
int menuArboles(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                        Menu Arboles                             =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Generar Arbol Binario de Busqueda                     =" << endl;
	cout << "=       [2] Mostrar Arbol Binario de Busqueda                     =" << endl;
	cout << "=       [3] Mostrar Arbol BB en Orden                             =" << endl;
	cout << "=       [4] Mostrar Arbol BB en PreOrden                          =" << endl;
	cout << "=       [5] Mostrar Arbol BB en PostOrden                         =" << endl;
	cout << "=       [6] Regresar al menu Datos Abstractos                     =" << endl;
	cout << "=       [7] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
		{
		system("cls");
		cout << "Cantidad de elementos del arbol: ";
		int n; cin >> n;
		for(int i=1;i<=n;i++){
			cout << "Ingrese el nodo nro. " << i << ": ";
			int v; cin >> v;
			inserta(arbol,v);
		}
		cout << endl << "Arbol Generado: " << endl;
		verArbol(arbol,0);
		int op1;
		op1 = menuFinprog();
		finArboles(op1);
		break;
		}
	case 2:
		{
		system("cls");
		cout << endl;
		verArbol(arbol,0);
		int op2;
		op2 = menuFinprog();
		finArboles(op2);
		break;
		}
	case 3:
		{
		system("cls");
		cout << endl;
		verArbol(arbol,0);
		cout << "Arbol en orden: "; enorden(arbol);
		int op3;
		op3 = menuFinprog();
		finArboles(op3);
		break;
		}
	case 4:
		{
		system("cls");
		cout << endl;
		verArbol(arbol,0);
		cout << "Arbol en preorden: "; preorden(arbol);
		int op4;
		op4 = menuFinprog();
		finArboles(op4);
		break;
		}
	case 5:
		{
		system("cls");
		cout << endl;
		verArbol(arbol,0);
		cout << "Arbol en postorden: "; postorden(arbol);
		int op5;
		op5 = menuFinprog();
		finArboles(op5);
		break;
		}
	case 6:
		{
		system("cls");
		opcion = menuDatosAbstractos();
		break;
		}
	case 7:
		{
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
		}
	default:
		{
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuArboles();
		break;
		}
	};
}
int menuEjemplos(){
	system("color  f3");
	cout << "===================================================================" << endl;
	cout << "=             Recopilatorios de Ejercicios C++                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                 Menu de Ejemplos Variados                       =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=       [1] Tres en Raya                                          =" << endl;
	cout << "=       [2] Snake                                                 =" << endl;
	cout << "=       [3] Cubo Mágico                                           =" << endl;
	cout << "=       [4] Yan-Ken-Po                                            =" << endl;
	cout << "=       [5] Sorpresa                                              =" << endl;
	cout << "=       [6] Regresar al menu principal                            =" << endl;
	cout << "=       [7] Salir del Programa                                    =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "=                              Universidad Privada del Norte      =" << endl;
	cout << "=                                                                 =" << endl;
	cout << "===================================================================" << endl;
	cout << "= Escoja una opcion:                                            ->";
	int opcion; cin >> opcion;
	switch(opcion){
	case 1:
		system("cls");
		ejemplo1();
		int op1;
		op1 = menuFinprog();
		finEjemplos(op1);
		break;
	case 2:
		system("cls");
		ejemplo2();
		int op2;
		op2 = menuFinprog();
		finEjemplos(op2);
		break;
	case 3:
		system("cls");
		ejemplo3();
		int op3;
		op3 = menuFinprog();
		finEjemplos(op3);
		break;
	case 4:
		system("cls");
		ejemplo4();
		int op4;
		op4 = menuFinprog();
		finEjemplos(op4);
		break;
	case 5:
		system("cls");
		ejemplo5();
		int op5;
		op5 = menuFinprog();
		finEjemplos(op5);
		break;
	case 6:
		system("cls");
		break;
	case 7:
		system("cls");
		cout << "Hasta luego" << endl;
		exit(0);
		break;
	default:
		system("cls");
		cout << "Opcion no Valida" << endl;
		opcion = menuEjemplos();
		break;
	};
}


int finBits(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuBits();
		break;
	case 2:
		system("cls");
		return OP;
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
void bits1(){
	short int a,b;
	cout << "[1] Uso de los operadores a nivel de bits" << endl;
	cout << "Ingrese los valores de a y b:" << endl;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "~a = " << ~a << endl;
	cout << "~b = " << ~b << endl;
	cout << "a&b = " << (a&b) << endl;
	cout << "a|b = " << (a|b) << endl;
	cout << "a^b = " << (a^b) << endl;
	cout << "a<<b = " << (a<<b) << endl;
	cout << "a>>b = " << (a>>b) << endl;
}
void bits2(){
	cout << "[2] Mostrar los bits de un numero como se ve en memoria" << endl;
	int n;
	cout << "Ingrese el numero: "; cin >> n;
	cout << n << "  = "; impBits(n);
	cout << -n << " = "; impBits(-n);
}
void impBits(int n){
	unsigned int mask = 0x80000000;
	for(int j=0;j<32;j++){
		if(j%4==0)cout << " ";
		if((n & mask) > 0)cout << 1;
		else cout << 0;
		mask = (mask >> 1);
	}
	cout << endl;
}

void bits3(){
	cout << "[3] Encriptar Frase   " << endl;
	cout << "Ingrese una frase    : ";
	char f[100];
	cin.ignore(256,'\n');
	cin.getline(f,1000);
	cout << "Ingrese una clave(#): ";
	int n;
	cin >> n;
	encripta(f,n);
	cout << "Frase Encriptada     : " << f << endl;
}
void encripta(char *f,int n){
	while (*f != '\0'){
		*f ^= n;
		f++;
	}
}

void bits4(){
	cout << "[4] Encriptar Frase por Negacion de Bits " << endl;
	cout << "Ingrese una frase    : ";
	char f[100];
	cin.ignore(256,'\n');
	cin.getline(f,1000);
	encriptaNeg(f);
	cout << "Frase Encriptada     : " << f << endl;
}
void encriptaNeg(char *f){
	while (*f != '\0'){
		*f = ~*f;
		f++;
	}
}
void bits5(){
	cout << "[5] Mostar los bits de un numero punto flotante" << endl;
	union flotante f;
	cout << "Ingrese flotante: "; cin >> f.f;
	cout << f.f << " = ";
	impBits(f.entero);
}

int finAleatorios(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuAleatorios();
		break;
	case 2:
		system("cls");
		return OP;
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
void aleat1(){
	cout << "[1] Genera tiros de un Dado" << endl;
	int const NROLLS = 5000;
	int const NSTARS = 95;
	
	default_random_engine generator;
	uniform_int_distribution<int> distribution(1,6);
	
	int v[7] = {};
	
	for (int i=0; i<NROLLS; i++){
		int number = distribution(generator);
		v[number]++;
	}
	
	for(int i=1;i<7;i++){
		cout << "v[" << i << "]: " << v[i] << endl;
	}
	
	cout << endl;
	
	cout << "uniform_int_distribution (0,9):" << endl;
	for (int i=1;i<7; i++){
		cout << i << ": " << string(v[i]*NSTARS/NROLLS,'*') << endl;
	}
}
void aleat2(){
	cout << "[2] Muestra una distribucion Normal  " << endl;
	const int NROLLS = 10000; //Nmero de experimentos
	const int NSTARS = 100; //maximo npumero de estrellas a distribuir
	
	default_random_engine generator;
	normal_distribution<double> normalDistribution(5.0,2.0);
	
	int p[10] = {};
	
	for(int i=0;i<NROLLS;i++){
		double number = normalDistribution(generator);
		if((number>=0.0)&&(number<10.0)) p[int(number)]++;
	}
	
	cout << "normal_distribution(5.0,2.0):" << endl;
	
	for(int i=0;i<10;i++){
		cout << i << "-" << (i+1) << ": ";
		cout << string(p[i]*NSTARS/NROLLS,'*') << endl;
	}
}
void aleat3(){
	cout << "[3] Muestra una distribucion Exponencial " << endl;
	const int NROLLS = 10000; //numero de experimentos
	const int NSTARS = 100; // maximo numero de estrellas a distribuir
	const int NINTERVALS = 10; // numero de intervalos
	
	default_random_engine generator;
	exponential_distribution<double> exponentialDistribution(3.5);
	
	int p[NINTERVALS]={};
	
	for(int i=0; i<NROLLS; i++){
		double number = exponentialDistribution(generator);
		if(number<1.0) p[int(NINTERVALS*number)]++;
	}
	
	cout << "exponential_distribution(3.5):" << endl;
	cout << fixed; //indica que el numero decimal será fijo
	cout.precision(1); //fija el valor en 1 decimal
	
	for(int i=0; i<NINTERVALS; i++){
		cout << float(i)/NINTERVALS << "-" << float(i+1)/NINTERVALS << ": ";
		cout << string(p[i]*NSTARS/NROLLS,'*') << endl;
	}
}
void aleat4(){
	cout << "[4] Combinacion Aleatoria    " << endl;
	cout << "Ingrese el Nro de elementos: ";
	int n; cin >> n;
	int x[50];
	for(int i=0;i<n;i++){
		cout << "Elemento Nro " << i << ": ";
		cin >> x[i];
	}
	cout << "Ingrese la cantidad de elementos a escoger: ";
	int r; cin >> r;
	srand((unsigned)time(NULL));
	combinaAleatoria(n,r,x);
	cout << "Elementos escogidos: " << endl;
	for(int i=0;i<r;i++)
		cout << x[i] << endl;
}
void combinaAleatoria(int n, int r, int x[]){
	int k,t;
	for(int i=0;i<r;i++){
		k = rand()%n;
		t = x[i];
		x[i] = x[k];
		x[k] = t;
	}
}
void aleat5(){
	cout << "[5] Muestra una distribucion de Poisson con media Lambda " << endl;
	srand((unsigned)time(NULL));
	cout << "Ingrese la media de sucesos (lambda): ";
	float lambda; cin >> lambda;
	cout << "Ingrese el Nro de veces a generar: ";
	int n; cin >> n;
	
	const int NROLLS = n; //Nmero de experimentos
	const int NSTARS = 100; //maximo npumero de estrellas a distribuir
	
	
	int p[100] = {};
	
	for(int i=0;i<NROLLS;i++){
		int number = poisson(lambda);
		p[int(number)]++;
	}
	
	for(int i=0;i<(lambda*2)+1;i++){
		cout << i << "-" << (i+1) << ": ";
		cout << string(p[i]*NSTARS/NROLLS,'*') << endl;
	}
}
int poisson(float lambda){
	float r = (float)rand()/RAND_MAX;
	double p = exp(-lambda);
	double F = p;
	int i = 0;
	while(F<r){
		p = lambda*p/(i+1);
		F = F+p;
		i++;
	}
	return i;
}

int finPunteros(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuPunteros();
		break;
	case 2:
		system("cls");
		return OP;
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
void puntero1(){
	cout << "[1] Tipos de datos y la direccion de memoria que ocupa" << endl;
	int i = 0;
	float f = 0.4;
	double d = 3.141596;
	char ch = 'c';
	string s = "klsdh";
	bool b = true;
	
	int v[10] ={};
	
	cout << "&i : " << &i << endl;
	cout << "&c : " << &ch << endl;
	cout << "&f : " << &f << endl;
	cout << "&d : " << &d << endl;
	cout << "&s : " << &s << endl;
	cout << "&b : " << &b << endl;
	
	cout << endl;
	
	int *pi= &i;
	char *pc= &ch;
	float *pf= &f;
	double *pd= &d;
	string *ps = &s;
	bool *pb = &b;
	
	cout << endl;
	cout << "*pi : " << *pi << endl;
	cout << "*pc : " << *pc << endl;
	cout << "*pf : " << *pf << endl;
	cout << "*pd : " << *pd << endl;
	cout << "*ps : " << *ps << endl;
	cout << "*pb : " << *pb << endl;
	
	cout << endl;
	cout << "*pi : " << pi << endl;
	cout << "*pc : " << pc << endl;
	cout << "*pf : " << pf << endl;
	cout << "*pd : " << pd << endl;
	cout << "*ps : " << ps << endl;
	cout << "*pb : " << pb << endl;
}
void puntero2(){
	cout << "[2] Intercambia dos Valores   " << endl;
	int a; 
	int b;
	cout << "Ingrese a: "; cin >> a;
	cout << "Ingrese b: "; cin >> b;
	
	intercambia(a,b);
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}
void intercambia(int &a, int &b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void puntero3(){
	cout << "[3] Direcciones de memoria de los elementos de un arreglo " << endl;
	int x[] = {65,66,67,68};
	int n = 4;
	cout << "Direccion de inicio: " << x << endl;
	cout << endl << "Direccion Contenido " << endl;
	for(int i=0;i<n;i++)
		cout << (x+i) << setw(10) << *(x+i) << endl;
	cout << endl << "Direccion n: " << &n << endl;
}
void puntero4(){
	cout << "[4] Ordenar un arreglo mediante punteros     " << endl;
	srand(time(NULL));
	cout << "Ordenamiento Ascendente" << endl;
	cout << "Ingres el numero de elementos del vetor aleatorio: ";
	int n; cin >> n;
	int v[100000];
	makeVector(v,n);
	seeVecotr(v,n);
	ordenaPunteros(n,v);
	seeVecotr(v,n);
}
void makeVector(int v[],int n){
	for(int i=0;i<n;i++){
		v[i] = rand()%100;
	}
}
void seeVecotr(int v[],int n){
	cout << endl << "V =[";
	for(int i=0;i<n;i++){
		cout << v[i] <<" ";
	}
	cout << "]" <<endl;
}
void ordenaPunteros(int n, int *p){
	for(int i=1;i<n;i++){
		for(int j=n-1;j>=i;j--){
			if(*(p+j-1)<*(p+j)){
				int tmp = *(p+j-1);
				*(p+j-1) = *(p+j);
				*(p+j) = tmp;
			}
		}
	}
}
void puntero5(){
	cout << "[5] Determina si una palabra es palindroma con punteros " << endl;
	char p[100];
	cout << "Ingrese una palabra: ";
	cin >> p;
	if(esPalindroma(p))
		cout << "Es palindroma" << endl;
	else
		cout << "No es palindroma" << endl;
}
bool esPalindroma(char *p){
	char *r;
	r = p;
	while(*r)
		r++;
	r--;
	while(p<r){
		if(*r!=*p) return false;
		p++;
		r--;
	}
	return true;
}
int finArchivos(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuArchivos();
		break;
	case 2:
		system("cls");
		return OP;
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
void arch1(){
	cout << "[1] Escribir un Archivo " << endl;
	char ruta[100] = "d:\\T3_archivos\\";
	cout<<"nombre del nuevo archivo(con extension): ";
	char destino[30];
	cin>>destino;
	strcat(ruta,destino);
	cout<<"ruta del archivo; "<<ruta<<endl;
	crearArchivo(ruta);
}
void crearArchivo(char *archivo){
	FILE *documento;
	documento = fopen(archivo,"wt");
	if(documento == NULL){
		cout<<"No se pudo crear el archivo"<<endl;
		return;
	}
	char c = getchar();
	while(c != EOF){
		putc(c,documento);
		c = getchar();
	}
	fclose(documento);
}

void arch2(){
	cout << "[2] Leer Archivo" << endl;
	string namefile = "D:\\T3_archivos\\"; 
	cout << "Nombre del archivo(.txt): ";
	string name;
	cin >> name;
	namefile += name + ".txt";
	ifstream streamfile;
	streamfile.open(namefile.c_str());
	if(streamfile.fail()){
		cout <<  "El archivo no se abrio correctamente";
		exit(1);
	}
	string linea;
	while(getline(streamfile,linea)){
		cout << linea << endl;
	}
	streamfile.close();
}
void arch3(){
	cout << "[3] Copiar Archivo" << endl;
	string ruta = "D:\\T3_archivos\\";
	cout << "Nombre del archivo original(.txt): ";
	string origen;
	cin >> origen;
	origen = ruta + origen + ".txt";
	//Leemos arcihvo original
	fstream inFile;
	inFile.open(origen.c_str());
	if(inFile.fail()){
		cout << "No se pudo abrir el archivo original " << origen << endl;
		exit(1);
	}
	cout << "Nombre del archivo copia :";
	string rutacopy;
	cin >> rutacopy;
	rutacopy = ruta + rutacopy + ".txt";
	//Generamos archivo y copiamos
	ofstream outFile;
	outFile.open(rutacopy.c_str());
	if(outFile.fail()){
		cout << "No se pudo abrir el archivo copia " << rutacopy << endl;
		exit(1);
	}
	
	string line;
	while(getline(inFile,line)){
		outFile<<line<<endl;
	}
	inFile.close();
	outFile.close();
	cout << "Copia exitosa en: " << rutacopy << endl;
}
void arch4(){
	cout << "[4] Hacha" << endl;
	int opc;
	char origen[LIM];
	while(1){
		cout << "*Menu Chacha*" << endl;
		cout << "1.Cortar" << endl;
		cout << "2.Unir" << endl;
		cout << "3.Salir" << endl;
		cout << "Escoja una opcion: ";
		cin >> opc;
		switch(opc){
		case 1:
			cout << "Archivo a dividir: "; cin >> origen;
			Cortar(origen);
			break;
		case 2:
			cout << "Primer Archivo a unir: "; cin >> origen;
			Unir(origen);
			break;
		case 3:
			return;
		}
		cout << endl;
	}
}
void Cortar(char *origen){
	FILE *pf,*ps;
	char destino[LIM], car, cNro[5];
	int nro = 0;
	pf = fopen(origen,"rb");
	if(pf==NULL){
		cout << "Error al abrir archivo";
		return;
	}
	cout << "Numero de bytes por archivo: "; 
	int n; cin >> n;
	while(!feof(pf)){
		//itoa(nro,cNro,10);
		strcpy(destino,origen);
		strcat(destino,".");
		strcat(destino,cNro);
		cout << destino << endl;
		ps = fopen(destino,"wb");
		if(ps==NULL){
			cout << "Error al abrir archivo de salida" << endl;
			return;
		}
		for(int i=0;i<n;i++){
			car = getc(pf);
			if(feof(pf)) break;
			putc(car,ps);
		}
		fclose(ps);
		nro++;
	}
	fclose(pf);
}
void Unir(char *origen){
	FILE *pf,*ps;
	char destino[LIM], origen0[LIM], car, cNro[5];
	int tam, nro = 0;
	pf = fopen(origen,"rb");
	if(pf==NULL){
		cout << "Error al abrir archivo entrada" << endl;
		return;
	}
	cout << "Deseo unirlo en: "; cin >> destino;
	ps = fopen(destino,"wb");
	if(pf==NULL){
		fclose(pf);
		cout << "Error al abrir archivo salida" << endl;
		return;
	}
	tam = strlen(origen);
	strcpy(origen0,origen);
	origen0[tam-2]=NULL;
	while(1){
		cout << "Uniendo Archivo: " << origen << endl;
		car = getc(pf);
		while(!feof(pf)){
			putc(car,ps);
			car = getc(pf);
		}
		fclose(pf);
		nro++;
		//itoa(nro,cNro,10);
		strcpy(origen,origen0);
		strcat(origen,".");
		strcat(origen,cNro);
		pf=fopen(origen,"rb");
		if(pf==NULL) break;
	}
	fclose(ps);
}
void arch5(){
	cout << "[5] Comprimir y Descomprimir Arhivo" << endl;
	int opc;
	char origen[LIM], destino[LIM];
	while(1){
		cout << "*MENU COMPRESION*" << endl;
		cout << "1.Comprumir" << endl;
		cout << "2.Descomprimir" << endl;
		cout << "3.Salir" << endl;
		cout << "Ingrese opcion: "; cin >> opc;
		switch(opc){
		case 1:
			cout << "Archivo a comprimir: "; cin >> origen;
			cout << "Archivo de salida: "; cin >> destino;
			comprimir(origen,destino);
			break;
		case 2:
			cout << "Archivo a descomprimir: "; cin >> origen;
			cout << "Archivo de salida: "; cin >> destino;
			descomprimir(origen,destino);
			break;
		case 3:
			return;
		}
	}
}
void comprimir(char *origen,char *destino){
	char carAnt, carAct = -1;
	int largo = 0;
	FILE *arch1, *arch2;
	arch1 = fopen(origen,"rb");
	if(arch1==NULL){
		cout << "Error al abrir archivo de entrada" << endl;
		return;
	}
	arch2 = fopen(destino,"wb");
	if(arch2 == NULL){
		cout << "Error al abrir archivo de salida" << endl;
		fclose(arch1);
		return;
	}
	carAct = fgetc(arch1);
	while(carAct!=EOF){
		if(carAct==carAct){
			largo++;
			if(largo>255){
				fputc(0,arch2);
				fputc(255,arch2);
				fputc(carAct,arch2);
				largo = 1;
			}
		}
		else{
			if(largo>3){
				fputc(0,arch2);
				fputc(largo,arch2);
				fputc(carAnt,arch2);
			}else{
				for(int i=1;i<=largo;i++)
					fputc(carAnt,arch2);
			}
			carAnt = carAct;
			largo = 1;
		}
		carAct = fgetc(arch1);
	}
	if(largo>3){
		fputc(0,arch2);
		fputc(largo,arch2);
		fputc(carAnt,arch2);
	}else{
		for(int i=1;i<=largo;i++)
			fputc(carAct,arch2);
	}
	fclose(arch1);
	fclose(arch2);
}
void descomprimir(char *origen,char *destino){
	char carAct;
	int largo;
	FILE *arch1,*arch2;
	arch1 = fopen(origen,"rb");
	if(arch1==NULL){
		cout << "Error al abrir archivo de entrada" << endl;
		return;
	}
	arch2 = fopen(destino,"wb");
	if(arch2==NULL){
		cout << "Error al abrir archivo de salida" << endl;
		fclose(arch1);
		return;
	}
	carAct = fgetc(arch1);
	while(carAct!=EOF){
		if(carAct!=0)
			fputc(carAct,arch2);
		else{
			largo = fgetc(arch1);
			carAct = fgetc(arch1);
			for(int i=0;i<largo;i++)
				fputc(carAct,arch2);
		}
		carAct = fgetc(arch1);
	}
	fclose(arch1);
	fclose(arch2);
}
int finRecursion(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuRecursion();
		break;
	case 2:
		system("cls");
		return OP;
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
void recur1(){
	cout << "[1] Serie Fibonacci       " << endl;
	cout << "Ingrese la posición de la serie fibonacci: ";
	int n;
	cin >> n;
	cout << "El valor de la posicion " << n << " de la serie de fibonacci es: ";
	cout << fibonacci(n) << endl;
}
int fibonacci(int n){
	if(n == 1 || n == 2){
		return 1;
	}else{
		return fibonacci(n-2) + fibonacci(n-1); 
	}
}

void recur2(){
	cout << "[2] Factorial de un Numero" << endl;
	cout << "Ingrese el valor de n: ";
	int n;
	cin >> n;
	cout << "El factorial de " << n << " es: " << factorial(n) << endl;
	for(int i=0;i<=30;i++){
		cout << i << " : " << factorial(i) << endl;
	}
}
unsigned long long factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n * factorial(n-1);
	}
}

void recur3(){
	cout << "[3] Maximo comun Divisor  " << endl;
	cout << "Ingrese el valor de a: ";
	int a;
	cin >> a;
	cout << "Ingrese el valor de b: ";
	int b;
	cin >> b;
	cout << "El máximo comun divisor de " << a << " y " << b << " es: ";
	cout << mcd(a,b) << endl;
}
int mcd(int a,int b){
	if((a%b) == 0){
		return b;
	}else{
		return mcd(b,(a%b));
	}
}

void recur4(){
	cout << "[4] Permuta Letras " << endl;
	cout << "Permutaciones que se obtienen con" << endl;
	cout << "las letras A,B y C" << endl;
	cout << endl;
	char letras[] = "ABC";//funciona para n cantidad de letras
	int n=strlen(letras);
	permuta(letras,n);
	cout << endl;
}
void permuta(char a[],int n){
	for(int i=0;i<n;i++){
		if(n==1) cout << a << " " << "\t";
		else{
			permuta(a,n-1);
			char c=a[0];
			for(int i=0;i<n-1;i++) a[i]=a[i+1];
			a[n-1]=c;
		}
	}
}

void recur5(){
	cout << "[5] Torres de Hanoi  " << endl;
	int n;
	cout << "Numero de aros: "; cin >> n;
	Hanoi(n,'A','C','B');
	cout << "Número de movimientos: " << veces << endl;
}
void Hanoi(int n,char a,char c,char b){
	if(n>0){
		Hanoi(n-1,a,b,c);
		cout <<"Mueve el anillo " << n << " desde " << a
			<<" hacia la varilla " << c << endl;
		veces++;
		Hanoi(n-1,b,c,a);
	}
}
int finOrdenamiento(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuOrdenamiento();
		break;
	case 2:
		system("cls");
		return OP;
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
void ord1(){
	cout << "[1] Ordenamiento por Burbuja   " << endl;
	srand(time(NULL));
	cout << "Ingres el numero de elementos del vetor aleatorio: ";
	int n; cin >> n;
	int v[100];
	makeVector(v,n);
	seeVecotr(v,n);
	bubble(v,n);
	seeVecotr(v,n);
}
void ord2(){
	cout << "[2] Ordenamiento por Seleccion Directa  " << endl;
	srand(time(NULL));
	cout << "Ingres el numero de elementos del vetor aleatorio: ";
	int n; cin >> n;
	int v[100];
	makeVector(v,n);
	seeVecotr(v,n);
	selectionSort(v,n);
	seeVecotr(v,n);
}
void ord3(){
	cout << "[3] Ordenamiento por Insercion Directa " << endl;
	srand(time(NULL));
	cout << "Ingres el numero de elementos del vetor aleatorio: ";
	int n; cin >> n;
	int v[100];
	makeVector(v,n);
	seeVecotr(v,n);
	insertion(v,n);
	seeVecotr(v,n);
}
void ord4(){
	cout << "[4] Ordenamiento por MergeSort   " << endl;
	srand(time(NULL));
	cout << "Ingres el numero de elementos del vetor aleatorio: ";
	int n; cin >> n;
	int v[100];
	makeVector(v,n);
	seeVecotr(v,n);
	mergesort(v,n);
	seeVecotr(v,n);
}
void ord5(){
	cout << "[5] Ordenamiento por Burbuja en dos direcciones  " << endl;
	srand(time(NULL));
	cout << "Ingres el numero de elementos del vetor aleatorio: ";
	int n; cin >> n;
	int v[100];
	makeVector(v,n);
	seeVecotr(v,n);
	blublle2directions(v,n);
	seeVecotr(v,n);
}
void bubble(int v[],int n){
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(v[j]>v[j+1]){
				int tmp = v[j];
				v[j] = v[j+1];
				v[j+1] = tmp;
			}
		}
	}
}
void insertion(int v[],int n){
	for(int i=1;i<n;i++){
		int tmp = v[i];
		int j = i-1;
		while(j>=0 && tmp<v[j]){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = tmp;
	}
}
void selectionSort(int v[],int n){
	for(int i=0;i<n-1;i++){
		int posMin = i;
		for(int j=i+1;j<n;j++){
			if(v[posMin]>v[j]){
				posMin = j;
			}
		}
		int tmp = v[i];
		v[i] = v[posMin];
		v[posMin] = tmp;
	}
}
void intercala(int *a, int na, int *b, int nb, int *v){
	int xa=0, xb=0 ,xv=0;
	while(xa<na && xb<nb){
		if(a[xa]<b[xb])
			v[xv] = a[xa++];
		else
			v[xv] = b[xb++];
		xv++;
	}
	while(xa<na)
		  v[xv++] = a[xa++];
	while(xb<nb)
		v[xv++] = b[xb++];
}
void mergesort(int v[], int n){
	int *a,*b,na,nb,x,y;
	if(n>1){
		if(n%2==0)
			na = nb = (int) n/2;
		else{
			na = (int) n/2;
			nb = na + 1;
		}
		a = new int [na];
		b = new int [nb];
		for(x=0;x<na;x++)
			a[x] = v[x];
		for(y=0;y<nb; x++,y++)
			b[y] = v[x];
		mergesort(a,na);
		mergesort(b,nb);
		intercala(a,na,b,nb,v);
		delete a,b;
	}
}
void blublle2directions(int x[],int n){
	int primero = 1;
	int ultimo = n-1;
	int k = n-1;
	int tmp;
	do{
		for(int i=primero;i<=ultimo;i++){
			if(x[i-1]>x[i]){
				tmp = x[i];
				x[i] = x[i-1];
				x[i-1] = tmp;
				k = i;
			}
		}
		ultimo = k-1;
		for(int i=ultimo; i>= primero;i--){
			if(x[i-1]>x[i]){
				tmp = x[i];
				x[i] = x[i-1];
				x[i-1] = tmp;
				k = i;
			}
		}
		primero = k+1;
	}while(primero <= ultimo);
}
int finListas(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuListasSimples();
		break;
	case 2:
		system("cls");
		OP = menuListasSimples();
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
int menuOp2(){
	cout << "		Insertar Elemento" << endl;
	cout << "[1] Insertar al Inicio" << endl;
	cout << "[2] Insertar al Final" << endl;
	cout << "[3] Insertar en cualquier posicioin" << endl;
	cout << "[4] Menu Anterior" << endl;
	cout << "Ingrese su opcion: ";
	int o; cin >> o;
	return o;
}
int menuOp4(){
	cout << "		Eliminar Elemento" << endl;
	cout << "[1] Eliminar al Inicio" << endl;
	cout << "[2] Eliminar al Final" << endl;
	cout << "[3] Eliminar en cualquier posicioin" << endl;
	cout << "[4] Menu Anterior" << endl;
	cout << "Ingrese su opcion: ";
	int o; cin >> o;
	return o;
}
void mostrarLista(pLista lista){
	if(!lista){
		cout << "Lista vacia" << endl;
	}else{
		cout << "Lista = [ ";
		while(lista){
			cout << lista->dato << " ";
			lista = lista->sgt;
		}
		cout << "]" << endl;
	}
}
void insertarInicio(pLista &lista, int v){
	pLista p = new(Nodo);
	p->dato = v;
	p->sgt = lista;
	lista = p;
	cout << "Elemento insertado" << endl;
}
void insertarFin(pLista &lista, int v){
	pLista p = new(Nodo);
	p->dato = v;
	if(!lista){
		p->sgt = NULL;
		lista = p;
	}else{
		pLista anterior;
		anterior = lista;
		while(anterior->sgt)
			anterior = anterior->sgt;
		p->sgt = NULL;
		anterior->sgt = p;
		cout << "Elemento Insertado" << endl;
	}
}
void insertaPos(pLista &lista, int pos, int v){
	if(pos==1){
		insertarInicio(lista,v);
	}else{
		pLista p = new(Nodo);
		p->dato = v;
		pLista anterior = lista;
		for(int i=1;anterior!=NULL;i++){
			if(i==pos-1){
				p->sgt = anterior->sgt;
				anterior->sgt = p;
				cout << "Elemento insertado" << endl;
				return;
			}
			anterior = anterior->sgt;
			
		}
		cout << "Posicion fuera de Rango" << endl;
	}
}
void modificaPos(pLista &lista, int pos, int v){
	if(!lista){
		cout << "Lista Vacia" << endl;
		return;
	}else{
		pLista anterior = lista;
		for(int i=1;anterior->sgt!=NULL;i++){
			if(i==pos){
				anterior->dato = v;
				cout << "Modificado" << endl;
				return;
			}
			anterior = anterior->sgt;
		}
		cout << "Posicion fuera de rango" << endl;
	}
}
void eliminaInicio(pLista &lista){
	if(!lista){
		cout << "Lista Vacia" << endl;
		return;
	}else{
		pLista anterior = lista;
		lista = lista->sgt;
		delete(anterior);
		cout << "Eliminado" << endl;
	}
}
void eliminaFin(pLista &lista){
	if(!lista){
		cout << "Lista vacia" << endl;
		return;
	}else if(!(lista->sgt)){
		eliminaInicio(lista);
	}else{
		pLista anterior;
		pLista p = lista;
		while(p->sgt){
			anterior = p;
			p = p->sgt;
		}
		anterior->sgt = NULL;
		delete(p);
		cout << "Eliminado" << endl;
		
	}
}
void eliminaPos(pLista &lista, int pos){
	if(!lista){
		cout << "Lista Vacia" << endl;
	}else if(pos==1){
		eliminaInicio(lista);
	}else{
		pLista anterior = lista;
		pLista p;
		for(int i=1;anterior->sgt!=NULL;i++){
			if(i==pos-1){
				p = anterior->sgt;
				anterior->sgt = p->sgt;
				delete(p);
				cout << "Hecho" << endl;
				return;
			}
			anterior = anterior->sgt;
		}
		cout << "Posicion fuera de rango" << endl;
	}
}
void sortLista(pLista &lista){
	if(!lista){
		cout << "Lista vacia" << endl;
	}else{
		int aux = 0;
		pLista pi = lista;
		pLista pd;
		while(pi){
			pd = pi;
			while(pd){
				if(pi->dato > pd->dato){
					aux = pi->dato;
					pi->dato = pd->dato;
					pd->dato = aux;
				}
				pd = pd->sgt;
			}
			pi = pi->sgt;
		}
		cout << "Lista ordenada" << endl;
	}
}
void eliminaLista(pLista &lista){
	if(!lista){
		cout << "Lista vacia" << endl;
	}else{
		pLista p;
		while(lista){
			p = lista;
			lista = lista->sgt;
			delete(p);
		}
		cout << "Lista eliminada" << endl;
	}
}

int finListasDobles(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuListasDobles();
		break;
	case 2:
		system("cls");
		OP = menuListasDobles();
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
void initializer(listaDE &lista){
	lista.ini = NULL;
	lista.fin = NULL;
}
void mostrarListaDE(listaDE lista){
	if(!lista.ini){
		cout << "Lista vacia" << endl;
	}else{
		tLista p = lista.ini;
		cout << "Lista DE = [ ";
		while(p){
			cout << p->dato << " ";
			p = p->sgt;
		}
		cout << "]" << endl;
	}
}
void insertaIniDE(listaDE &lista,int v){
	tLista p = new(Nodo2);
	p->sgt = NULL;
	p->ant = NULL;
	p->dato = v;
	if(!lista.ini){
		lista.ini = p;
		lista.fin = p;
	}else{
		p->sgt = lista.ini;
		lista.ini->ant = p;
		lista.ini = p;
	}
}
void insertaFinDE(listaDE &lista,int v){
	tLista p = new(Nodo2);
	p->sgt = NULL;
	p->ant = NULL;
	p->dato = v;
	if(!lista.ini){
		insertaIniDE(lista,v);
	}else{
		lista.fin->sgt = p;
		p->ant = lista.fin;
		lista.fin = p;
	}
}
void eliminaIniDE(listaDE &lista){
	if(!lista.ini){
		cout << "Lista vacia" << endl;
	}else{
		tLista p = lista.ini;
		lista.ini = lista.ini -> sgt;
		if(!lista.ini){
			lista.fin = NULL;
		}else{
			lista.ini->ant = NULL;
		}
	}
}
void eliminaFinDE(listaDE &lista){
	if(!lista.ini){
		cout << "Lista vacia" << endl;
	}else{
		tLista p = lista.fin;
		lista.fin = lista.fin -> ant;
		if(!lista.fin){
			lista.ini = NULL;
		}else{
			lista.fin->sgt = NULL;
		}
		delete(p);
	}
}
void mostrarListaInversaDE(listaDE lista){
	if(!lista.ini){
		cout << "Lista vacia" << endl;
	}else{
		tLista p = lista.fin;
		cout << "Lista DE = [ ";
		while(p){
			cout << p->dato << " ";
			p = p->ant;
		}
		cout << "]" << endl;
	}
}
int finPilas(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuPilas();
		break;
	case 2:
		system("cls");
		OP = menuPilas();
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
void push(tPila &pila,int v){
	tPila p = new(Nodo);
	p->dato = v;
	p->sgt = pila;
	pila = p;
}
int pop(tPila &pila){
	if(!pila){
		cout << "Pila vacia" << endl;
		return -30000;
	}else{
		tPila p = pila;
		int v = p->dato;
		pila = pila->sgt;
		delete(p);
		return v;
	}
}
void mostrarPila(tPila pila){
	cout << endl;
	if(!pila){
		cout << "Pila vacia" << endl;
	}else{
		cout << "Pila = [ ";
		while(pila){
			cout << pila->dato << " ";
			pila = pila->sgt;
		}
		cout << "]" << endl;
	}
	cout << endl;
}
int finColas(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuColas();
		break;
	case 2:
		system("cls");
		OP = menuColas();
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
void mostrarCola(pCola cola){
	cout << endl;
	if(!cola){
		cout << "Cola vacia" << endl;
	}else{
		cout << "Cola = [ ";
		while(cola){
			cout << cola->dato << " ";
			cola = cola->sgt;
		}
		cout << "]" << endl;
	}
	cout << endl;
}
void encolar(pCola &primero,pCola &ultimo,int v){
	pCola p = new(Nodo);
	p->dato = v;
	p->sgt = NULL;
	if(!primero){
		primero = p;
		ultimo = p;
	}else{
		ultimo->sgt = p;
		ultimo = p;
	}
}
int desEncolar(pCola &primero,pCola &ultimo){
	if(!primero){
		cout << "Cola vacia" << endl;
		return NULL;
	}else{
		cout << endl;
		pCola p = primero;
		primero = primero->sgt;
		int v = p->dato;
		delete(p);
		if(!primero){
			ultimo = NULL;
		}
		return v;
	}
}
void inicializa(Cola &q){
	q.delante = NULL;
	q.atras = NULL;
}
void encola(Cola &q,int n){
	pCola p = new(Nodo);
	p->dato = n;
	p->sgt = NULL;
	if(!q.delante)
		q.delante = p;
	else
		(q.atras)->sgt = p;
	q.atras = p;
}
int desencola(Cola &q){
	pCola p;
	p = q.delante;
	int n = p->dato;
	q.delante = (q.delante)->sgt;
	delete(p);
	return n;
}
void verCola(Cola q){
	if(!q.delante){
		cout << "Cola Vacia" << endl;
	}else{
		pCola p;
		p = q.delante;
		cout << "Cola = [ ";
		while(p){
			cout << p->dato << " ";
			p = p->sgt;
		}
		cout << "]" << endl;
	}
}

void inicializaP(ColaPersona &q){
	q.delante = NULL;
	q.atras = NULL;
}
void verColaP(ColaPersona q){
	Persona *p;
	p = q.delante;
	while(p){
		cout << p->nombre << "\t" << p->sexo << endl;
		p = p->sgt;
	}
	cout << endl;
}
void encolaP(ColaPersona &q, Persona cte){
	Persona *p =  new(Persona);
	*p = cte;
	p->sgt = NULL;
	if(!q.delante)
		q.delante = p;
	else
		q.atras -> sgt = p;
	q.atras = p;
}
Persona desencolaP(ColaPersona &q){
	Persona *p = q.delante;
	Persona cte = *p;
	q.delante = q.delante->sgt;
	delete(p);
	return(cte);
}
int finArboles(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuArboles();
		break;
	case 2:
		system("cls");
		OP = menuArboles();
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
void inserta(ABB &arbol,int n){
	if(!arbol){
		arbol = new(NodoArbol);
		arbol->valor = n;
		arbol->izq = NULL;
		arbol->der = NULL;
	}
	else if(n<arbol->valor) inserta(arbol->izq,n);
	else if(n>arbol->valor) inserta(arbol->der,n);
}
void preorden(ABB arbol){
	if(arbol){
		cout << arbol->valor << " ";
		preorden(arbol->izq);
		preorden(arbol->der);
	}
}
void postorden(ABB arbol){
	if(arbol){
		postorden(arbol->izq);
		postorden(arbol->der);
		cout << arbol->valor << " ";
	}
}
void enorden(ABB arbol){
	if(arbol){
		enorden(arbol->izq);
		cout << arbol->valor << " ";
		enorden(arbol->der);
	}
}
void verArbol(ABB arbol,int nro){
	if(!arbol) return;
	verArbol(arbol->der,nro+1);
	for(int i=0;i<nro;i++) cout << " ";
	cout << arbol->valor << endl;
	verArbol(arbol->izq,nro+1);
}
int finEjemplos(int OP){
	switch(OP){
	case 1:
		system("cls");
		OP = menuEjemplos();
		break;
	case 2:
		system("cls");
		return OP;
		break;
	case 3:
		exit(0);
		break;
	default:
		break;
	};
}
void cuadroMagico(){
	int mat[4][4];
	int i,j,aux,suma,cont;
	
	for (i=1;i<=3;i++)
	{
		for (j=1;j<=3;j++)
		{
			do
			{ cout<<" \t \t \t \tValor "<<"("<<i;
			cout<<" "<<j<<") ";
			cin>>aux;
			}
			while(aux<1 || aux>9) ;
			mat[i][j]=aux;
			
		}
	}
	// Imprime la  matriz
	for (i=1;i<=3;i++)
	{
		cout<<"\n \t \t \t \t";
		for (j=1;j<=3;j++)
		{
			
			
			cout<<mat[i][j];
			cout<<"\t";
		}
	}
	cont=0; aux=0;
	//sumando filas
	for (i=1;i<=3;i++)
	{ suma=0;
	for (j=1;j<=3;j++)
	{
		suma+=mat[i][j];
	}
	if(i==1)
	{ aux=suma;
	}
	if(aux==suma)
	{
		cont++;
	}
	}
	
	
	//Suma las columnas
	
	
	for (i=1;i<=3;i++)
	{ suma=0;
	for (j=1;j<=3;j++)
	{
		suma+=mat[j][i];
	}
	if(aux==suma)
	{
		cont++;
	}
	}
	
	
	//Suma las diagonales
	
	
	suma=0;
	suma+=mat[1][1];
	suma+=mat[2][2];
	suma+=mat[3][3];
	if(aux==suma)
	{ cont++;
	}
	suma=0;
	suma+=mat[1][3];
	suma+=mat[2][2];
	suma+=mat[3][1];
	
	
	if(aux==suma)
	{
		cont++;
	}
	if (cont==8)
	{
		cout<<"\n\n \t \t \t \t Es un cuadro magico";
	}
	else
	{ cout<<"\n \n\t \t \t \t No es un cuadro magico";
	}
	getch();
	
}
//Snake
void gotoxy(int x, int y){ 
	HANDLE hCon; 
	COORD dwPos; 
	
	dwPos.X = x; 
	dwPos.Y = y; 
	hCon = GetStdHandle(STD_OUTPUT_HANDLE); 
	SetConsoleCursorPosition(hCon,dwPos); 
}
void OcultaCursor() {
	CONSOLE_CURSOR_INFO cci = {100, FALSE};
	
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}
void pintar(){  
	for(int i=2; i < 78; i++){
		gotoxy (i, 3); printf ("%c", 205);
		gotoxy(i, 23); printf ("%c", 205); 
	}
	for(int v=4; v < 23; v++){
		gotoxy (2,v);  printf ("%c", 186);
		gotoxy(77,v);  printf ("%c", 186); 
	}
	gotoxy  (2,3);    printf ("%c", 201);
	gotoxy (2,23);    printf ("%c", 200);
	gotoxy (77,3);    printf ("%c", 187);
	gotoxy(77,23);    printf ("%c", 188); 
}  
void guardar_posicion(){
	cuerpo[n][0] = x;
	cuerpo[n][1] = y;
	n++;
	if(n == tam) n = 1;
}
void dibujar_cuerpo(){
	for(int i = 1; i < tam; i++){
		gotoxy(cuerpo[i][0] , cuerpo[i][1]); printf("*");
	}
}
void borrar_cuerpo(){
	gotoxy(cuerpo[n][0] ,cuerpo[n][1]); printf(" ");
}
void teclear(){
	if(kbhit()){
		tecla = getch();
		switch(tecla){
		case ARRIBA : if(dir != 2) dir = 1; break;
		case ABAJO : if(dir != 1) dir = 2; break;
		case DERECHA : if(dir != 4) dir = 3; break;
		case IZQUIERDA : if(dir != 3) dir = 4; break;
		}
	}
}
void comida(){
	if(x == xc && y == yc)
	{
		xc = (rand() % 73) + 4;
		yc = (rand() % 19) + 4;
		
		tam++;
		gotoxy(xc, yc); printf("%c", 4);
	}
}
bool game_over(){
	if(y == 3 || y == 23 || x == 2 || x == 77) return false;
	for(int j = tam - 1; j > 0; j--){
		if(cuerpo[j][0] == x &&  cuerpo[j][1] == y)
			return false;
	}
	return true;
}
void tablerolimpio()
{
	for (int i=0; i <3; i++)
	{
		vacio[i][0] = "-";
	}
	
	for (int j=0; j<3;j++)
	{
		vacio[j][1] = "-";
	}
	
	for(int k=0; k<3; k++)
	{
		vacio[k][2] = "-";
	}
}
//aqui la evaluacion de quien gana
void ganador()
{
	if((gana==0)or (gana==3))
	{
		for(int b=0; b <3;b++)
			if ((vacio[0][b]=="X")&&(vacio[1][b]=="X")&&(vacio[2][b]=="X"))
		{
				gana=1;
		}
			
			for(int b=0; b <3; b++)
				if ((vacio[b][0]=="X")&&(vacio[b][1]=="X")&&(vacio[b][2]=="X"))
			{
					gana=1;
			}
				
				if ((vacio[0][0]=="X")&&(vacio[1][1]=="X")&&(vacio[2][2]=="X"))
				{
					gana=1;
				}
				
				if ((vacio[0][2]=="X")&&(vacio[1][1]=="X")&&(vacio[2][0]=="X"))
				{
					gana=1;
				}
				
				for(int z=0; z <3;z++)
					if ((vacio[0][z]=="O")&&(vacio[1][z]=="O")&&(vacio[2][z]=="O"))
				{
						gana=2;
				}
					
					for(int z=0; z <3; z++)
						if ((vacio[z][0]=="O")&&(vacio[z][1]=="O")&&(vacio[z][2]=="O"))
					{
							gana=2;
					}
						
						if ((vacio[0][0]=="O")&&(vacio[1][1]=="O")&&(vacio[2][2]=="O"))
						{
							gana=2;
						}
						
						if ((vacio[0][2]=="O")&&(vacio[1][1]=="O")&&(vacio[2][0]=="O"))
						{
							gana=2;
						}
	}
}

// este muestra el tablero
void tablero()
{
	cout << "Tres en Raya" << endl;
	cout << "__________________________" << endl;
	cout << "" << endl;
	cout << "para jugar debes de ingresar un numero " << endl;
	cout << "entre 1 y 9, la primera ubicacion es 1 " << endl;
	cout << "y se cuenta hacia la derecha "<< endl;
	cout << endl;
	
	for (int i=0; i <3; i++)
	{
		cout << "|"  << vacio[i][0] << "|" << "\t";
	}
	cout << endl;
	
	for (int j=0; j<3;j++)
	{
		cout << "|" << vacio[j][1] << "|" << "\t";
	}
	cout << endl;
	
	for(int k=0; k<3; k++)
	{
		cout << "|" << vacio[k][2]<< "|" <<"\t" ;
	}
	cout << endl;
}

// este va ser la funcion la cual hace que se realice la jugada
void turno1(int x)
{
	if ((x>9)or(x<1))
	{
		cout << "error debes ingresar un numero entre 1 y 9"<< endl;
		cout <<"porfavor vuelve a intenarlo"<< endl;
		info2=0;
		turnos--;
		cin >> x;
		turno1(x);
	}
	else do
	{
		for(int a=1; a <4; a++)
			if (x == a)
		{
				if((vacio[a-1][0] == "-")&&(info2==0))
				{
					vacio[a-1][0] = "X";
				}
				else if ((vacio[a-1][0]=="O")or(vacio[a-1][0] == "X"))
				{
					info2=1;
				}
		}
			
			for(int a=4; a<7; a++)
				if (x == a)
			{
					if((vacio[a-4][1] == "-")&&(info2==0))
					{
						vacio[a-4][1] = "X";
					}
					else if ((vacio[a-4][1]=="O")or(vacio[a-4][1] == "X"))
					{
						info2=1;
					}
			}
				
				for(int a=7; a<10; a++)
					if (x == a)
				{
						if ((vacio[a-7][2] == "-")&&(info2==0))
						{
							vacio[a-7][2] = "X";
						}
						else if ((vacio[a-7][2]=="O")or(vacio[a-7][2] == "X"))
						{
							info2=1;
						}
				}
					
	}while(!(x<10 && x>=1));
	system("cls");
	//system("clear"); //linux
	turnos++; // esta variable sirve de control de turnos
	
	if (info2==1)
	{
		system("cls");
		//system("clear");
		tablero(); //muestra el tablero con las jugadas que se llevan
		
		cout << endl;
		cout <<"Jugador 1"<< endl;
		cout <<"esta poscision ya se encuentra ocupada"<< endl;
		cout <<"porfavor vuelve a intenarlo"<< endl;
		info2=0;//para el reintento de una ubicacon
		turnos--; //para no incrementar el turno erroneamente ya que se vuelve a intentar
		cin >> x;
		turno1(x);
	}
	else
		tablero();
	
}

// esta es la funcion la cual recibe la jugada del jugador 2
void  turno2(int y)
{
	if ((y>9)or(y<1)) // aqui se verfica el rango del valor que se debe ingresar
	{
		cout << "error debes ingresar un numero entre 1 y 9"<< endl;
		cout <<"porfavor vuelve a intenarlo"<< endl;
		info=0;
		turnos--;//para evitar el error de incremento de los turnos
		cin >> y;
		turno2(y);
		
	}
	else do
	{
		
		// esta funcion verifica en que posicon va a quedar el turno
		// del jugador 2 si esta esta ocupada por el jugador 1
		// entonces da el mensaje de la poscision esta ocupada
		
		for(int a=1; a <4; a++)
		{
			if (y == a)
			{
				if((vacio[a-1][0] == "-") &&(info == 0))
				{
					vacio[a-1][0] = "O";
				}
				
				else if((vacio[a-1][0] == "X")or(vacio[a-1][0] == "O"))
				{
					info = 1;
				}
			}
		}
		
		for(int a=4; a<7; a++)
		{
			if (y == a)
			{
				if((vacio[a-4][1] == "-")&&(info == 0))
				{
					vacio[a-4][1] = "O";
				}
				
				else if ((vacio[a-4][1] == "X")or(vacio[a-4][1] == "O"))
				{
					info = 1;
				}
			}
		}
		for(int a=7; a<10; a++)
		{
			if (y == a)
			{
				if((vacio[a-7][2] == "-")&&(info == 0))
				{
					vacio[a-7][2] = "O";
				}
				
				else if ((vacio[a-7][2] == "X")or(vacio[a-7][2] == "O"))
				{
					info = 1;
				}
			}
		}
	}
	while(!(y<10 && y>=1));
	system("cls");
	// system("clear") // para linux
	turnos++;
	if (info == 1)
	{
		system("cls");
		tablero();
		
		cout << endl;
		cout << "Jugador 2" << endl;
		cout <<"esta poscision ya se encuentra ocupada"<< endl;
		cout <<"porfavor vuelve a intenarlo"<< endl;
		info=0;
		turnos--;
		cin >> y;
		turno2(y);
	}
	else
		tablero();
}

void limpiar()
{
	turnos=0;
	gana=0;
	tablerolimpio();
}
void ejemplo1(){
	rejuego: //esta variable es para comenzar de nuevo el juego
		
		while (turnos < 9)
	{
			system("cls");
			//system("clear") //para linux
			tablero();
			
			cout << "" << endl;
			cout << "Turno del jugador 1" << endl;
			cout << "porfavor introduce la ubicacion" << endl;
			
			cin >> x;
			cin.get();
			turno1(x);
			ganador();// aqui se evalua el tablero para saber quien gana
			
			if(gana==1)
			{
				cout <<"GANA EL JUGADOR 1"<< endl;
				cin.get();
				cout << "Juego terminado" << endl;
				cin.get();
				cout << "desea jugar de nuevo" << endl;
				cout << "1 - SI " << endl;
				cout << "2 - NO " << endl;
				cin >> replay;
				
				if(replay==1)
				{
					limpiar(); // esta funcio reinicia las variables de verificacion
					goto rejuego;
				}
				else if (replay ==2)
				{
					return;
				}
				return;
			}
			
			if (turnos<=8) // este evalua si ya se terminaron los turnos
			{
				
				cout << "" <<endl;
				cout << "ahora es el turno del juador 2"<< endl;
				cout << "introduce la posicion " << endl;
				cin >> y;
				cin.get();
				turno2(y);
				ganador();
				
				if (gana==2)
				{
					cout << endl;
					cout << "gana el jugador 2"<< endl;
					cin.get();
					cout << "juego terminado" << endl;
					cin.get();
					cout << "desea jugar de nuevo" << endl;
					cout << "1 - SI " << endl;
					cout << "2 - NO " << endl;
					cin >> replay;
					
					if(replay==1)
					{
						limpiar();// esta funcio reinicia las variables de verificacion
						goto rejuego;
					}
					else if (replay ==2)
					{
						return;
					}
					return;
				}
			}
			ganador();
	}
		
		
		if(gana==0)
		{
			cout << "NADIE GANA" << endl;
			cout << "juego terminado"<< endl;
			cin.get();
			cout << "desea jugar de nuevo" << endl;
			cout << "1 - SI " << endl;
			cout << "2 - NO " << endl;
			cin >> replay;
			
			if(replay==1)
			{
				limpiar(); // esta funcio reinicia las variables de verificacion
				goto rejuego;
			}
			else if (replay ==2)
			{
				cout << "fin" << endl;
				cin.get();
				return;
			}
			
			return;
		}
		cout << "fin" << endl;
		cin.get();
}
void ejemplo2(){
	OcultaCursor();
	
	pintar();
	gotoxy(xc, yc); printf("%c", 4);
	
	while(tecla != ESC && game_over())
	{
		borrar_cuerpo();
		guardar_posicion();
		dibujar_cuerpo();
		comida();
		teclear();
		teclear();
		
		if(dir == 1) y--;
		if(dir == 2) y++;
		if(dir == 3) x++;
		if(dir == 4) x--;
		
		Sleep(velocidad);
	}
	pintar();
}
void ejemplo3(){
	cout<<" \n \n \t \t \t \tCuadrado Magico \n \n";
	cout<<"\t \t Valores de 1 al 9 ( los numeros no se deben repitir)\n \n\n";
	cout<<"\n \t \t \t \tINGRESE LA MATRIZ \n\n";
	cuadroMagico();
}
void ejemplo4(){
	int n;
	cout << "Yan-Ken-Po" << endl;
	cout << "Presione uno para jugar: "; cin >> n;
	if(n==1){
		int jugada;
		jugada = rand()%2;
		switch(jugada){
		case 0:
			cout << "Gana el de la izquierda <----------------- " << endl;
			break;
		case 1:
			cout << "Gana el de la Derecha   -----------------> " << endl;
			break;
		default:
			cout << "Empate" << endl;
			break;
		}
	}else{
		cout << "Hasta Luego" << endl;
		Sleep(1000);
	}
}
void ejemplo5(){
	cout << "Era un chiste, solo hay 4 juegos :(" << endl;
}

void Obtener_Longitudes(){
	contador_usuario=strlen(usuario);
	contador_contrasena=strlen(contrasena);
} 
bool Validar_Acceso(char dato1[],int Num_dato1, char dato2[],int Num_dato2){
	bool Aprobado=false;
	int Conteo=0;
	if (Num_dato2>=1 && Num_dato2==Num_dato1) {
		for (int i=0;i<Num_dato1;i++) {
			if (dato1[i]==dato2[i]) {
				Conteo++;
			}
		}
		if (Conteo==Num_dato1) {
			Aprobado=true;
		} else {
			Aprobado=false;
		}
	} else {
		Aprobado=false;
	}
	
	return Aprobado;
}
bool Acceso(){
	bool permiso, fin=false, Pase1, Pase2;
	int Contador=0, LongitudX;
	Obtener_Longitudes();
	cin.getline(user,256);
	LongitudX=strlen(user);
	Pase1=Validar_Acceso(usuario, contador_usuario, user, LongitudX);
	do {
		pass[Contador]=getch();
		if (pass[Contador]==13) {
			pass[Contador]='\0'; fin=true;
		} else {
			cout<<"°"; Contador++;
		}
	} while (fin!=true);
	LongitudX=strlen(pass);
	Pase2=Validar_Acceso(contrasena, contador_contrasena, pass, LongitudX);
	if (Pase1==true && Pase2==true) {
		permiso=true;
	} else {
		permiso=false;
	}
	return permiso;
}
