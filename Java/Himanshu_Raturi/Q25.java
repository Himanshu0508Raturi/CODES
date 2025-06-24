//package CODES.Java.Himanshu_Raturi;
// Practical Number 25

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;
import javafx.scene.control.RadioButton;
import javafx.scene.control.TextArea;
import javafx.scene.control.ToggleGroup;
import javafx.scene.layout.HBox;
import javafx.stage.Stage;

public class Q25 extends Application{

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage stage) throws Exception {
    TextArea ta=new TextArea();
    Label l1= new Label("Select Movie");    
    Button b1=new Button("Book Ticket");
    ComboBox<String> movies=new ComboBox<>();
    movies.getItems().add("Abc");
    movies.getItems().add("A");
    movies.getItems().add("bc");
    movies.getItems().add("Pqr");
    
    ComboBox<String> tickets=new ComboBox<>();
    tickets.getItems().add("1");
    tickets.getItems().add("2");
    tickets.getItems().add("3");
    tickets.getItems().add("4");
    
    ToggleGroup group=new ToggleGroup();
    RadioButton r1=new RadioButton("10:00am");
    RadioButton r2=new RadioButton("1:00pm");
    RadioButton r3=new RadioButton("4:00pM");
    RadioButton r4=new RadioButton("7:00pM");
    r1.setToggleGroup(group);
    r2.setToggleGroup(group);
    r3.setToggleGroup(group);
    r4.setToggleGroup(group);
    
    HBox root=new HBox();
    root.getChildren().add(l1);
    root.getChildren().add(movies);
    root.getChildren().addAll(r1,r2,r3,r4);
    root.getChildren().add(tickets);
    //root.getChildren().add(tf1);
    root.getChildren().add(b1);
    root.getChildren().add(ta);
    
    Scene sc=new Scene(root);
    stage.setScene(sc);
    stage.show();
    b1.setOnAction(new EventHandler<ActionEvent>() {
        @Override
        public void handle(ActionEvent t) {
           // throw new UnsupportedOperationException("Not supported yet."); // Generated from nbfs://nbhost/SystemFileSystem/Templates/Classes/Code/GeneratedMethodBody
           String s=null;
           if (r1.isSelected())
               s=" 10:00AM ";
           if (r2.isSelected())
               s=" 1:00PM ";
           if (r3.isSelected())
               s=" 4:00PM ";
           if (r4.isSelected())
               s=" 7:00PM ";
           
           int tt=Integer.parseInt(tickets.getValue());
           int charges=100*tt;
           ta.setText("Movie name= "+movies.getValue()+ "\nShowTime= "+s+"\nYou slected "+tickets.getValue()+" Tickets\n"+"\nThe cost of "+tickets.getValue()+ " Tickets is= "+charges);
        
        }
    });
    }
    
}
