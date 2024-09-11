import java.util.Scanner;
public class Factorial{
    public static long factorial(long n){
       if(n>1){
        return n*factorial(n-1);
       }else if(n==0 || n==1){
        return 1;
       }else{
        System.err.println("The factorial of "+n+" is invalid.");
        System.exit(1);
        return 1;
       }

    }


    public static void main(String[] args){

        Scanner scan = new Scanner(System.in);
        System.out.println("__FACTORIAL__");
        System.out.println("Enter a number: ");
        long num = scan.nextLong();
        System.out.println(factorial(num));
    }
}