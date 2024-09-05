// You are required to implement the Fibonacci function that takes as input a number n and returns
// the nth Fibonacci number using:
// (a) Recursion
// (b) Dynamic Programming
import java.util.Scanner;
public class Fibonacci 
{
    
    
    
    public static int fiboRecur (int term)
    {
        if(term<=1)
        {
            return term;
        }
        else
        {
            return fiboRecur(term-1)+fiboRecur(term-2);
        }
    }
    
    
    public static int fiboDP(int term) 
    {
        int[] array = new int[term+1];
        array[0]=0;
        array[1]=1;
        for(int i=2;i<=term;i++)
        {
            array[i]=array[i-1]+array[i-2];
        }
        return array[term];
    }
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter fibonacci term: ");
        int term = scan.nextInt();
        System.out.print("\n");
        System.out.println("Fibonacci(" + term  +") = "+fiboRecur(term));
        System.out.println("Fibonacci(" + term  +") = "+fiboDP(term));
    }
    
    
    
}
