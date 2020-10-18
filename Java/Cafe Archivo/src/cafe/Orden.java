package cafe;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.LinkedList;

public class Orden {
    private static final TipoCafe TIPO_CAFE = new TipoCafe();
    
    LinkedList cola = new LinkedList();
    
    public void agregarCafe(Cafe c) throws IOException{
        cola.add(c);
        File archivo = new File(System.currentTimeMillis() + ".txt");
        BufferedWriter bw;
        bw = new BufferedWriter(new FileWriter(archivo));
        bw.write("Orden No: " + System.currentTimeMillis());
        bw.newLine();
        bw.write("Nombre: " + c.getNombre());
        bw.newLine();
        bw.write("Tipo: " + c.getTipo());
        bw.newLine();
        bw.write("Endulzante: " +c.getEnd());
        bw.newLine();
        bw.write("Tamaño: " + c.getTam());
        bw.newLine();
        bw.write("Leche: " + c.getLeche() +  "\t\t" + "Precio: "+ c.getPrecio());        
        bw.close();
        
        System.out.println("Nombre: " + c.getNombre());
        System.out.println("Tipo: " + c.getTipo() + "\nEndulzante: " + c.getEnd() + "\nTamaño: " + c.getTam() + "\nLeche: " + c.getLeche()); 
        System.out.println("Precio: " + c.getPrecio() + "\n");
    }
    
    public static void muestraContenido(String archivo) throws FileNotFoundException, IOException {
        String cadena;
        FileReader f = new FileReader(archivo);
        try (BufferedReader b = new BufferedReader(f)) {
            while((cadena = b.readLine())!=null) {
                System.out.println(cadena);
            }
            b.close();
        }
    }
    
    public static void eliminarFichero(File archivo) {
        if (!archivo.exists()) {
            System.out.println("El archivo data no existe.");
        } else {
            archivo.delete();
            System.out.println("El archivo data fue eliminado.");
        }
    }      
}  