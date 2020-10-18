
struct Nodo {
	int dato;
	Nodo *next;
};

struct ListaSimple {
	Nodo *inicio;
	Nodo *next;
	
	ListaSimple(){
		inicio = 0;
	}

	void agregar(int nuevoDato){
		// Crear el nuevo nodo para alojar el nuevo dato:
		Nodo *nuevo = new Nodo;
		nuevo->dato = nuevoDato;
		nuevo->next = 0;

		// No hay datos ligados?
		if (inicio == 0){
			inicio = nuevo;
			return; // Salir
		}

		// Hay más datos ligados, buscar la última posición:
		Nodo *actual = inicio;
		// Hay alguién después de mi?
		while (actual->next != 0){
			actual = actual->next; // Movernos al siguiente...
			// actual = (*actual).next;
		}

		// Actual en este momento es el último en la lista
		// ligarle el nuevo dato:
		actual->next = nuevo;
	}

	// Esta función elimina un nodo de la lista, esto basado en el valor que se le provea. 
	// Eliminará el primer nodo que se encuentre cuyo dato coincida con el dato a eliminar. 
	// Se pueden presentar algunos casos de la lista: 
	// Caso 1: Solamente hay un Nodo en la lista (representaré un nodo con N, el nodo actual con NC, y nodo anterior con NP, 0 para nada): 
	//           NA -> N <- inicio, NP -> 0
	//
	//         Tanto inicio como NA apuntan al mismo nodo N, mientras que NP a nada; entonces para elimninar el nodo su dato debe coincidir
	//         el dato a eliminar, suponga que coinciden. Entonces lo que sucederá es que inicio debe moverse al siguiente nodo y eliminar 
	//         de la memoria lo que apunta NC: delete NA, inicio -> 0, NP -> 0
	//         Esto porque había solamente un nodo en la lista. 
	//          

	// Caso 2: Hay más de un nodo en la lista y el nodo que contiene el dato a eliminar no está al principio de la misma. 
	//           N1-> N2 -> N3 -> ... -> Nk-1 -> Nk
	//
	//         Suponga que el nodo a eliminar el N3, entonces lo que debe suceder es que tendremos NC apuntando a N3 y NP apuntando a N2,
	//         Una vez que pase esto, entonces hacemos que el siguiente de NP sea el siguiente de NC, en este caso N4; y hacer que el siguiente 
	//         de NC sea "nada" o 0. Una vez que hacemos procedemos con eliminar a NC y terminamos.
	//
	void eliminar(int dato){
		Nodo *tmpActual = inicio; // Copiar la referencia del inicio de la lista
		Nodo *tmpAnterior = 0; // Preparar una referencia al nodo anterior del nodo actual

		while (tmpActual != 0) // Mientras exista un nodo actual
		{
			if (tmpActual->dato == dato) // Si en dato contenido en el nodo es lo que buscamos, entonces procedemos a eliminarlo de la lista
			{
				if (tmpAnterior == 0) // Si es el primer nodo de la lista, entonces no hay un nodo anterior
				{
					inicio = tmpActual->next; // Si no tenemos un nodo anterior significa que estamos por eliminar el primer nodo de la lista (inicio)
				}
				else
				{
					tmpAnterior->next = tmpActual->next; // Si hay un nodo anterior, entonces hacer que el siguiente nodo del actual sea el siguiente nodo del anterior: 
				}

				tmpActual->next = 0; // Quitamos la referencia al nodo siguiente del nodo actual
				delete tmpActual; // Eliminamos el nodo actual
				break; // Terminamos
			}
			
			if (tmpActual->next != 0) // El nodo actual no tiene el dato que buscamos, veamos si el siguiente lo tiene
			{
				tmpAnterior = tmpActual; // Nodo anterior se convierte en el nodo actual
				tmpActual = tmpActual->next; // Nodo actual se convierte en el que le sigue
			}
		}
	}

	// Esta función elimina todos los nodos de la lista y libera la memoria reservada por cada nodo en la lista:
	void limpiar() 
	{
		Nodo *tmp = 0;

		// Mientras exista un nodo:
		while (inicio != 0)
		{
			tmp = inicio; // copiar la referencia de inicio a tmp (hacer que tmp apunte al mismo nodo que inicio)
			inicio = inicio->next; // Hacer que inicio se desplace al siguiente nodo
			delete tmp; // Borrar el nodo anterior
			tmp = 0;
		}

		inicio = 0; // Garantizar que inicio quede apuntando a nada.
	}

	// Esta función determinar cuántos nodos existen en la lista actual:
	int longitud()
	{
		Nodo *tmp = inicio; // copiar la referencia al nodo inicio de la lista
		int contador = 0; // preparar un contador en cero

		while(tmp != 0) // El nodo actual existe?
		{
			contador++; // Incrementar el contador
			tmp = tmp->next; // Pasar al siguiente posible nodo
		}
	}

	// La siguiente función realiza una búsqueda por un valor dentro la lista (en realidad si está en algún nodo)
	// La función regresa cero o nulo para indicar que el valor no se encuentra en la lista; en otro caso, regresa 
	// la dirección de memoria del Nodo que contiene el valor.
	Nodo* buscar(int valor)
	{
		Nodo *tmp = inicio; // Hacemos una variable Nodo temporal para visitar a todos los posibles nodos de la lista

		while (tmp != 0) // Mientras estemos visitando un Nodo válido (diferente de Nulo)
		{
			if (tmp->dato == valor) // El Nodo actual contiene al valor que buscamos?
			{
				break; // Ya terminamos de buscar, detener el ciclo
			}

			tmp = tmp->next; // Movernos al siguiente Nodo (si es que hay alguno...)
		}
		
		return tmp; // Salimos con la dirección de memoria del Nodo que contiene al valor
	}

	// La función insertar intentará insertar nuevoValor en la lista a partir de un valor que se supone 
	// existe en la lista (despuesDe). Por ejemplo: considere la lista 1->2->45->10; si llamamos la función 
	// insertar(2, -3) entonces deberíamos terminar con la lista 1->2->-3->45->10 porque el valor despuesDe si está
	// en la lista. Pero si sobre esa misma lista se invoca la función insertar(-1, 4) entonces la lista no cambiará porque 
	// -1 no está en la lista.
	void insertar(int despuesDe, int nuevoValor)
	{
		Nodo *td = buscar(despuesDe); // Primero busquemos el nodo que contiene al valor recibido en despuesDe

		if (td == 0) // Si no existe Nodo alguno que contenga a despuesDe entonces no hacemos nada
		{
			return; // Ignorar porque no podemos insertar a partir de un valor que no está en la lista.
		}

		// Si llegamos a este punto significa que la lista si tiene el valor despuesDe

		// Crear el nuevo nodo a insertar:
		Nodo *nuevoNodo = new Nodo; 
		// Poner nuevoValor en el dato del nuevo Nodo:
		nuevoNodo->dato = nuevoValor;
		// Hacemos que el nuevo nodo haga referencia al mismo siguiente que el nodo de despuesDe:
		nuevoNodo->next = td->next;
		// Hacemos que el nuevo nodo sea el siguiente nodo de despuesDe.
		td->next = nuevoNodo;
	}

};

struct Pila{
	Nodo *tope;
	void push(int ntope){
		Nodo *tmp = new Nodo;
		tmp->dato = ntope;
		tmp->next = 0;
		if(tope == 0){
			tope = tmp;
			return;
		}
		tmp->next = tope;
		tope = tmp;
	}
	int pop(){
		if(tope != 0){
			int dato = tope->dato;
			Nodo *tmp = tope;
			tope = tope->next;
			tmp->next = 0;
			delete tmp;
			tmp = 0;
			return dato;
		}
	}
	int peek(){
		int dato = pop();
		push(dato);
		return dato;
	}
};
