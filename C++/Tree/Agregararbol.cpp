void agregar(int dato){
	Nodo *nuevo = new Nodo;
	nuevo->dato=dato;
	nuevo->izq = 0;
	nuevo->der = 0;
	nuevo->padre = 0;
	if(root == 0){
		root = nuevo;
		return;
	}
	Nodo *tmp = root;
	while(tmp != 0){
		if(tmp->dato>dato){
			if(tmp->izq == 0){
				tmp->izq = nuevo;
				break;
			}
			tmp = tmp->izq;
		}
		else{
			if(tmp->der == 0){
				tmp->der = nuevo;
			}
			tmp = tmp->der;
		}
	}
}
