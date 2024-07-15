import java.util.Scanner;

public class operations {
    public static void main(String[] args){
        int num1,num2,num3;

        Scanner scanIn=new Scanner(System.in);


        System.out.print("Enter number: ");
        num1 = scanIn.nextInt();
        System.out.print("Enter number: ");
        num2 = scanIn.nextInt();
        System.out.print("Enter number: ");
        num3 = scanIn.nextInt();
        System.out.print(num1 + num2 + num3);
        System.out.print("\n");
        System.out.print(num1*num2*num3);
        
        System.out.print("\n");
        System.out.print(Math.max(Math.max(num1,num2),num3));
        System.out.print("\n");
        System.out.print(Math.min(Math.min(num1,num2),num3));
        double avg=(num1+num2+num3)/3;
        System.out.print("\n");
        System.out.print(avg);
        scanIn.close();
    }
}
