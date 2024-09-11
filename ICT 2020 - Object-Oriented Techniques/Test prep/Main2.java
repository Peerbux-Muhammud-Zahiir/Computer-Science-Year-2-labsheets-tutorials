import java.util.Scanner;
public class Main2 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        // Rectangle r1= new Rectangle(4,5);
        // r1.display();

        Rectangle[] rectangles = new Rectangle[3];

        for(int i=0;i<rectangles.length;i++){
            rectangles[i] =new  Rectangle(scan.nextDouble(),scan.nextDouble());
            System.out.println();
        }

        for(int i=0;i<rectangles.length;i++){
            rectangles[i].display();
            System.out.println();
        }
    }
}
