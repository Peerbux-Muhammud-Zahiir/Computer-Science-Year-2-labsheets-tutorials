import java.util.Scanner;
import java.util.Calendar;

public class MyFirstInput{
    public static void main(String[] args){
        String name;
        int yearOfBirth,age;
        Scanner scanIn  =new Scanner(System.in);

        System.out.print("Please enter your name: ");
        name =scanIn.nextLine();
        System.out.print("Please enter your date of birth: ");
        yearOfBirth=scanIn.nextInt();
        age = (Calendar.getInstance().get(Calendar.YEAR)-yearOfBirth);
        System.out.print(name+",you are "+age+" years old.");
        scanIn.close();
    }
}