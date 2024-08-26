import java.util.Scanner;

public class RecursiveSumDemo {

    // Method to calculate the recursive sum
    public static int recursiveSum(int n) {
        if (n == 1) {
            return 1;
        } else {
            return n + recursiveSum(n - 1);
        }
    }

    public static void main(String[] args) {
        // Creating a Scanner object to read input
        Scanner scan = new Scanner(System.in);

        // Prompting user to enter a number
        System.out.println("Enter a number: ");
        int n = scan.nextInt(); // Correct method to read an integer input

        // Calling the recursiveSum method and printing the result
        System.out.println("The recursive sum is: " + recursiveSum(n));

        // Closing the scanner to avoid resource leaks
        scan.close();
    }
}
