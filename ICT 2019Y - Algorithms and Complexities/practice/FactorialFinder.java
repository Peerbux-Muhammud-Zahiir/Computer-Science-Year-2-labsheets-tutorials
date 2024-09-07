import java.util.Scanner;
public class FactorialFinder {
    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);

       

        String name = new String("Zahiir");
        System.out.println("Welcome\t"+name);
        System.out.print("Enter a number:\t");



        int number = scan.nextInt();
        System.out.println("factorial("+number+") = "+factorial(number));
    }


    public static int factorial(int n){
        int result=1;
        for(int i=1;i<=n;i++){
            result*=i;
        }
        return result;
    }

}
