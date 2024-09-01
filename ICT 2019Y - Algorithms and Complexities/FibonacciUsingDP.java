
import java.util.Scanner;

public class FibonacciUsingDP{
    
    public static int fib(int n){
        int[] fibo =new int[n+1];
        fibo[0]=0;
        fibo[1]=1;
        
        for(int i=2;i<=n;i++){
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
        return fibo[n];
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the fibonacci term: ");
        int n = scan.nextInt();
        
        System.out.println("The fibonacci number is "+ fib(n));
        scan.close();
    }
}
