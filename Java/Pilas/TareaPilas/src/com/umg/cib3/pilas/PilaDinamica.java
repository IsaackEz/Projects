/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.umg.cib3.pilas;

/**
 *
 * @author Noe_Campos
 */
public class PilaDinamica extends Pila {
    private int incrementoCapacidad = 5;

    public PilaDinamica() {
    }

    public PilaDinamica(int capacidad, int increCapa) {
        super(capacidad);
        this.incrementoCapacidad = increCapa;
    }

    public PilaDinamica(Object[] otrosDatos) {
        super(otrosDatos);
    }
    
    @Override
    public void push(Object nuevoDato)
    {
        // Si ya está llena, incrementar capacidad: 
        if ( super.estaLlena() )
        {
            super.capacidad += this.incrementoCapacidad;
            Object[] nuevosDatos = new Object[super.capacidad];
            // copiar los datos del viejo arreglo al nuevo: 
            for (int i = 0; i < super.datos.length; i++)
            {
                nuevosDatos[i] = super.datos[i];
            }
            // liberamos la referencia al conjunto de datos viejos:
            super.datos = null;
            // actualizamos los datos con el nuevo conjunto: 
            super.datos = nuevosDatos;
            // liberamos el temporal de nuevos datos: 
            nuevosDatos = null;
        }
        
        // En este punto ya se sabe que hay espacio para el nuevo dato,
        // le decimos a la clase madre que lo agregue. 
        super.push(nuevoDato);
    }
    
    public String paraImprimir()
    {
        String paraImprimir = super.paraImprimir();
        paraImprimir += ", IncrementoCapacidad: " + this.incrementoCapacidad;
        return paraImprimir;
    }   
}
