void insertar(int n){
	nodo* nuevoNodo = new nodo();
	nuevoNodo->valor = n;
	insertar(nuevoNodo);
}

void insertar(nodo* nuevoNodo){
	if(!root){
		root = nuevoNodo;
		rturn;
	}
	insertarRecursive(root, nuevoNodo);
}

private static void insertarRecursive(nodo* current, nodo* nuevoNodo){
	bool RL = 1; // 1->r 		0->L	
	if(current->valor < nuevoNodo->valor){
		RL = 0;
	}

	if(RL == 1){
		if(current->right == NULL){
			current->right = nuevoNodo;
		}else{
			insertarRecursive(current->right,nuevoElemento);
		}
	}else{
		if(current->left = NULL){
			current->left = nuevoNodo;
		}else{
			insertarRecursive(current->left, nuevoElemento);
		}
	}
}

static void eliminarNodo(nodo* nodoEliminar){
	nodo* nodoPreEliminar = buscarNodo(root, nodoEliminar);

	if(nodoPreEliminar->derecha->valor == nodoEliminar->valor){
		if(!(nodoPreEliminar->derecha->izquierda || nodoPreEliminar->derecha->derecha){
			nodoPreEliminar->derecha = NULL;
			return;
		}
		if(!nodoPreEliminar->derecha->derecha){
			nodoPreEliminar->derecha = nodoPreEliminar->derecha->izquierda;
			return;
		}
		if(!nodoPreEliminar->derecha->izquierda){
			nodoPreEliminar->derecha = nodoPreEliminar->derecha->derecha;
			return;
		}

		insertarRecursive(nodoPreEliminar->derecha->izquierda, nodoPreEliminar->derecha->derecha);
		nodoPreEliminar->derecha = nodoPreEliminar->derecha->izquierda;
	}
	if(nodoPreEliminar->izquierda->valor == nodoEliminar->valor){
		if(!(nodoPreEliminar->izquierda->izquierda || nodoPreEliminar->izquierda->derecha)){
			nodoPreEliminar->izquierda = NULL;
			return;
		}
		if(!nodoPreEliminar->izquierda->derecha){
			nodoPreEliminar->izquierda = nodoPreEliminar->izquierda->izquierda;
			return;
		}
		if(!nodoPreEliminar->izquierda->izquierda){
			nodoPreEliminar->izquierda = nodoPreEliminar->izquierda->derecha;
			return;
		}

		insertarRecursive(nodoPreEliminar->izquierda->izquierda, nodoPreEliminar->izquierda->derecha);
		nodoPreEliminar->izquierda = nodoPreEliminar->izquierda->izquierda;
	}
}

nodo* buscarNodo(int n){
	nodo* nuevoNodo = new nodo();
	nuevoNodo->valor = n;
	return buscarRec(root, nuevoNodo);
}

nodo* buscarRec(nodo* inicio, nodo* nodoBuscar){
	if(!(inicio->derecha ||inicio->izquierda)
		return NULL;
	if(inicio->derecha->valor == nodoBuscar->valor)
		return inicio;	
	if(inicio->izquierda->valor == nodoBuscar->valor)
		return inicio->izquierda;
	if(inicio->izquierda)
		return buscarRec(inicio->izquierda, nodoBuscar);
	if(inicio->derecha)
		return buscarRec(inicio->derecha, nodoBuscar);
	return NULL;
}

static void eliminarNodo(int n){
	nodo* nodoEliminar = new nodo();
	nodoEliminar->valor = n;
	eliminarNodo(nodoEliminar);
}
