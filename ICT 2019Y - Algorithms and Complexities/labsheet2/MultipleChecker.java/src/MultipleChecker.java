import java.util.Scanner;
public class MultipleChecker {
    public static void main(String[] args) throws Exception {
        Scanner scanner =new Scanner(System.in);
        System.out.print("Enter first number: ");
        int num1=scanner.nextInt();

        System.out.print("Enter second number: ");
        int num2=scanner.nextInt();
        if(num2!=0 && num1%num2==0){
            System.out.print(num1+" is a multiple of "+num2);

        }else if(num2==0){
            System.out.print("The second number cannot be zero");

        }else{
            System.out.print(num1+" is not a multiple of "+num2);
        }
         scanner.close();
    }
}
