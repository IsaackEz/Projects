package DialogoMenu;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JOptionPane; 
public class Dialogo extends javax.swing.JDialog {
    private boolean canceled = false;
    
    public boolean isCanceled(){
        return canceled;
    }
    
    public void moverArchivo(String fArchivotxt) throws IOException{
        String ruta = "F:\\Archivo.txt";
        File ruta1 = new File("F:\\Archivo_Movido.txt");
        File archivo = new File(ruta);
        boolean mover = archivo.renameTo(ruta1);
        System.out.println("Se ha movido el archivo");
    }    
    
    public void Ruta(String fArchivotxt) throws IOException{
        File archivo = new File("F:\\Archivo.txt");
        BufferedWriter bw;
            bw = new BufferedWriter(new FileWriter(archivo));
            bw.append("Archivo creado.");
            bw.newLine();
            bw.close();
    }
    
    public void copiarArchivo(String Archivo) throws IOException{
        File archivo = new File("F:\\Archivo.txt");
        File archivodestino = new File("F:\\Archivo_Destino.txt");
        OutputStream out;
        try (InputStream in = new FileInputStream(archivo)) {
            out = new FileOutputStream(archivodestino);
            byte[] buf = new byte[1024];
            int len;
            while ((len = in.read(buf)) > 0) {
                out.write(buf, 0, len);
            }
        }
        out.close();
        System.out.println("Se ha copiado la informacion a la ruta elegida");
    }    
    
    public static void muestraContenido(String archivo) throws FileNotFoundException, IOException {
        String cadena;
        FileReader f = new FileReader(archivo);
        try (BufferedReader b = new BufferedReader(f)) {
            System.out.println("Mostrando contenido");
            while((cadena = b.readLine())!=null) {
                System.out.println(cadena);
            }
        }
    }
    
    public void eliminarArchivo(String fArchivotxt) throws IOException{
        File archivo = new File("F:\\Archivo.txt");
        archivo.delete();
    }
    
    public void guardarArchivo(String Archivo) throws IOException{
        File archivo = new File("F:\\Archivo.txt");
        BufferedWriter bw;
        bw = new BufferedWriter(new FileWriter(archivo));
        String seleccion = JOptionPane.showInputDialog("Agregue algo al archivo");
        bw.append(seleccion);
        bw.close();
        System.out.println("Se ha guardado correctamente");
        
    }
    
    public Dialogo(java.awt.Frame parent, boolean modal) {
        super(parent, modal);
        initComponents();
    }
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        MenuLabel = new javax.swing.JLabel();
        MostrarButton = new javax.swing.JButton();
        GuardarButton = new javax.swing.JButton();
        CopiarButton = new javax.swing.JButton();
        EliminarButton = new javax.swing.JButton();
        MoverButton = new javax.swing.JButton();
        SalirButton = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        MenuLabel.setText("Menu");

        MostrarButton.setText("Mostrar contenido");
        MostrarButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                MostrarButtonActionPerformed(evt);
            }
        });

        GuardarButton.setText("Guardar");
        GuardarButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                GuardarButtonActionPerformed(evt);
            }
        });

        CopiarButton.setText("Copiar");
        CopiarButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CopiarButtonActionPerformed(evt);
            }
        });

        EliminarButton.setText("Eliminar");
        EliminarButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                EliminarButtonActionPerformed(evt);
            }
        });

        MoverButton.setText("Mover");
        MoverButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                MoverButtonActionPerformed(evt);
            }
        });

        SalirButton.setText("Salir");
        SalirButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                SalirButtonActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addContainerGap()
                        .addComponent(MostrarButton))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(32, 32, 32)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(CopiarButton, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(GuardarButton)
                            .addComponent(MoverButton, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(SalirButton, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(EliminarButton)))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(55, 55, 55)
                        .addComponent(MenuLabel)))
                .addContainerGap(11, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(MenuLabel)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(MostrarButton)
                .addGap(18, 18, 18)
                .addComponent(GuardarButton)
                .addGap(18, 18, 18)
                .addComponent(CopiarButton)
                .addGap(18, 18, 18)
                .addComponent(MoverButton)
                .addGap(18, 18, 18)
                .addComponent(EliminarButton)
                .addGap(18, 18, 18)
                .addComponent(SalirButton)
                .addGap(25, 25, 25))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void SalirButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_SalirButtonActionPerformed
        this.dispose();
        this.canceled = true;
    }//GEN-LAST:event_SalirButtonActionPerformed

    private void EliminarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_EliminarButtonActionPerformed
        try {
            eliminarArchivo("F:\\Archivo.txt");
        } catch (IOException ex) {
            Logger.getLogger(Dialogo.class.getName()).log(Level.SEVERE, null, ex);
        }
        System.out.println("Se ha eliminado el archivo");
    }//GEN-LAST:event_EliminarButtonActionPerformed

    private void MostrarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_MostrarButtonActionPerformed
        File archivo = new File("F:\\Archivo.txt");
        if(archivo.exists()){
            try {
            muestraContenido("F:\\Archivo.txt");
            } 
            catch (IOException ex) {
            Logger.getLogger(Dialogo.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        else{
            System.out.println("No se encontro el archivo");
        }
    }//GEN-LAST:event_MostrarButtonActionPerformed

    private void GuardarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_GuardarButtonActionPerformed
        try {
            guardarArchivo("F:\\Archivo.txt");
        } catch (IOException ex) {
            Logger.getLogger(Dialogo.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_GuardarButtonActionPerformed

    private void MoverButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_MoverButtonActionPerformed
        try {
            moverArchivo("F:\\Archivo.txt");
        } catch (IOException ex) {
            Logger.getLogger(Dialogo.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_MoverButtonActionPerformed

    private void CopiarButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_CopiarButtonActionPerformed
        try {
            copiarArchivo("F:\\Archivo.txt");
        } catch (IOException ex) {
            Logger.getLogger(Dialogo.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_CopiarButtonActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Dialogo.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Dialogo.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Dialogo.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Dialogo.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the dialog */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                Dialogo dialog = new Dialogo(new javax.swing.JFrame(), true);
                dialog.addWindowListener(new java.awt.event.WindowAdapter() {
                    @Override
                    public void windowClosing(java.awt.event.WindowEvent e) {
                        System.exit(0);
                    }
                });
                dialog.setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton CopiarButton;
    private javax.swing.JButton EliminarButton;
    private javax.swing.JButton GuardarButton;
    private javax.swing.JLabel MenuLabel;
    private javax.swing.JButton MostrarButton;
    private javax.swing.JButton MoverButton;
    private javax.swing.JButton SalirButton;
    // End of variables declaration//GEN-END:variables
}
