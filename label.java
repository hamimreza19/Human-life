package MyFirstProject.src;
import java.awt.Color;
import javax.swing.JLabel;
import javax.swing.ImageIcon;
import javax.swing.border.Border;
import javax.swing.BorderFactory;

public class label {
  public static void main(String[] args) {
    ImageIcon image = new ImageIcon("download.jpeg");
    JLabel label = new JLabel();
    Border border = BorderFactory.createLineBorder(Color.green, 3);
    label.setText("Bro what are you doing now?");
    label.setHorizontalTextPosition(JLabel.CENTER);
    label.setVerticalTextPosition(JLabel.TOP);
    label.setIcon(image);
    label.setForeground(new Color(0x00FF00));
    label.setBackground(Color.blue);
    label.setBorder(border);
    label.setVerticalAlignment(JLabel.CENTER);

  }
}
