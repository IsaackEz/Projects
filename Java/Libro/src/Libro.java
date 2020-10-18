public class Libro{
    private String autor,isbn,titulo;
    private int year;
    
    public Libro(){
        /*this.autor = "";
        this.isbn = "";
        this.titulo = "";
        this.year = 0;*/
        this("","","",0);
    }
    
    public Libro(int y){
        this("","","",y);
    }
    
    public Libro(String autor, String isbn, String titulo, int year) {
        this.autor = autor;
        this.isbn = isbn;
        this.titulo = titulo;
        this.year = year;
    }
    
    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String getIsbn() {
        return isbn;
    }

    public void setIsbn(String isbn) {
        this.isbn = isbn;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }
    
    public boolean mismoLibro(Libro otro){
        return mismoLibro(otro.getAutor(), otro.getIsbn(), otro.getTitulo(), otro.getYear());
    }
    
    /*public boolean mismoLibro(Libro otro){
        boolean iguales = true;
        
        if( this.year != otro.getYear()){
            iguales = false;
        }
        else if( !this.titulo.equals( otro.getTitulo() ) ){
            iguales = false;
        }
        else if( !this.autor.equals( otro.getAutor() ) ){
            iguales = false;
        }
        else if( !this.isbn.equals( otro.getIsbn() ) ){
            iguales = false;
        }
        return iguales;
        
    }*/
    
    public boolean mismoLibro(String autor, String isbn, String titulo, int year){
        
        boolean iguales = true;
        
        if( this.year != year){
            iguales = false;
        }
        else if( !this.titulo.equals( titulo ) ){
            iguales = false;
        }
        else if( !this.autor.equals( autor ) ){
            iguales = false;
        }
        else if( !this.isbn.equals( isbn ) ){
            iguales = false;
        }
        
        return iguales;
    }  
}