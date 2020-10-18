package menu;
import DialogoMenu.Dialogo;
public class Menu {
    public static void main(String[] args){
        Dialogo d = new Dialogo(null, true);
        d.setVisible(true);
        if(d.isCanceled()){
            System.out.println("Se cancelo el menu");
        }
    }
}
