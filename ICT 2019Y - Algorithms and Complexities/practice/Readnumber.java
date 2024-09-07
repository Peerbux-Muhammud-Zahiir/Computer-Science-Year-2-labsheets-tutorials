import java.util.*;
public class Readnumber {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter a non-numeric data to exit");
        double sum=0;
        double n;
        while(scan.hasNextDouble()){
            n=scan.nextDouble();
            sum+=n;
        }
        System.out.println(sum);
        scan.close();
    }
}
