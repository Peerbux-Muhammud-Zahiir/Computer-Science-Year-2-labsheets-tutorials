public class StringLength {

    // Recursive method to compute the length of the string
    public static int computeLength(String str) {
        // Base case: If the string is empty, return 0
        if (str.equals("")) {
            return 0;
        } else {
            // Recursive case: 1 + length of the remaining string
            return 1 + computeLength(str.substring(1));
        }
    }

    public static void main(String[] args) {
        // Test the computeLength method with a sample string
        String testString = "Hello, World!";
        
        // Calculate the length of the string
        int length = computeLength(testString);
        
        // Print the result
        System.out.println("The length of the string is: " + length);
    }
}
