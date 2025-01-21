import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class Message extends JFrame {
  Message() {
      setTitle("Hey Bro, Come to the company");
      setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
      setResizable(true); //Combination of setSize and SetLocation
      setBounds(500, 200, 500, 400);
   
  }
  public static void main(String[] args) {
    JOptionPane.showMessageDialog(null, "Wrong Password. Please try again later","Warning",JOptionPane.WARNING_MESSAGE);
    Message frame = new Message();
   
    frame.setVisible(true);
    //frame.setSize(300, 300);
    //frame.setLocation(500, 170);
    
    
  }
}
