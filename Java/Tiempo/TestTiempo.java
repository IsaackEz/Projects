public class TestTiempo{
    public static void main(String[] args) {
        Tiempo t = new Tiempo();
        
        //System.out.println("Hora: " + t.getHora());
        //System.out.println("Hora: " + t.getHora());
        //System.out.println("Hora: " + t.getHora());
        
        while(true){
            t.incSec();
            System.out.println(t.getHora() + ":" + t.getMin() + ":" + t.getSec());
            
        }
    }
}