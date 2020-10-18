package principal;
import Dialogo.CafeDialogo;

public class Main {
    public static void main(String[] args){   
        System.out.println("Orden No: " + System.currentTimeMillis());
        //null para decir que no hay un padre
        //true para decir que es un dialogo modal
        CafeDialogo cd = new CafeDialogo(null, true);
        cd.setVisible(true);   
        
        
        if(cd.isCanceled()){
            System.out.println("Cancelaron la captura de datos");
        }
        
    }    
}