import java.util.Arrays;

public class Pila {
    protected int contador, capacidad;
    protected Object datos[];

    
    public Pila(int c, int cap){
        contador = c;
        capacidad = cap;
    }
    
    public Pila(int cap){
        capacidad = cap;
        datos = new Object[capacidad];
    }
    
    public Pila(Object[] datos){
        datos = new Object[capacidad];
    }
    
    public void push(Object dato){
        if(this.estaLlena()){
            return;
        }
        else{
            capacidad++;
            datos = new Object[capacidad];
        }
    }
    
    public Object pop(){
        if(this.estaVacia()){
            return null;
        }
        else{
            return datos;
        }
    }
    
    public boolean estaVacia(){
        if(datos == null){
            return true;
        }
        return false;        
    }
    
    public boolean estaLlena(){
        if(capacidad == 10){
            return true;
        }
        return false;        
    }

    public int getContador() {
        return contador;
    }

    public int getCapacidad() {
        return capacidad;
    }
    
    public String paraImprimir(){
        String info = String.format("Datos: %s", datos);
        info += String.format(" Datos: %s", Arrays.toString(datos));
        return info;       
    }
}
