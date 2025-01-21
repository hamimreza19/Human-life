import javax.swing.JOptionPane;
import javax.swing.ImageIcon;
public class Message2 {
  public static void main(String[] args) {
    ImageIcon icon = new ImageIcon("vecteezy.png");
    JOptionPane.showMessageDialog(null, "Enter password", "this is a show", JOptionPane.PLAIN_MESSAGE, icon);
    
  }
}
