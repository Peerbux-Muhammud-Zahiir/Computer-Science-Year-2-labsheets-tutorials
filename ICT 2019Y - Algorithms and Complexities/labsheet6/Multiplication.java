public class Multiplication {

    // Recursive method to multiply num1 by num2 using addition
    public static int mult(int num1, int num2) {
        // Base case: If num2 is 0, return 0
        if (num2 == 0) {
            return 0;
        }
        // Recursive case: Add num1 to the result of mult(num1, num2 - 1)
        return num1 + mult(num1, num2 - 1);
    }

    public static void main(String[] args) {
        // Test the mult method with different inputs
        int result1 = mult(5, 3); // Expected output: 15
        int result2 = mult(7, 4); // Expected output: 28
        int result3 = mult(10, 0); // Expected output: 0
        int result4 = mult(0, 10); // Expected output: 0
        
        // Print the results
        System.out.println("5 * 3 = " + result1);
        System.out.println("7 * 4 = " + result2);
        System.out.println("10 * 0 = " + result3);
        System.out.println("0 * 10 = " + result4);
    }
}
