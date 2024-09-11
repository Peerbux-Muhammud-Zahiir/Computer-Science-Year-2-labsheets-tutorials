import java.util.Scanner;
public class Switch {
    public static void displayChoice(char menuChoice){
        switch(menuChoice){
            case 'A':System.out.println("Choice A");
                    break;
            case 'B':System.out.println("Choice B");
                    break;
            case 'C':System.out.println("Choice C");
                    break;
            case 'D':System.out.println("Choice D");
                    break;
            default:
                    System.err.println("The menu choice is invalid.");
        }
    }
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

        System.out.print("Enter menu choice:");
        displayChoice('A');
    }
}
