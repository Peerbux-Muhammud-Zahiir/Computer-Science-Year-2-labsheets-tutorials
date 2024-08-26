import java.util.Scanner;

public class power {

    // Method to calculate the pow sum
    public static int pow(int n) {
        if (n == 0) {
            return 1;
        } else {
            return 2 * pow(n - 1);
        }
    }

    public static void main(String[] args) {
        // Creating a Scanner object to read input
        Scanner scan = new Scanner(System.in);

        // Prompting user to enter a number
        System.out.println("Enter a number: ");
        int n = scan.nextInt(); // Correct method to read an integer input

        // Calling the pow method and printing the result
        System.out.println("2 to the power of "+n+" is " + pow(n));

        // Closing the scanner to avoid resource leaks
        scan.close();
    }
}
