import java.util.Scanner;
public class SphereCalculator  {
    public static void main(String[] args) throws Exception {
        Scanner scanner=new Scanner(System.in);
        System.out.print("Enter the radius of the sphere: ");
        double radius=scanner.nextDouble();
        final double PI=Math.PI;
        double volume = (4/3)*PI*Math.pow(radius,3);
        double surfaceArea=4*PI*Math.pow(radius,2);

        System.out.print("Volume of sphere of radius "+radius+": "+volume);
        System.out.print("\n");

        System.out.print("Surface area of sphere of radius "+radius+": "+surfaceArea);
        scanner.close();

    }
}
