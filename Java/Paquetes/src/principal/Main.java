package principal;

import Personas.Persona;
import formularios.DialogoEjemplo;

public class Main {
    public static void main(String[] args) {
        //null para decir que no hay un padre
        //true para decir que es un dialogo modal
        DialogoEjemplo de = new DialogoEjemplo(null, true);
        de.setVisible(true);
        
        if(de.isCanceled()){
            System.out.println("Cancelaron la captura de datos");
        }
        else{
            /*String nombre = de.getNombre();
            String edad = de.getEdad();
            Persona p = new Persona(nombre, Integer.parseInt(edad));
            System.out.println("Se capturo la siguiente informacion");
            System.out.println("Nombre: " + p.getNombre());
            System.out.println("Edad: " + p.getEdad());
            
            Persona p = new Persona();
            System.out.println("Nombre: " + Persona);
            System.out.println("Edad: " + Persona);
            de.editarPersona(p);
            System.out.println("Nombre: " + p.getNombre());
            System.out.println("Edad: " + p.getEdad());*/
            
            Persona p = de.getPersona();
            System.out.println("Nombre: " + p.getNombre());
            System.out.println("Edad: " + p.getEdad());
        }
    }
 }