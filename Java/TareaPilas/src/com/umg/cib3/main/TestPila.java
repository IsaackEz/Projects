/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.umg.cib3.main;

import com.umg.cib3.pilas.Pila;
import com.umg.cib3.pilas.PilaException;
import java.util.Random;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Noe_Campos
 */
public class TestPila {
    
    public static void main(String[] args) {
        Pila p = new Pila();
        Random r = new Random();
        System.out.println("Añadir datos a la pila: ");
        // +1 para ver que se descarte el último intento de push:
        for(int i = 0; i < p.getCapacidad() + 1; i++)
        {
            Integer valor = r.nextInt(100);
            System.out.println("Intentando agregar: " + valor);
            try {
                p.push(valor);
            } catch (PilaException ex) {
                System.out.println("...");
            }
        }
        
        System.out.println("Ahora vaciando la pila: ");
        for (int i = p.getCapacidad(); i >= 0; i--) 
        {
            System.out.println("extrañendo dato: " + p.pop());
        }
        
        System.out.println("Pila: " + p.paraImprimir());
    }
    
}
