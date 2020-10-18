/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javamysql;

import com.mysql.jdbc.Connection;
import java.sql.DriverManager;
import javax.swing.JOptionPane;

/**
 *
 * @author Isaac
 */
public class JavaMysql {

    Connection conectar=null;
    
    public Connection conexion(){
        
        try{
            Class.forName("com.mysql.jdbc.Driver");
            conectar=(Connection) DriverManager.getConnection("jdbc:mysql://localhost/bd_java","root","");
            JOptionPane.showMessageDialog(null, "Conexion exitosa!");
            
        }
        catch(Exception e){
            JOptionPane.showMessageDialog(null, "Conexion fallida! " + e.getMessage());
        }
        return conectar;
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
    }
    
}
