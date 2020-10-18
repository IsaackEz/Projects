public class Articulo {
    private String Descripcion = "";
    private double precio = 0.0;
    private int cantidad = 0;
    //La variable contador se vuelve variable de clase
    private static int contador = 0;
    
    public static int getContador() {
        return contador;
    }
    
    public Articulo(){
        contar();
    }
    public void contar(){
        contador++;
    }

    public String getDescripcion() {
        return Descripcion;
    }
    
    public void setDescripcion(String Descripcion) {
        this.Descripcion = Descripcion;
    }

    public double getPrecio() {
        return precio;
    }
    
    public void setPrecio(double precio) {
        this.precio = precio;
    }

    public int getCantidad() {
        return cantidad;
    }   

    public void setCantidad(int cantidad) {
        this.cantidad = cantidad;
    }
    
    
}
