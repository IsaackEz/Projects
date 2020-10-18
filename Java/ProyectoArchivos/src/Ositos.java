
/**
 *
 * @author MARIO & ALEX
 */
public class Ositos {
    public static void main (String[] ositos){


        
        ListaRelaxer l = new ListaRelaxer();
        l.addEnd("MarioRiven", 9, 1, 16, true);
        System.out.println("El tamaño de la lista es de " + l.getSize() + " Nodo");
        l.addEnd("DashieLashie", 0, 15, 2, false);
        System.out.println("El tamaño de la lista es de " + l.getSize() + " Nodo");
        l.print();
        
        
        
        
    }
}
