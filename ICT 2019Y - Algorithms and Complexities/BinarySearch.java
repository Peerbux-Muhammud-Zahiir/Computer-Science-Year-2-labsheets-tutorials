public class BinarySearch {

    // Recursive method to perform binary search
    public static int binarySearch(int[] myArray, int searchKey, int low, int high) {
        // Base case: If the search space is exhausted
        if (low > high) {
            return -1; // Element not found
        }

        // Calculate the middle index
        int mid = low + (high - low) / 2;

        // Base case: If the middle element is the search key
        if (myArray[mid] == searchKey) {
            return mid; // Element found
        }
        
        // Recursive case: If the search key is less than the middle element, search in the left half
        if (searchKey < myArray[mid]) {
            return binarySearch(myArray, searchKey, low, mid - 1);
        } else {
            // Recursive case: If the search key is greater than the middle element, search in the right half
            return binarySearch(myArray, searchKey, mid + 1, high);
        }
    }

    public static void main(String[] args) {
        // Test the binarySearch method with a sample sorted array and search key
        int[] myArray = {2, 4, 7, 10, 14, 19, 23, 27, 31};
        int searchKey = 14;

        // Perform binary search on the entire array
        int result = binarySearch(myArray, searchKey, 0, myArray.length - 1);

        // Print the result
        if (result != -1) {
            System.out.println("Element " + searchKey + " found at index: " + result);
        } else {
            System.out.println("Element " + searchKey + " not found in the array.");
        }
    }
}
