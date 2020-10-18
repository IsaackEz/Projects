public class Tiempo{
    private int hora, min, sec;
    public Tiempo(){
        hora = min = sec = 0;        
    }
    
    public int getHora(){
        return hora;
    }
    
    public int getMin(){
        return min;
    }
    
    public int getSec(){
        return sec;
    }
    
    public void setHora(int hora){
        if(hora < 0 && hora > 24){ 
            return;
        }
        this.hora = hora;
    }
    
    public void setMin(int min){
        if(min < 0 && min > 59){
            return;
        }
        this.min = min;
    }
    
    public void setSec(int sec){
        if(sec < 0 && sec > 59){
            return;
        }
        this.sec = sec;
    }
    
    public void incHora(){
        if(hora  == 23){
        hora = 0;
        return;
        }
        hora++;
    }
     public void incMin(){
        if(min  == 59){
        min = 0;
        incHora();
        return;
        }
        min++;
    }
      public void incSec(){
        if(sec  == 59){
        sec = 0;
        incMin();
        return;
        }
        sec++;
    }
    
}
