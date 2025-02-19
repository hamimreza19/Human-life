import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.TableCellRenderer;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.text.SimpleDateFormat;
import java.util.Date;

    public class ToDoListApp {
    public static void main(String[] args) {
        // Main frame setup
        JFrame frame = new JFrame("To-Do List Application");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(800, 500);
        // Headline
        JLabel headline = new JLabel("To-Do List Application", JLabel.CENTER);
        headline.setFont(new Font("Arial", Font.BOLD, 24));
        headline.setOpaque(true);
        headline.setBackground(Color.ORANGE);
        headline.setForeground(Color.BLACK);
        frame.add(headline, BorderLayout.NORTH);
        // Table model and table
        DefaultTableModel tableModel = new DefaultTableModel(new Object[]{"No", "Task", "Description", "Date-Time", "Action"}, 0);
        JTable table = new JTable(tableModel) {
            @Override
            public boolean isCellEditable(int row, int column) {
                return column == 4; // Only "Action" column is editable
            }
        };
        table.getColumn("Action").setCellRenderer(new ButtonRenderer());
        table.getColumn("Action").setCellEditor(new ButtonEditor(new JCheckBox(), tableModel));
        frame.add(new JScrollPane(table), BorderLayout.CENTER);
        // Add Task Button
        JButton addTaskButton = new JButton("Add Task");
        addTaskButton.setPreferredSize(new Dimension(120, 40));
        addTaskButton.addActionListener(e -> showTaskDialog(frame, tableModel));
        JPanel buttonPanel = new JPanel();
        buttonPanel.add(addTaskButton);
        frame.add(buttonPanel, BorderLayout.SOUTH);

        frame.setVisible(true);
    }
        // Show dialog for adding a new task
    private static void showTaskDialog(JFrame frame, DefaultTableModel tableModel) {
        JDialog dialog = new JDialog(frame, "Add Task", true);
        dialog.setSize(400, 200);
        dialog.setLayout(new GridBagLayout());
        dialog.setLocationRelativeTo(frame);
        // Task input fields
        JTextField taskField = new JTextField(20);
        JTextField descField = new JTextField(20);
        JButton addButton = new JButton("Add");
        JButton cancelButton = new JButton("Cancel");
         // Layout configuration
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.insets = new Insets(10, 10, 10, 10);
        gbc.fill = GridBagConstraints.HORIZONTAL;

        dialog.add(new JLabel("Task:"), gbc(0, 0));
        dialog.add(taskField, gbc(1, 0));
        dialog.add(new JLabel("Description:"), gbc(0, 1));
        dialog.add(descField, gbc(1, 1));

        JPanel buttonPanel = new JPanel();
        buttonPanel.add(addButton);
        buttonPanel.add(cancelButton);

        gbc.gridx = 0;
        gbc.gridy = 2;
        gbc.gridwidth = 2;
        dialog.add(buttonPanel, gbc);
        // Add Task button action
        addButton.addActionListener(e -> {
            String task = taskField.getText().trim();
            String description = descField.getText().trim();
            if (task.isEmpty() || description.isEmpty()) {
                JOptionPane.showMessageDialog(dialog, "All fields are required!", "Error", JOptionPane.ERROR_MESSAGE);
            } else {
                String dateTime = new SimpleDateFormat("dd-MM-yyyy hh:mm:ss a").format(new Date());
                tableModel.addRow(new Object[]{tableModel.getRowCount() + 1, task, description, dateTime, "Remove"});
                dialog.dispose();
            }
        });
         // Cancel button action
        cancelButton.addActionListener(e -> dialog.dispose());

        dialog.setVisible(true);
    }
    // Helper method for GridBagConstraints
    private static GridBagConstraints gbc(int x, int y) {
        GridBagConstraints gbc = new GridBagConstraints();
        gbc.gridx = x;
        gbc.gridy = y;
        gbc.insets = new Insets(10, 10, 10, 10);
        gbc.fill = GridBagConstraints.HORIZONTAL;
        return gbc;
    }
    // Custom renderer for "Action" column
    static class ButtonRenderer extends JButton implements TableCellRenderer {
        public ButtonRenderer() {
            setOpaque(true);
        }
        @Override
        public Component getTableCellRendererComponent(JTable table, Object value, boolean isSelected, boolean hasFocus, int row, int column) {
            setText((value == null) ? "Remove" : value.toString());
            return this;
        }
    }
    // Custom editor for "Action" column
    static class ButtonEditor extends DefaultCellEditor {
        private JButton button;
        private DefaultTableModel tableModel;
        private int row;
        public ButtonEditor(JCheckBox checkBox, DefaultTableModel tableModel) {
            super(checkBox);
            this.tableModel = tableModel;
            this.button = new JButton("Remove");
            button.setOpaque(true);
            button.addActionListener(e -> fireEditingStopped());
        }
        @Override
        public Component getTableCellEditorComponent(JTable table, Object value, boolean isSelected, int row, int column) {
            this.row = row;
            return button;
        }
        @Override
        public Object getCellEditorValue() {
            tableModel.removeRow(row);
            // Update serial numbers
            for (int i = 0; i < tableModel.getRowCount(); i++) {
                tableModel.setValueAt(i + 1, i, 0);
            }
            return "Remove";
        }
    }
}
