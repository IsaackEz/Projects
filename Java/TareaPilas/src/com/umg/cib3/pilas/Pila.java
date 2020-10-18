
package com.umg.cib3.pilas;

import java.util.Arrays;

/**
 *
 * @author Noe_Campos
 */
public class Pila {
    protected Object[] datos;
    protected int contador = 0; 
    protected int capacidad = 0; 
    
    public Pila()
    {
        capacidad = 10; 
        contador = 0;
        datos = new Object[capacidad]; 
    }
    
    public Pila(int capacidad)
    {
        this.capacidad = capacidad; 
        contador = 0;
        datos = new Object[this.capacidad]; 
    }
    
    public Pila(Object[] otrosDatos)
    {
        datos = otrosDatos;
        capacidad = otrosDatos.length; 
        // determinar cuantos datos vienen en la pila: 
        while( datos[contador] != null )
        {
            contador++;
        }        
        // observa que si el primer elemento del arreglo es nulo, 
        // entonces se verá como si la pila está vacía. 
    }    
    
    public boolean estaVacia()
    {
        return contador == 0;
    }
    
    public boolean estaLlena()
    {
        // No debería ser >= pero por si las dudas
        return contador >= capacidad;
    }
    
    public int getContador()
    {
        return contador;
    }
    
    public int getCapacidad()
    {
        return capacidad;
    }
    
    public void push(Object nuevoDato) throws PilaException
    {
//        if ( this.estaLlena() )
//        {
//            return;
//        }
        try
        {
            System.out.println("Antes contador = " + contador);
            datos[contador] = nuevoDato;            
            ++contador;
        }
        catch(ArrayIndexOutOfBoundsException ex)
        {
            System.out.println("Sucedió una excepción: " + ex);
            throw new PilaException("Ya no hay espacio en la pila!!!");
        }
        finally
        {
            System.out.println("Despues contador = " + contador);
        }
    }
    
    public Object pop()
    {
//        if (this.estaVacia())
//        {
//           return null;
//        }
        Object temp = null;
        try{
            temp = datos[contador-1];
            datos[--contador] = null;
        }
        catch(ArrayIndexOutOfBoundsException ex){
            System.out.println("Excepcion en el pop...");
        }        
        return temp;        
    }
    
    public String paraImprimir()
    {
        String paraImprimir = String.format("Capacidad:%s, Contador:%s, Datos:%s", capacidad, contador, Arrays.toString(datos));
        
        return paraImprimir;
    }
}