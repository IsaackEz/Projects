public class TestPila {
    public static void main(String[] args) {
        Pila p = new Pila(0, 10);
        
        System.out.println(p.paraImprimir());
        
        PilaDinamica pd = new PilaDinamica();
        System.out.println(pd.paraImprimir());        
    }    
}
