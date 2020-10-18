package cafe;

public class Cafe {
    private String nombre, tipo, end, tam, leche, num;
    private double precio;
    
    public Cafe(String nombre, String tipo, String end, String tam, String leche, String num, double precio){
        this.nombre = nombre;
        this.end = end;
        this.leche = leche;
        this.tam = tam;
        this.tipo = tipo;
        this.num = num;
        this.precio = precio;
    }
    
    public Cafe(){    
    }
    
    public double getPrecio(){
        return precio;
    }

    public String getNombre() {
        return nombre;
    }

    public String getTipo() {
        return tipo;
    }

    public String getEnd() {
        return end;
    }

    public String getTam() {
        return tam;
    }

    public String getLeche() {
        return leche;
    }
    
    public String getNum(){
        return num;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public void setEnd(String end) {
        this.end = end;
    }

    public void setTam(String tam) {
        this.tam = tam;
    }

    public void setLeche(String leche) {
        this.leche = leche;
    } 

    public void setNum(String num) {
        this.num = num;
    }

    public void setPrecio(double precio) {
        this.precio = precio;
    }
}
