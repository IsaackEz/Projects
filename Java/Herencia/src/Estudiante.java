public class Estudiante extends Persona{
    private int semestre;
    private double promedio;
    
    public Estudiante(){
        this("", 1);
        
    }
    
    public Estudiante(String n, int e){
        super(n, e);
    }
    
    public Estudiante(String n, int e, int s, double pr){
        this(n, e);
        semestre = 5;
        promedio = pr;
    }

    public int getSemestre() {
        return semestre;
    }

    public void setSemestre(int semestre) {
        this.semestre = semestre;
    }

    public double getPromedio() {
        return promedio;
    }

    public void setPromedio(double promedio) {
        this.promedio = promedio;
    }
    
    @Override //Sobrescritura del metodo paraImprimir de la clase madre
    public String paraImprimir(){
        String info = super.paraImprimir(); //Invocar el metodo de la clase madre
        info += String.format(" Promedio %s, Semestre %s", promedio, semestre);
        return info;
    }
    
}
