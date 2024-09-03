import java.util.Scanner;
public class Factorial{
    public static int factorial(int n){
        int result=1;
        for(int i=n;i>0;i--){
            result*=i;
        }return result;
    }
    public static void main(String[] args){
        Scanner scan =new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number= scan.nextInt();
        int result=factorial(number);
        System.out.println("The factorial of "+ number +" is "+ result);
        scan.close();
        
    }
}

/*
Enter a number: 5
The factorial of 5 is 120
*/
