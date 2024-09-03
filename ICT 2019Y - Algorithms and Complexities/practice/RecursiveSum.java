import java.util.Scanner;
public class RecursiveSum{
    public static long recursiveSum(long num){
        if(num==1){
            return 1;
        }else{
            return num+recursiveSum(num-1);
        }
    }
     public static void main(String []args){
         Scanner scan = new Scanner(System.in);
         System.out.print("Enter a number: ");
         long num=scan.nextLong();
         long result=recursiveSum(num);
         System.out.println("The sum of integers from 1 to "+ num+" is "+result );
             }
}
