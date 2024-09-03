import java.util.Scanner;
public class Sum{
     public static void main(String []args){
         Scanner scan = new Scanner(System.in);
        int n;
        int sum=0;
        do{
            System.out.print("Enter a number: ");
            n=scan.nextInt();
            if(n%2==0 && n>10){
                sum+=n;
            }
        }while(n>=0);
        System.out.println("The sum of even numbers greater than 10 is "+sum);
    }
}
