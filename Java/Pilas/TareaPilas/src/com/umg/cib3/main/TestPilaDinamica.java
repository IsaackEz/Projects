/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.umg.cib3.main;

import com.umg.cib3.pilas.PilaDinamica;
import java.util.Random;

/**
 *
 * @author Noe_Campos
 */
public class TestPilaDinamica {
    
    public static void main(String[] args) {
        PilaDinamica pd = new PilaDinamica();
        Random r = new Random();
        System.out.println("Añadir datos a la pila: ");
        // Hasta 20 para ver que se añada mas de los que puede inicialmente:
        for(int i = 0; i < 12; i++)
        {
            Integer valor = r.nextInt(100);
            System.out.println("Intentando agregar: " + valor);
            pd.push(valor);
        }
        System.out.println("Pila: " + pd.paraImprimir());
        
        System.out.println("Ahora vaciando la pila: ");
        for (int i = pd.getCapacidad(); i >= 0; i--) 
        {
            System.out.println("extrañendo dato: " + pd.pop());
        }
        
        System.out.println("Pila: " + pd.paraImprimir());
    }
    
}
