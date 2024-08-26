public class MinimumElement {

    // Recursive method to find the minimum element in the array
    public static int findMin(int[] array, int n) {
        // Base case: If the array has only one element, return that element
        if (n == 1) {
            return array[0];
        } else {
            // Recursive case: Compare the first element with the minimum of the remaining array
            return Math.min(array[n - 1], findMin(array, n - 1));
        }
    }

    public static void main(String[] args) {
        // Example array
        int[] array = {3, 5, 2, 9, 1, 6};

        // Finding the minimum element
        int min = findMin(array, array.length);

        // Print the result
        System.out.println("The minimum element in the array is: " + min);
    }
}
