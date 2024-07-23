import java.util.Scanner;
public class sumodd {
    public static void main(String[] args){
        Scanner scanIn=new Scanner(System.in);

        int num;
        System.out.print("Enter num: ");
        num = scanIn.nextInt();
        int sum=0;

        int i=0;
        while(i<=num){
            if(i%2==0){
                continue;
            }else{sum+=i;
                i++;
                System.out.print(i);
             
            }
        }
        sum+=num;
        System.out.print(sum);
    }
}
