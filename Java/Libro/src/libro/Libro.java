package libro;
public class Libro{
    private String autor,isbn,titulo;
    private int year;
    
    public Libro(String autor, String isbn, String titulo, int year) {
        this.autor = autor;
        this.isbn = isbn;
        this.titulo = titulo;
        this.year = year;
    }

    Libro() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
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
    
    public boolean mismoLibro(Libro){
        return false;
        
    }
    
    public boolean mismoLibro(String autor, String titulo, String isbn, int año){
        return false;
    }  
}