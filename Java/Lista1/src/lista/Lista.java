package lista;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
public class Lista {
    public static void main(String[] args) throws IOException {        
        List<String> palabras;
        palabras = new LinkedList<>();
                 //Insertar datos
    palabras.add("Azul Mario, 15 años\n");
    palabras.add("Naranja Marcos, 16 años\n");
    palabras.add("Rojo Mariana, 14 años\n");
    palabras.add("Verde Gregory, 18 años\n");
    palabras.add("Rosa Hackito, 16 años\n");
    palabras.add("Amarillo Edgar, 11 años\n");
    palabras.add("Rojo Isaac, 15 años\n");
    palabras.add("Morado Jokebed, 16 años\n");
    palabras.add("Azul Ariel, 16 años\n");
    palabras.add("Naranja Majo, 16 años\n");

    System.out.println("Lista sin ordenar:");
    System.out.println(palabras);
            //Ordenar lista
    Collections.sort(palabras);
    System.out.println("\nLista ordenada:");        
    System.out.println(palabras);
                //Borrar un dato
    palabras.remove(1); 
    System.out.println("\nLista sin el primer dato ingresado.");
    System.out.println(palabras);
        //Buscar 
        System.out.println("Buscando un dato ingresado.");
    String palabra = "Gregory";
    String texto = "Verde Gregory, 18 años";
        boolean resultado = texto.contains(palabra);

            if(resultado){
                System.out.println("Alumno encontrado: " + palabra);
            }  
            else{
                System.out.println("Alumno no encontrado, se suponia que fuere:" + palabra);
            }
            //Modificar la ruta dependiendo donde se quiera almacenar
            String ruta = "F:\\archivo.txt";
        File archivo = new File(ruta);
        BufferedWriter bw;
        if(archivo.exists()) {
            bw = new BufferedWriter(new FileWriter(archivo));
            bw.write(palabras.get(1)  + " \n " + palabras.get(2) + " \n " + palabras.get(3) + " \n " + palabras.get(4) + " \n " + palabras.get(5) + " \n " + palabras.get(6) + " \n " + palabras.get(7) + " \n " + palabras.get(8) + " \n ");
        } else {
            bw = new BufferedWriter(new FileWriter(archivo));
            bw.write("Acabo de crear el fichero de texto.");
        }
        bw.append("Modificar archivo");
        bw.close();
    }
  //  public static void muestraContenido(String archivo) throws FileNotFoundException, IOException {
  //      String cadena;
  //      FileReader f = new FileReader(archivo);
  //      try (BufferedReader b = new BufferedReader(f)) {
  //          while((cadena = b.readLine())!=null) {
   //             System.out.println(cadena);
   //         }
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
