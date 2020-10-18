package AnimalGranja;

public class AnimalGranja{
    private String name;
    public String getName() {
        return name;
    }
    public void setName(String n) {
        name = n; 
    }
    public void hacerSonido() {
        System.out.println(getName() + " haciendo sonido..."); 
    }
    
}




