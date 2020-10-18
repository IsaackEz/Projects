public class TestArticulo{
    
    public static void main(String[] args) {
        
        System.out.println("5.- No. de articulos creados " + Articulo.getContador());
        Articulo a; //Declarar una variable del tipo articulo
        //declara una variable del tup Artivulo y ademas
        //Se crea un objeto del tipo Articulo y se le asigna a la variable
        System.out.println("9.- No. de Articulos creados: " + Articulo.getContador());
        
        Articulo b = new Articulo();
        System.out.println("12.- No. de Articulos creados: " + Articulo.getContador());
        //Se asigna la referencia al mismo objeto
        //a y b referencian al mismo Articulo
        a = b;
        System.out.println("16.- No. de Articulos creados: " + Articulo.getContador());        
        //b = null;        
        //a = null;        
        //El objeto creado en la linea 9 se marca como basura.
        
        a = new Articulo();
        System.out.println("24.- No. de Articulos creados: " + Articulo.getContador());
        b = new Articulo();
        System.out.println("26.- No. de Articulos creados: " + Articulo.getContador());
         
       a = b;
       System.out.println("29.- No. de Articulos creados: " + Articulo.getContador());
    }    
}
