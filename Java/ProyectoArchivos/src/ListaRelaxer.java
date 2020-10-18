
/**
 *
 * @author MARIO & ALEX
 */
public class ListaRelaxer {
    private NodeRelaxer inicio;
    private int size;
   
    public void ListaRelaxer(){
        inicio = null;
        size = 0;
    }

    public boolean isEmpty(){
        return inicio == null;
    }

    public int getSize(){
        return size;
    }

    public void addEnd(String summoner, int kills, int deaths, int assists, boolean victory){
        NodeRelaxer nuevo = new NodeRelaxer();
        nuevo.setSummoner(summoner);
        nuevo.setKills(kills);
        nuevo.setDeaths(deaths);
        nuevo.setAssists(assists);
        nuevo.setVictory(victory);
        if (isEmpty()) {
            inicio = nuevo;
        } else{
            NodeRelaxer aux = inicio;
            while(aux.getNext() != null){
                aux = aux.getNext();
            }
            aux.setNext(nuevo);
        }
        size++;
    }

    public void addStart(String summoner, int kills, int deaths, int assists, boolean victory){
        NodeRelaxer nuevo = new NodeRelaxer();
        nuevo.setSummoner(summoner);
        nuevo.setKills(kills);
        nuevo.setDeaths(deaths);
        nuevo.setAssists(assists);
        nuevo.setVictory(victory);
        if (isEmpty()) {
            inicio = nuevo;
        } else{
            nuevo.setNext(inicio);
            inicio = nuevo;
        }
        size++;
    }

    public void insertarPorReferencia(String referencia, String summoner, int kills, int deaths, int assists, boolean victory){
        NodeRelaxer nuevo = new NodeRelaxer();
        nuevo.setSummoner(summoner);
        nuevo.setKills(kills);
        nuevo.setDeaths(deaths);
        nuevo.setAssists(assists);
        nuevo.setVictory(victory);
        if (!isEmpty ()) {
            if (search(referencia)) { 
                NodeRelaxer aux = inicio;
                while (aux.getSummoner() != referencia) {
                    aux = aux.getNext();
                }
                NodeRelaxer siguiente = aux.getNext();
                aux.setNext(nuevo);
                nuevo.setNext(siguiente);
                size++;
            }
        }
    }

    public void insertPosition(int posicion, String summoner, int kills, int deaths, int assists, boolean victory){
        if(posicion>=0 && posicion<=size){
            NodeRelaxer nuevo = new NodeRelaxer();
            nuevo.setSummoner(summoner);
            nuevo.setKills(kills);
            nuevo.setDeaths(deaths);
            nuevo.setAssists(assists);
            nuevo.setVictory(victory);
            if(posicion == 0){
                nuevo.setNext(inicio);
                inicio = nuevo;
            }
            else{
                if(posicion == size){
                    NodeRelaxer aux = inicio;
                    while(aux.getNext() != null){
                        aux = aux.getNext();
                    }
                    aux.setNext(nuevo);              
                }
                else{
                    NodeRelaxer aux = inicio;
                    for (int i = 0; i < (posicion-1); i++) {
                        aux = aux.getNext();
                    }
                    NodeRelaxer siguiente = aux.getNext();
                    aux.setNext(nuevo);
                    nuevo.setNext(siguiente);
                }
            }
            size++;
        }
    }

   /* public int getValue(int posicion) throws Exception{
        if(posicion>=0 && posicion<size){
            if (posicion == 0) {
                return inicio.getKills();
            }else{
                NodeRelaxer aux = inicio;
                for (int i = 0; i < posicion; i++) {
                    aux = aux.getNext();
                }
                return aux.getKills();
            }
        } else {
            throw new Exception("Posicion inexistente en la lista.");
        }
    }*/

    public boolean search(String referencia){
        NodeRelaxer aux = inicio;
        boolean encontrado = false;
        while(aux != null && encontrado != true){
            if (referencia == aux.getSummoner()){
                encontrado = true;
            }
            else{
                aux = aux.getNext();
            }
        }
        return encontrado;
    }

    public int getPosition(String referencia) throws Exception{
        if (search(referencia)) {
            NodeRelaxer aux = inicio;
            int cont = 0;
            while(referencia != aux.getSummoner()){
                cont ++;
                aux = aux.getNext();
            }
            return cont;
        } else {
            throw new Exception("Valor inexistente en la lista.");
        }
    }

    public void editReference(String referencia, String summoner, int kills, int deaths, int assists, boolean victory){
        if (search(referencia)) {
            NodeRelaxer aux = inicio;
            while(aux.getSummoner() != referencia){
                aux = aux.getNext();
            }
            
            aux.setSummoner(summoner);
            aux.setKills(kills);
            aux.setDeaths(deaths);
            aux.setAssists(assists);
            aux.setVictory(victory);
        }
    }

    public void editPosition(int posicion , String summoner, int kills, int deaths, int assists, boolean victory){
        if(posicion>=0 && posicion<size){
            if(posicion == 0){
                inicio.setSummoner(summoner);
                inicio.setKills(kills);
                inicio.setDeaths(deaths);
                inicio.setAssists(assists);
                inicio.setVictory(victory);
            }
            else{
                NodeRelaxer aux = inicio;
                for (int i = 0; i < posicion; i++) {
                    aux = aux.getNext();
                }
               aux.setSummoner(summoner);
               aux.setKills(kills);
               aux.setDeaths(deaths);
               aux.setAssists(assists);
               aux.setVictory(victory);
            }
        }
    }

    public void removeReference(String referencia){
        if (search(referencia)) {
            if (inicio.getSummoner() == referencia) {
                inicio = inicio.getNext();
            } else{
                NodeRelaxer aux = inicio;
                while(aux.getNext().getSummoner() != referencia){
                    aux = aux.getNext();
                }
                NodeRelaxer siguiente = aux.getNext().getNext();
                aux.setNext(siguiente);  
            }
            size--;
        }
    }

    public void removePosition(int posicion){
        if(posicion>=0 && posicion<size){
            if(posicion == 0){
                inicio = inicio.getNext();
            }

            else{
                NodeRelaxer aux = inicio;
                for (int i = 0; i < posicion-1; i++) {
                    aux = aux.getNext();
                }
                NodeRelaxer siguiente = aux.getNext();
                aux.setNext(siguiente.getNext());
            }
            size--;
        }
    }

    public void delete(){
        inicio = null;
        size = 0;
    }

    public void print(){
        if (!isEmpty()) {
            System.out.println("A continuación, se imprimirá la lista:");
            System.out.println("");
            NodeRelaxer aux = inicio;
            int i = 0;
            while(aux != null){
                System.out.println("Node " + i);
                System.out.println("Invocador: " + aux.getSummoner());
                System.out.print(aux.getKills() + "/" + aux.getDeaths() + "/" + aux.getAssists());
                System.out.println("");
                if (aux.isVictory() == true){
                    System.out.println("Victory!!!!");
                }
                else{
                    System.out.println("Defeat ;(");
                }
                System.out.println("");
                aux = aux.getNext();
                i++;
            }
        }
    }
}
