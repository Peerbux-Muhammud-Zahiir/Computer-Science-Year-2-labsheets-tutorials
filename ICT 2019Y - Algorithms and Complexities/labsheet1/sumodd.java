import java.util.Scanner;
public class sumodd {
    public static void main(String[] args){
        Scanner scanIn=new Scanner(System.in);

        int num;
        System.out.print("Enter number\n");
        num = scanIn.nextInt();
        int sum=0;

        for(int i=0;i<num;i++){
            if(i%2==1){
                sum+=i;
            }
        }
        sum+=num;
        System.out.print("The sum is " + sum);
    }
}
