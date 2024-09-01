import java.util.Scanner;

public class Main{
  
  public static int fib(int n){
    if(n<=1){
      return n;
    }else{
      return fib(n-1)+fib(n-2);
    }
  }
  
  public static void main(String[] args){
    Scanner scan =new Scanner(System.in);
    System.out.print("Enter the Fibonacci term: ");
    int n=scan.nextInt();
    int result=fib(n);
    System.out.println("The "+n+"th term of the Fibonacci sequence is "+ result);
    scan.close();
  }
  
}
