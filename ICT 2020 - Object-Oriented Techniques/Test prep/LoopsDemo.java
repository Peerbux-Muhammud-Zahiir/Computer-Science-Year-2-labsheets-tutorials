import java.util.Scanner;
public class LoopsDemo{
    
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        int[] array = new int[10];

        for(int i=0;i<array.length;i++){
            System.out.println("Enter element of array at index "+i+":\t");
            array[i]=scan.nextInt();
        }


        for(int num:array){
            System.out.println(num);
        }
    }

}