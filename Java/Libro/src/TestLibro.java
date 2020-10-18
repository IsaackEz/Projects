public class TestLibro {
    public static void main(String[] args) {
        
        Libro libro1 = new Libro();
        Libro libro2 = new Libro("Isaac", "", "POO", 1999);
        
        //Comparacion de libros desde el punto de vista humano        
        if(libro1.getTitulo().equals( libro2.getTitulo() ) ){
            System.out.println("El titulo del libro 1 es igual al titulo del libro 2");
        }
        else{
            System.out.println("El titulo del libro 1 no es igual al titulo del libro 2");
        }
        
        if(libro1.getAutor().equals(libro2.getAutor() ) ){
            System.out.println("El autor del libro 1 es igual al autor del libro 2");
        }
        else{
            System.out.println("El autor del libro 1 no es igual al autor del libro 2");
        }
        
        //Comparacion desde el punto de vista de Software:        
        if(libro1.mismoLibro(libro2) ){
            System.out.println("Libro 1 es el mismo que Libro 2");
        }
        else{
            System.out.println("Libro 1 no es el mismo que Libro 2");
        }
    }
}
       
         

