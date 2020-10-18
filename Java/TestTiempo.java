
import javax.swing.JOptionPane;

public class TestTiempo{
    public static void main(String[] args) {
        String horaString;
        String minString;
        String secString;
        if(args.length < 3){
            String mensajeError = "(Error de uso) Espero 3 argumentos: horas, minutos, segundos";
            JOptionPane.showMessageDialog(null, mensajeError);
            
            horaString = JOptionPane.showInputDialog("Ingresa la hora por favor");
            minString = JOptionPane.showInputDialog("Ingresa los minutos por favor");
            secString = JOptionPane.showInputDialog("Ingresa los segundos por favor");
            
        }
        else{
            horaString = args[0];
            minString = args[1];
            secString = args[2];
        }
        
        /*for(int i = 0; i < args.length; i++){
            System.out.println("Argumento no. " + (i+1) + ": " + args[i] );
        }
        System.out.println("Error de uso");
            System.out.println("Espero 3 argumentos: hora, minuto, segundo");
            System.out.println("");
            System.out.println("Recii solamente " + args.length); 
            System.exit(0);*/
    
        Tiempo t = new Tiempo();
        
        t.setHora(Integer.parseInt(horaString));
        t.setSec(Integer.parseInt(minString));
        t.setMin(Integer.parseInt (secString));
        
        System.out.println("Hora: " + t.getHora());
        System.out.println("Minuto: " + t.getMin());
        System.out.println("Segundo: " + t.getSec());
        
       while(true){
            t.incSec();
            System.out.println(t.getHora() + ":" + t.getMin() + ":" + t.getSec());
            
            
        }
    }
}