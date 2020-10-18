public class PilaDinamica extends Pila{
    protected int incrementoCapacidad;
    
    public PilaDinamica(){
        this(10);
    }
    
    public PilaDinamica(int dato){
        super(dato);
    }
    
    public PilaDinamica(int c, int iC){
        this(c);
        incrementoCapacidad = iC;
    }
    public PilaDinamica(Object[] datos){
        super(datos);   
    }
    
    @Override
    public void push(Object dato){
        if(capacidad == 10){
            incrementoCapacidad++;            
        }
    }

    public int getIncrementoCapacidad() {
        return incrementoCapacidad;
    }

    public void setIncrementoCapacidad(int incrementoCapacidad) {
        this.incrementoCapacidad = incrementoCapacidad;
    }
    
    @Override
    public String paraImprimir(){
        String info = super.paraImprimir(); //Invocar el metodo de la clase madre
        info += String.format(" Se incremento: ", incrementoCapacidad);
        return info;        
    }    
}
