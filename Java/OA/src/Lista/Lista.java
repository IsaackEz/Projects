package Lista;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.LinkedList;
import java.util.List;
public class Lista {
    public static void main(String[] args) throws IOException {        
        List<String> palabras;
        palabras = new LinkedList<>();
                 //Insertar datos
    palabras.add("Mario      23 años\n");
    palbras.add("Marcos     34 años\n");
    palabras.add("Mariana    44 años\n");
    palabras.add("Gregory    23 años\n");
    palabras.add("Hackito    12 años\n");
    palabras.add("Edgar      61 años\n");
    palabras.add("Isaac      32 años\n");
    palabras.add("Jokebed    76 años\n");
    palabras.add("Ariel      45 años\n");
    palabras.add("Majo       11 años\n");
    
    System.out.println("Lista:");        
    System.out.println(palabras);
    //Insertar dato al inicio
    palabras.add(0,"PersonaInicio    edad\n");
    //Insertar dato al final
    palabras.add("PersonaFinal      edad\n");
    
    System.out.println("Lista con los datos agregados");
    System.out.println(palabras);
    
    //Borrar dato al inicio
    palabras.remove(0);
    //Borrar dato al final
    palabras.remove(10);
    System.out.println("Lista con los datos borrados");
    System.out.println(palabras);
    
    
  
        String ruta = "F:\\archivo.txt";
        File archivo = new File(ruta);
        BufferedWriter bw;
        if(archivo.exists()) {
            bw = new BufferedWriter(new FileWriter(archivo));
            bw.write("Lista: \r\n\r\n" + palabras.get(0) + "\r\n" + palabras.get(1) + "\r\n" + palabras.get(2) + "\r\n" + palabras.get(3) + "\r\n" + palabras.get(4) + "\r\n" + palabras.get(5) + "\r\n" + palabras.get(6) + "\r\n" + palabras.get(7) + "\r\n" + palabras.get(8) + "\r\n" + palabras.get(9));
        } 
        else {
            bw = new BufferedWriter(new FileWriter(archivo));
            bw.write("Acabo de crear el fichero de texto.");
        }
        //bw.append("Modificar archivo");
        bw.close();
        
        
    }
 //   public static void muestraContenido(String archivo) throws FileNotFoundException, IOException {
 //       String cadena;
  //      FileReader f = new FileReader(archivo);
  //      try (BufferedReader b = new BufferedReader(f)) {
   //         while((cadena = b.readLine())!=null) {
   //             System.out.println(cadena);
  //          }
   //     }
  //  }
    public static void eliminarFichero(File archivo) {
        if (!archivo.exists()) {
            System.out.println("El archivo data no existe.");
        } else {
            archivo.delete();
            System.out.println("El archivo data fue eliminado.");
        }
    }
    
}  