import java.util.Scanner;
public class ContinuousCalculator{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        while(true){
            System.out.print("Enter the first number: ");
            double num1=scanner.nextDouble();
            System.out.print("Enter the second number: ");
            double num2=scanner.nextDouble();
            System.out.print("Enter the third number: ");
            double num3=scanner.nextDouble();
            
            System.out.print("Menu:");
            System.out.print("1. Addition");
            System.out.print("2. Average");
            System.out.println("3. Remainder when num1 is raised to the power of num2 and then divided by num3");
            System.out.println("4. Exit");
            System.out.print("Select an option (1-4): ");
            int option = scanner.nextInt();

            switch(option){
                case 1:
                    double sum=num1+num2+num3;
                    System.out.println("Sum: "+sum);
                    break;

                case 2:
                    double average =(num1+num2+num3)/3;
                    System.out.println("Average: "+average);
                    break;
                case 3:
                    double power=Math.pow(num1,num2);
                    double remainder=power%num3;
                    System.out.println("Remainder: "+remainder);
                case 4:
                    System.out.println("Exiting the program...");
                    scanner.close();
                    return;
                default:
                    System.out.println("Invalid option.Please select a valid option (1-4).");
                    System.out.println();

            }
        }

    }
}