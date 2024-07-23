import java.util.Scanner;
public class sumodd {
    public static void main(String[] args){
        Scanner scanIn=new Scanner(System.in);

        int num;
<<<<<<< HEAD
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
=======
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
>>>>>>> 66abc54aea84c3e7367013919e0570d1a8162d6d
    }
}
