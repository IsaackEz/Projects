public class TestHerencia {
    public static void main(String[] args) {
        Persona p = new Persona("x", 1);
        
        System.out.println(p.paraImprimir());
        
        Estudiante e = new Estudiante();
        e.setEdad(19);
        e.setNombre("x");
        e.setPromedio(9.4);
        e.setSemestre(3);
        
        System.out.println(e.paraImprimir());
        
        Maestro m = new Maestro();
        m.setCarreras(new String[]{"Programacion", "Algoritmia"});
        m.setEdad(39);
        m.setNombre("Noe");
        System.out.println(m.paraImprimir());
    }
    
}
