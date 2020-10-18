//Carlos Isaac Espinoza Alvarez   Cibernetica 1er  Semestre
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <fstream>

using namespace std;

void inicio();
void rellenar();
void monstruo();
void monstruodif();
void monstruogrande();
void gameover();
void victoria();
void matriz();
void dificil();
void rendirse();

void colocarusuario();
void colocarpozos(int, int);
void colocarmonstruo(int, int);
void colocarmonstruogrande(int, int);
void colocarsalida();
void colocar(int);

const unsigned int ARRIBA = 'w';
const unsigned int ABAJO = 's';
const unsigned int IZQ = 'a';
const unsigned int DER = 'd';

const int FILAS = 10;
const int COLUMNAS = 10;
int calabozo[FILAS][COLUMNAS];

int c = 1, aux,pun, kills, cobarde, explorador,valor,boss;
float vida = 5;
int p,m,g,v;
char nombre[50];

int main(){
	inicio();
	colocarusuario();
 	colocarpozos(p,v);
	colocarmonstruo(m,v);
	colocarmonstruogrande(g,v);
	colocarsalida();
	rellenar();	
	return 0;
}
void inicio(){
	cout<<endl;
	cout<<"\t\t\t\t\t\tBIENVENIDO AL  CALABOZO"<<endl<<endl;
	cout<<"\t\t\t\t\t   LAS REGLAS SON SIMPLES... ESCAPA"<<endl;
	cout<<"\t\t    PERO CUIDADO.. SUELEN HABER MONSTRUOS Y POZOS PARA QUE NUNCA SALGAS DE AQUI!!"<<endl<<endl;
	cout<<"\t    Al matar monstruos recuperas vida, si te derrotan tu la pierdes, si caes en un pozo estas frito,\n \t\t\t\t\t\tjamas podras salir de ese lugar"<<endl;
	cout<<"\tGanas puntos al moverte, no puedes regresar una ves pasado la habitacion anterior, si encuentras la salida ganas."<<endl;
	cout<<"\tExisten jefes que si no tienes los suficientes puntos, no los podras enfrentar, en cambio, si los matas \n\t\t\t\t\t\trecuperas mucha vida."<<endl;
	cout<<"BUENA SUERTE... LA NECESITARAS"<<endl<<endl;
	system("pause");
	system("cls");
	cout<<"Utiliza las flechas para moverte"<<endl;	
	cout<<"Si te quieres rendir, pulsa    R"<<endl;
	cout<<"Si quieres cambiar a dificultad dificil presiona   X"<<endl;
	system("pause");
}
void colocarpozos(int p, int v){
	int cont = 0;
	p=5;
	v=2;
	while(cont<p){
		colocar(v);
		cont++;		
	}	
}
void colocarmonstruo(int m, int v){
	int cont = 0;
	m=10;
	v=2;
	while(cont<m){
		colocar(3);
		cont++;	
	}
}
void colocarmonstruogrande(int g, int v){
	int cont = 0; 
	g=5;
	v=2;
	while(cont<g){
		colocar(4);
		cont++;	
	}
}
void colocar(int valor){
	srand(time(0));
	int f=0,c=0;
	while(1){
		f=rand()%10;
		c=rand()%10;
		if(calabozo[f][c]==0){
			calabozo[f][c]=valor;
			break;
		}
	}
}
void colocarsalida(){
	colocar(5);
}
void colocarusuario(){
	colocar(1);
}
void rellenar(){	
	matriz();
    int num=1,a,b;
	srand(time(0));	
movimiento:
	while (c != 0){
		c = _getch();
		switch (c) {
			case ARRIBA:
				explorador++;
				pun++;
				for(int i = 0;i<10;i++){
					for(int j = 0;j<10;j++){
						if(num==calabozo[i][j]){
							a=i;
							b=j;
							//cout<<"["<<a<<"]"<<"["<<b<<"]  ";
						}
					}
				}
				a--;
				if(a<0){
					cout<<"\t\tPared"<<endl;
					a++;
					calabozo[a][b]=1;
					pun--;
					explorador--;				
					goto movimiento;
										
				}
				if(calabozo[a][b]==0){
					calabozo[a][b]=1;
					calabozo[a+1][b]=9;
					matriz();
				}
				else{
					
				if(calabozo[a][b]==9){
					cout<<"\tYa has pasado por aqui antes"<<endl;
					pun--;
					explorador--;
					a++;
				}				
				else{
					if(calabozo[a][b]==3){
						cout<<"\t\tMonstruo"<<endl;						
						calabozo[a][b]=0;
						a++;
						monstruo();
					}
					else{
						if(calabozo[a][b]==2){
							cout<<"\t\tCaiste en un pozo!!  :(";
							system("pause");
							gameover();
						}
						else{
							if(calabozo[a][b]==5){
								victoria();
							}
							else{							
								if(calabozo[a][b]==4){	
								cout<<"\t\tBOSS"<<endl;
								calabozo[a][b]=6;
								a++;			
								monstruogrande();
								}
							}
							}								
						}
					}				
				}
				calabozo[a][b]=1;				
				break;	
				
				
			case ABAJO:
				pun++;
				explorador++;
				for(int i = 0;i<10;i++){
					for(int j = 0;j<10;j++){
						if(num==calabozo[i][j]){
							a=i;
							b=j;
							//cout<<"["<<a<<"]"<<"["<<b<<"]  ";
						}		
					}
			 	}
				a++;
				if(a==10){
						cout<<"\t\tPared"<<endl;
						a--;
						calabozo[a][b]=0;
						pun--;
					explorador--;
						goto movimiento;
				}
				if(calabozo[a][b]==0){
					calabozo[a][b]=1;
					calabozo[a-1][b]=9;
					matriz();
				}
				else{
					if(calabozo[a][b]==9){
					cout<<"\tYa has pasado por aqui antes"<<endl;
					pun--;
					explorador--;
					a--;
				}
				else {			
					if(calabozo[a][b]==3){
						cout<<"\t\tMonstruo"<<endl;
						calabozo[a][b]=0;
						a--;
						monstruo();
						}
						else{
							if(calabozo[a][b]==2){
							cout<<"\t\tCaiste en un pozo   :("<<endl;
							system("pause");
							gameover();
						}
						else{
							if(calabozo[a][b]==5){
								victoria();
							}
							else{							
								if(calabozo[a][b]==4){
									cout<<"\t\tBOSS"<<endl;
								calabozo[a][b]=6;	
								a--;						
								monstruogrande();
								}
							}
						}
					}
				}
			}
			calabozo[a][b]=9;
				break;
				case IZQ:
				pun++;
				explorador++;
				for(int i = 0;i<10;i++){
					for(int j = 0;j<10;j++){
						if(num==calabozo[i][j]){
							a=i;
							b=j;
							//cout<<"["<<a<<"]"<<"["<<b<<"]  ";
						}		
					}
				}
				b--;
				if(b<0){
					cout<<"\t\tPared"<<endl;
					b++;
					calabozo[a][b]=0;
					pun--;
					explorador--;
					goto movimiento;
				}
				if(calabozo[a][b]==0){
					calabozo[a][b]=1;
					calabozo[a][b+1]=9;
					matriz();
				}
				else{
					if(calabozo[a][b]==9){
					cout<<"\tYa has pasado por aqui antes"<<endl;
					pun--;
					explorador--;
					b++;
				}
				else{
					if(calabozo[a][b]==3){
						cout<<"\t\tMonstruo"<<endl;
						calabozo[a][b]=0;
						b++;
						monstruo();
					}
					else{
						if(calabozo[a][b]==2){
							cout<<"\t\tCaiste en un pozo   :("<<endl;
							system("pause");
							gameover();
						}
						else{
							if(calabozo[a][b]==5){
								victoria();
							}
							else{							
								if(calabozo[a][b]==4){
									cout<<"\t\tBOSS"<<endl;
								calabozo[a][b]=6;
								b++;							
								monstruogrande();
								}
							}
						}
					}
				}
			}
			calabozo[a][b]=9;
				break;				
				
			case DER:
				pun++;
				explorador++;
				for(int i = 0;i<10;i++){
					for(int j = 0;j<10;j++){
						if(num==calabozo[i][j]){
							a=i;
							b=j;
							//cout<<"["<<a<<"]"<<"["<<b<<"]  ";
						}		
					}
				}
				b++;
				if(b>10){
					cout<<"\t\tPared"<<endl;					
					b--;
					calabozo[a][b]=0;		
					pun--;
					explorador--;		
					goto movimiento;
				}
				if(calabozo[a][b]==0){
					calabozo[a][b]=1;
					calabozo[a][b-1]=9;
					matriz();
				}
				else{
				
				if(calabozo[a][b]==9){
					cout<<"\tYa has pasado por aqui antes"<<endl;
					pun--;
					explorador--;
					b--;
			 }
				
				
				else{
					if(calabozo[a][b]==3){
						cout<<"\t\tMonstruo"<<endl;
						calabozo[a][b]=0;
						b--;
						monstruo();
				 }
					else{
						if(calabozo[a][b]==2){
							cout<<"\t\tCaiste en un pozo   :("<<endl;	
							system("pause");						
							gameover();
					 }
						else{
							if(calabozo[a][b]==5){
								victoria();
							}
							else{							
								if(calabozo[a][b]==4){
									cout<<"\t\tBOSS"<<endl;
									calabozo[a][b]=6;
									b--;
								monstruogrande();
								}
							}
						}
					}
				}
			
		}
			calabozo[a][b]=9;							
			break;
			case 'R':
			case 'r':				
				rendirse();
			break;
			case 'X':
			case 'x':
				dificil();
				break;
		}		
	}	
}
void dificil(){
	system("cls");
	cout<<"MODO DIFICIL ACTIVADO"<<endl<<"Si quieres volver al modo normal presiona  F"<<endl;
dificil:
	int num=1,a,b;
	srand(time(0));	
movimiento:
	while (c != 0){
		c = _getch();
		switch (c) {
			case ARRIBA:
				explorador++;
				pun++;
				for(int i = 0;i<10;i++){
					for(int j = 0;j<10;j++){
						if(num==calabozo[i][j]){
							a=i;
							b=j;
							//cout<<"["<<a<<"]"<<"["<<b<<"]  ";
						}
					}
				}
				a--;
				if(a<0){
					cout<<"\t\tPared"<<endl;
					a++;
					calabozo[a][b]=1;	
					pun--;
					explorador--;				
					goto movimiento;
										
				}
				if(calabozo[a][b]==0){
					calabozo[a][b]=1;
					calabozo[a+1][b]=9;
					
				}
				else{
					
				if(calabozo[a][b]==9){
					cout<<"\tYa has pasado por aqui antes"<<endl;
					pun--;
					explorador--;
					a++;
				}				
				else{
					if(calabozo[a][b]==3){
						cout<<"\t\tMonstruo"<<endl;						
						calabozo[a][b]=0;
						a++;
						monstruo();
					}
					else{
						if(calabozo[a][b]==2){
							cout<<"\t\tCaiste en un pozo!!  :(";
							system("pause");
							gameover();
						}
						else{
							if(calabozo[a][b]==5){
								victoria();
							}
							else{							
								if(calabozo[a][b]==4){	
								cout<<"\t\tBOSS"<<endl;
								calabozo[a][b]=6;
								a++;			
								monstruogrande();
								}
							}
							}								
						}
					}				
				}
				calabozo[a][b]=1;				
				break;	
				
				
			case ABAJO:
				pun++;
				explorador++;
				for(int i = 0;i<10;i++){
					for(int j = 0;j<10;j++){
						if(num==calabozo[i][j]){
							a=i;
							b=j;
							//cout<<"["<<a<<"]"<<"["<<b<<"]  ";
						}		
					}
			 	}
				a++;
				if(a==10){
						cout<<"\t\tPared"<<endl;
						a--;
						calabozo[a][b]=0;
						pun--;
					explorador--;
						goto movimiento;
				}
				if(calabozo[a][b]==0){
					calabozo[a][b]=1;
					calabozo[a-1][b]=9;
				
				}
				else{
					if(calabozo[a][b]==9){
					cout<<"\tYa has pasado por aqui antes"<<endl;
					pun--;
					explorador--;
					a--;
				}
				else {			
					if(calabozo[a][b]==3){
						cout<<"\t\tMonstruo"<<endl;
						calabozo[a][b]=0;
						a--;
						monstruo();
						}
						else{
							if(calabozo[a][b]==2){
							cout<<"\t\tCaiste en un pozo   :("<<endl;
							system("pause");
							gameover();
						}
						else{
							if(calabozo[a][b]==5){
								victoria();
							}
							else{							
								if(calabozo[a][b]==4){
									cout<<"\t\tBOSS"<<endl;
								calabozo[a][b]=6;	
								a--;						
								monstruogrande();
								}
							}
						}
					}
				}
			}
			calabozo[a][b]=9;
				break;
				case IZQ:
				pun++;
				explorador++;
				for(int i = 0;i<10;i++){
					for(int j = 0;j<10;j++){
						if(num==calabozo[i][j]){
							a=i;
							b=j;
							//cout<<"["<<a<<"]"<<"["<<b<<"]  ";
						}		
					}
				}
				b--;
				if(b<0){
					cout<<"\t\tPared"<<endl;
					b++;
					calabozo[a][b]=0;
					pun--;
					explorador--;
					goto movimiento;
				}
				if(calabozo[a][b]==0){
					calabozo[a][b]=1;
					calabozo[a][b+1]=9;
					
				}
				else{
					if(calabozo[a][b]==9){
					cout<<"\tYa has pasado por aqui antes"<<endl;
					pun--;
					explorador--;
					b++;
				}
				else{
					if(calabozo[a][b]==3){
						cout<<"\t\tMonstruo"<<endl;
						calabozo[a][b]=0;
						b++;
						monstruo();
					}
					else{
						if(calabozo[a][b]==2){
							cout<<"\t\tCaiste en un pozo   :("<<endl;
							system("pause");
							gameover();
						}
						else{
							if(calabozo[a][b]==5){
								victoria();
							}
							else{							
								if(calabozo[a][b]==4){
									cout<<"\t\tBOSS"<<endl;
								calabozo[a][b]=6;
								b++;							
								monstruogrande();
								}
							}
						}
					}
				}
			}
			calabozo[a][b]=9;
				break;				
				
			case DER:
				pun++;
				explorador++;
				for(int i = 0;i<10;i++){
					for(int j = 0;j<10;j++){
						if(num==calabozo[i][j]){
							a=i;
							b=j;
							//cout<<"["<<a<<"]"<<"["<<b<<"]  ";
						}		
					}
				}
				b++;
				if(b>10){
					cout<<"\t\tPared"<<endl;					
					b--;
					calabozo[a][b]=0;		
					pun--;
					explorador--;		
					goto movimiento;
				}
				if(calabozo[a][b]==0){
					calabozo[a][b]=1;
					calabozo[a][b-1]=9;
					
				}
				else{
				
				if(calabozo[a][b]==9){
					cout<<"\tYa has pasado por aqui antes"<<endl;
					pun--;
					explorador--;
					b--;
			 }
				
				
				else{
					if(calabozo[a][b]==3){
						cout<<"\t\tMonstruo"<<endl;
						calabozo[a][b]=0;
						b--;
						monstruo();
				 }
					else{
						if(calabozo[a][b]==2){
							cout<<"\t\tCaiste en un pozo   :("<<endl;	
							system("pause");						
							gameover();
					 }
						else{
							if(calabozo[a][b]==5){
								victoria();
							}
							else{							
								if(calabozo[a][b]==4){
									cout<<"\t\tBOSS"<<endl;
									calabozo[a][b]=6;
									b--;
								monstruogrande();
								}
							}
						}
					}
				}
			
		}
			calabozo[a][b]=9;							
			break;
			case 'R':
			case 'r':				
				rendirse();
			break;
			case 'F':
			case 'f':
				rellenar();
		}
	}
}
void monstruodif(){
	char combate;
	cout<<"Estas frente a una bestia! Huye o Ataca!"<<endl<<endl;
	cout<<"H     para huir!"<<endl;
	cout<<"A     para atacar!"<<endl<<"  Elija una opcion!"<<endl;
	cin>>combate;
	switch(combate){
		case 'h':
		case 'H':
			cout<<"Escape exitoso! Pero perdiste 2 puntos y .5 de vida:("<<endl<<endl;
			vida=vida-.5;
			pun= pun-2;
			cobarde++;
			cout<<"Se ajusto tu posicion"<<endl<<endl;
			colocarusuario();
			rellenar();
			break;
		case 'a':
		case 'A':
			if(pun>5){
				cout<<"Lo has conseguido! Obtuviste 3 puntos."<<endl<<endl;
				vida++;
				pun = pun+3;
				kills++;
			}
			else{
				cout<<"No eres lo suficientemente fuerte aun."<<endl<<endl;
				vida--;
				cout<<"Te quedan "<<vida<<" puntos de vida."<<endl;
				system("pause");
				if(vida<=0){
				gameover();	
				}
			}
			break;
			default:
				cout<<"Opcion invalida"<<endl;
				monstruodif();
	}
}
void rendirse(){
	cout<<"Que lastima... Ni ganas dan de darte puntos..."<<endl;
	cout<<"Ingresa tu nombre para que todos sepan quien nunca saldra de aqui!!"<<endl;
	cin>>nombre;
	system("cls");
	cout<<nombre<<" no pudo soportar el calabozo y termino por rendirse."<<endl;
	cout<<"Ahora todos sabran..."<<endl<<endl;
	ofstream datos;
	datos.open("Escape del calabozo.txt",ios::app);
	if(datos.fail()){
		cout<<"No ha sido posible abrir el archivo.";
		exit(0);
	}
	datos<<nombre<<" no pudo soportar el calabozo y termino por rendirse."<<endl<<endl;
	datos.close();
	
	ifstream estadisticas;
	string texto;
	estadisticas.open("Escape del calabozo.txt",ios::in);
	if(estadisticas.fail()){
		cout<<"No ha sido posible abrir el archivo.";
		exit(0);
	}
	cout<<"HISTORIAL DE JUEGO"<<endl;
	while(!estadisticas.eof()){
		getline(estadisticas,texto);
		cout<<texto<<endl;
	}
	estadisticas.close();
	exit(0);
}
void gameover(){
	system("cls");
	cout<<"HAS MUERTO!"<<endl;
	cout<<"Ingresa tu nombre."<<endl;
	cin>>nombre;
	cout<<"Puntuacion: "<<endl;
	cout<<"Puntos obtenidos: "<<pun<<endl;
	cout<<"No. de mostruos vencidos: "<<kills<<endl;
	cout<<"No. de huidas:"<<cobarde<<endl;
	cout<<"No. de habitaciones visitadas: "<<explorador<<endl;
	cout<<boss<<"/5 jefes vencidos"<<endl;
	ofstream datos;
		
	datos.open("Escape del calabozo.txt",ios::app);
	if(datos.fail()){
		cout<<"No ha sido posible abrir el archivo.";
		exit(0);
	}
	datos<<"Puntuacion de "<<nombre<<endl;
	datos<<"Puntos obtenidos: "<<pun<<endl;
	datos<<"No. de mostruos vencidos: "<<kills<<endl;
	datos<<"No. de huidas: "<<cobarde<<endl;
	datos<<"No. de habitaciones visitadas: "<<explorador<<endl;
	datos<<boss<<"/5 jefes vencidos"<<endl<<endl;
	datos.close();
	ifstream estadisticas;
	string texto;
	estadisticas.open("Escape del calabozo.txt",ios::in);
	if(estadisticas.fail()){
		cout<<"No ha sido posible abrir el archivo.";
		exit(0);
	}
	cout<<"HISTORIAL DE JUEGO"<<endl;
	while(!estadisticas.eof()){
		getline(estadisticas,texto);
		cout<<texto<<endl;
	}
	estadisticas.close();
	exit(0);
}
void monstruogrande(){
	cout<<"Estas frente a una bestia enorme! No puedes huir!\nSolo si eres digno podras derrotarlo."<<endl<<endl<<endl;
	system("pause");
	if(pun>8){
		cout<<"GENIAL!! Has derrotado a uno de los 5 jefes!"<<endl<<endl<<endl;
		vida=vida+2;
		pun=pun+8;
		boss++;		
	}
	else cout<<"Su poder era demasiado para un soldado como tu."<<endl<<endl<<endl;
	vida=vida-2;
	if(vida<=0){
		system ("pause");
		gameover();	
	}
}
void monstruo(){
	char combate;
	cout<<"Estas frente a una bestia! Huye o Ataca!"<<endl<<endl;
	cout<<"H     para huir!"<<endl;
	cout<<"A     para atacar!"<<endl<<"  Elija una opcion!"<<endl;
	cin>>combate;
	switch(combate){
		case 'h':
		case 'H':
			cout<<"Escape exitoso! Pero perdiste 2 puntos y .5 de vida:("<<endl<<endl;
			vida=vida-.5;
			pun= pun-2;
			cobarde++;
			cout<<"Se ajusto tu posicion"<<endl<<endl;
			colocarusuario();
			matriz();
			rellenar();
			break;
		case 'a':
		case 'A':
			if(pun>5){
				cout<<"Lo has conseguido! Obtuviste 3 puntos."<<endl<<endl;
				vida++;
				pun = pun+3;
				kills++;
			}
			else{
				cout<<"No eres lo suficientemente fuerte aun."<<endl<<endl;
				vida--;
				cout<<"Te quedan "<<vida<<" puntos de vida."<<endl;
				system("pause");
				if(vida<=0){
				gameover();	
				}
			}
			break;
			default:
				cout<<"Opcion invalida"<<endl;
				monstruo();
			
	}
}
void victoria(){
	cout<<"FELICIDADES!  Escapaste del calabozo!"<<endl;
	cout<<"Ingresa tu nombre."<<endl;
	cin>>nombre;
	cout<<"Puntuacion: "<<endl;
	cout<<vida<<" puntos de vida totales."<<endl;
	cout<<"Puntos obtenidos: "<<pun<<endl;
	cout<<"No. de mostruos vencidos: "<<kills<<endl;
	cout<<"No. de huidas: "<<cobarde<<endl;
	cout<<"No. de habitaciones visitadas: "<<explorador<<endl;
	cout<<boss<<"/5 jefes vencidos"<<endl<<endl;
	ofstream datos;
	datos.open("Escape del calabozo.txt",ios::app);
	if(datos.fail()){
		cout<<"No ha sido posible abrir el archivo.";
		exit(0);
	}
	datos<<"Puntuacion de "<<nombre<<endl;
	datos<<vida<<" puntos de vida totales."<<endl;
	datos<<"Puntos obtenidos: "<<pun<<endl;
	datos<<"No. de mostruos vencidos: "<<kills<<endl;
	datos<<"No. de huidas: "<<cobarde<<endl;
	datos<<"No. de habitaciones visitadas: "<<explorador<<endl;
	datos<<boss<<"/5 jefes vencidos"<<endl<<endl;
	datos.close();	
	ifstream estadisticas;
	string texto;
	estadisticas.open("Escape del calabozo.txt",ios::in);
	if(estadisticas.fail()){
		cout<<"No ha sido posible abrir el archivo.";
		exit(0);
	}
	cout<<"HISTORIAL DE JUEGO"<<endl;
	while(!estadisticas.eof()){
		getline(estadisticas,texto);
		cout<<texto<<endl;
	}
	estadisticas.close();
	exit (0);
}
void matriz(){	
	system("cls");	
	for (int i=0;i<FILAS;i++){
        for(int j=0;j<COLUMNAS;j++){
        	
        	cout<<"    "<<calabozo[i][j];            
        } 
      cout<<"\n\n";	
	}cout<<vida<<" PUNTOS DE VIDA"<<endl<<"MODO FACIL"<<endl;
}