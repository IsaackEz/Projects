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
        System.out.println("Nombre: " + c.getNombre());
        System.out.println("Tipo: " + c.getTipo() + "\nEndulzante: " + c.getEnd() + "\nTamaño: " + c.getTam() + "\nLeche: " + c.getLeche()); 
        System.out.println("Precio: " + c.getPrecio() + "\n");
        
        String ruta = System.currentTimeMillis()+ "";
        File archivo = new File(ruta);
        BufferedWriter bw;
        if(archivo.exists()) {
            bw = new BufferedWriter(new FileWriter(archivo));
            bw.write("Orden: " + c.getNombre() + "\t" + c.getEnd() + "\t" + c.getLeche() + "\t" + c.getTam() + "\t" + c.getTipo() + "\t" + c.getPrecio());
            bw.newLine();
        }
        else {
            bw = new BufferedWriter(new FileWriter(archivo));
            bw.write("Acabo de crear el fichero de texto.");
        }
        //bw.append("Modificar archivo");
        bw.close();
    }
    public static void muestraContenido(String archivo) throws FileNotFoundException, IOException {
        String cadena;
        FileReader f = new FileReader(archivo);
        try (BufferedReader b = new BufferedReader(f)) {
            while((cadena = b.readLine())!=null) {
                System.out.println(cadena);
            }
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