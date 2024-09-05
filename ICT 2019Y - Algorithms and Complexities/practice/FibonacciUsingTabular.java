import java.util.Scanner;

public class Main{
    public static int fibonacci(int n){
        int[] array =new int[n];
        array[0]=0;
        array[1]=1;
        for(int i=2;i<n;i++){
            array[i]=array[i-1]+array[i-2];
        }return array[n-1];
    }
    public static void main(String[] args){
        Scanner scan =new Scanner(System.in);
        System.out.print("Enter fibonacci term: ");
        int term=scan.nextInt();
        System.out.println(fibonacci(term));
    }
}
