package cafe;

public class TipoCafe {
    
    public static final String AMERICANO = "Americano";
    public static final double AM_PRECIO = 10.0;
    public static final String CAPUCCINO = "capuccino";
    public static final double CAP_PRECIO = 8.0;
    public static final String LATTE = "Latte";
    public static final double LATTE_PRECIO = 12.0;
    public static final String OTRO = "Otro";
    public static final double OTRO_PRECIO = 11.0;
    public static final String CARAMELO = "Caramelo";
    public static final double CARAMELO_PRECIO = 2.0;
    public static final String MENTA = "Menta";
    public static final double MENTA_PRECIO = 3.0;
    public static final String AVELLANA = "Avellana";
    public static final double AV_PRECIO = 2.5;
    public static final String CHICO = "Chico";
    public static final double CH_PRECIO = 5.0;
    public static final String MEDIANO = "Mediano";
    public static final double MED_PRECIO = 8.0;
    public static final String GRANDE = "Grande";
    public static final double GR_PRECIO = 9.5;
    public static final String ENTERA = "Entera";
    public static final double ENT_PRECIO = 2.0;
    public static final String DESCREMADA = "Descremada";
    public static final double DES_PRECIO = 3.0;
    public static final String LIGERA = "Ligera";
    public static final double LIG_PRECIO = 2.5;
    
    public double getPrecio(String tipoCafe){
        
        switch(tipoCafe){
            
            case AMERICANO: return AM_PRECIO;
            case CAPUCCINO: return CAP_PRECIO;
            case LATTE: return LATTE_PRECIO;
            case CARAMELO: return CARAMELO_PRECIO;
            case MENTA: return MENTA_PRECIO;
            case AVELLANA: return AV_PRECIO;
            case CHICO: return CH_PRECIO;
            case MEDIANO: return MED_PRECIO;
            case GRANDE: return GR_PRECIO;
            case ENTERA: return ENT_PRECIO;
            case DESCREMADA: return DES_PRECIO;
            case LIGERA: return LIG_PRECIO;
        }
        return 0.0;
    }
}