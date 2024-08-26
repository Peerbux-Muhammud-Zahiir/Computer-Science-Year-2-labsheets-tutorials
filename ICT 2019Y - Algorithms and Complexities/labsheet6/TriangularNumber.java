public class TriangularNumber {

    // Recursive method to find the nth triangular number
    public static int triangular(int n) {
        // Base case: The first triangular number is 1
        if (n == 1) {
            return 1;
        } else {
            // Recursive case: nth triangular number is n + (n-1)th triangular number
            return n + triangular(n - 1);
        }
    }

    public static void main(String[] args) {
        // Test the triangular method with a sample value of n
        int n = 10;

        // Calculate the nth triangular number
        int result = triangular(n);

        // Print the result
        System.out.println("The " + n + "th triangular number is: " + result);
    }
}
