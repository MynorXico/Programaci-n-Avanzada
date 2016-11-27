#pragma once
public ref class NodoManejado
{
private:
	int Dato;
	NodoManejado ^Siguiente;

public:
	NodoManejado(int dato);
	NodoManejado ^GetSiguiente();
	void SetSiguiente(NodoManejado ^siguiente);
	int GetDato();
};

