import java.util.Arrays;

public class Maestro extends Persona{
    private String carreras[];
    
    public Maestro(){
        super("", 1);
    }
    
    public Maestro(String n, int e){
        super(n, e);
    }
    
    public Maestro(String n, int e, String[] cs){
        this(n, e);
        carreras = cs;
    }

    public String[] getCarreras() {
        return carreras;
    }

    public void setCarreras(String[] carreras) {
        this.carreras = carreras;
    }
    
    @Override
    public String paraImprimir(){
        String info = super.paraImprimir();
        info += String.format(" Carreras: %s", Arrays.toString(carreras));
        return info;
    }
}
