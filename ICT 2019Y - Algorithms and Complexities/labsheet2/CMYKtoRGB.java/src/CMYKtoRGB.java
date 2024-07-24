import java.util.Scanner;

public class CMYKtoRGB{
    public static void main(String[] args){
                // Create a Scanner object to read input from the user
                Scanner scanner=new Scanner(System.in);
                System.out.print("Enter the level of cyan:(0.0 to 1.0) ");
                double cyan = scanner.nextDouble();
                System.out.print("Enter level of magenta:(0.0 to 1.0) ");
                double magenta=scanner.nextDouble();
                System.out.print("Enter the level of yellow:(0.0 to 1.0) ");
                double yellow=scanner.nextDouble();
                System.out.print("Enter level of black:(0.0 to 1.0) ");
                double black=scanner.nextDouble();

                double white=1.0-black;
                double red = 255* white*(1-cyan);
                double green = 255*white*(1-magenta);
                double blue =255*white*(1-yellow);


                int redRounded=(int) Math.round(red);
                int greenRounded=(int) Math.round(green);
                int blueRounded=(int) Math.round(blue);

                System.out.print("RGB values: ");
                System.out.print("Red: "+redRounded);
                System.out.print("Green: "+greenRounded);
                System.out.print("Blue: "+blueRounded);

























    }
}
