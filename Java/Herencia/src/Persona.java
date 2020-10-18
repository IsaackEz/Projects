public class Persona {
    protected String nombre;
    protected int edad;

    public Persona(String n, int e){
        nombre = n;
        edad = e;
    }
    
    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public int getEdad() {
        return edad;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }
    
    public String paraImprimir(){
        String info = String.format("Nombre: %s, Edad: %s", nombre, edad);
        return info;
    }
}
