// Programa: Persona.cpp 
// Autor: Programaci�n IV
// Fecha Elaboraci�n:  20/Febrero/2019
// Fecha Modificaci�n: 20/Febrero/2019
//
// Introducci�n: Programa ejemplo de "herencia multiple"
//           Clase base = Persona con atributos p�blicos y protegidos(datos)
//           Clase derivada = Empleado y Jefe
//           Los objetos que sean del tipo Empleado y Jefe tendr�n atributos de esta clase(Por ejemplo "Salario") 
//           + los atributos heredados de clase "Persona"
#include <iostream>     /* Librer�a para operaciones de entrada/salida(I/O Stream)                             */
#include <iomanip>      /* Contiene prototipos de funci�n para manipuladores de flujo que dan formato a flujos */
                        /* de datos. Permitir� formatear y organizar la salida de datos.                       */ 
using namespace std; 

class Persona               // Clase Base Persona 
{    protected:  
       char nombre[40];
       int horas, edad;
       
	   

     public:         // Funciones Miembro        
     	 Persona( ) { };  // constructor por defecto      
		 void leerdatos( );  
		 void imprimirdatos( ); 
};

 // Declaraci�n del M�todo para dar valor a los atributos de la clase Persona
 void Persona :: leerdatos( )  
 {  
    cout << "Digitar el Nombre:" << endl; 
    cin>>nombre;  
    cout << "Digitar la Edad: " << endl; 
    cin >> edad;
    cout << "Cuantas horas?" << endl;
    cin >> horas;
 } 
 
 // M�todo que despliega los valores de los atributos de una persona
 void Persona :: imprimirdatos( ) 
 { 
    cout << endl << endl;
	cout << "----- Imprimir los Datos del Empleado -----" << endl;
	cout << "Nombre : " << nombre << endl;
	cout << "Horas : " <<horas<<endl;
	cout << "Edad : " << edad << " a";	
	printf("%c",164);         // Para mostrar la letra "�"
	cout << "os" << endl;
	}
	
	class Jefe : public Persona 
	{ 
     	protected: 
          float salarioanual; 
          char cargo[60]; 
          int horasExtra;
    
		public: 
          Jefe( ){ };                 // constructor por defecto 
		  void leeremp( );  
		  void imprimiremp( ); 
		  
	}; 
		  
	// Declaraci�n del M�todo para dar valor a los atributos de la clase Empleado 
	void Jefe :: leeremp( ) 
	{  
    	Persona::leerdatos();  
        cout << "Introducir Cargo:" << endl;
		cin >> cargo;   
		cout << "Introducir Sueldo:" << endl; 
		cin >> salarioanual; 
		cout << "Introducir horas extra trabajadas" << endl;
		cin >> horasExtra;
	}

	/* Definici�n de la Clase Empleado como clase derivada de la clase Persona. Se utiliza herencia p�blica */
	class Empleado : public Persona 
	{ 
     	protected: 
          float salarioanual; 
          char cargo[60]; 
          int horasExtra;
    
		public: 
          Empleado( ){ };                 // constructor por defecto 
		  void leeremp( );  
		  void imprimiremp( ); 
		  
	}; 
	
	void Jefe :: imprimiremp( )
 { 
      Persona :: imprimirdatos( );
	  cout << "Cargo del empleado: " << cargo << endl;
	  cout << "Sueldo anual empleado: $ " << fixed << showpoint << setprecision(2)              <<  salarioanual << endl; 
	  cout << "Sueldo total jefe: $ " << fixed << showpoint << setprecision(2)              <<  ((salarioanual*horasExtra)*1.4)<< endl;
	 
 } 
		  
	// Declaraci�n del M�todo para dar valor a los atributos de la clase Empleado 
	void Empleado :: leeremp( ) 
	{  
    	Persona::leerdatos();  
        cout << "Introducir Cargo:" << endl;
		cin >> cargo;   
		cout << "Introducir Sueldo:" << endl; 
		cin >> salarioanual; 
		cout << "Introducir horas extra trabajadas" << endl;
		cin >> horasExtra;
	}
 
 // M�todo que despliega los valores de los atributos de un empleado 
 void Empleado :: imprimiremp( )
 { 
      Persona :: imprimirdatos( );
	  cout << "Cargo del empleado: " << cargo << endl;
	  cout << "Sueldo anual empleado: $ " << fixed << showpoint << setprecision(2)              <<  salarioanual << endl; 
	  cout << "Sueldo total empleado: $ " << fixed << showpoint << setprecision(2)              <<  ((salarioanual*horasExtra)*1.2)<< endl;
	 
	  
 } 
 int main( ) 
 {
 	int tipo = 0;
 	
 	cout << "1.-Empleado \n2.- Jefe: "<<endl;
 	cin>>tipo;
 	
 	if(tipo == 1){
 		cout<<"Eres un empleado"<<endl;
 		Empleado Employee1;                 // Asociar variable con clases 
		Employee1.leeremp( );               // Obtener Informaci�n de Empleado 
	 	Employee1.imprimiremp( );  			// Imprimir Informaci�n Empleado 
	}
	else if(tipo == 2){
		cout<<"Eres el jefe"<<endl;
		Jefe Jefe1;                 
		Jefe1.leeremp( );               
	 	Jefe1.imprimiremp( );
	}
	
	 system("pause>nul"); 
	 return 0;
 }
