package AnimalGranja;

public class Caballo extends AnimalGranja {
    @Override
    public void setName(String n) {
        super.setName(n + " [un caballo]");
    }
}
