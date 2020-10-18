package AnimalGranja;
public class TestAnimal {
    public static void main(String[] args) {
        AnimalGranja c = new Vaca(); 
        AnimalGranja h = new Caballo(); 
        c.setName("Elsie"); 
        h.setName("Mr. Ed"); 
        c.hacerSonido(); 
        h.hacerSonido();        
    }
}
