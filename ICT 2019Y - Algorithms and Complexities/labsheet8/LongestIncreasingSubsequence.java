import java.util.Arrays;

public class LongestIncreasingSubsequence {
    
    // Function to find the length of the LIS
    public static int findLISLength(int[] arr) {
        int n = arr.length;
        int[] lis = new int[n];
        
        Arrays.fill(lis, 1);  // Initialize LIS values for all indexes
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                    lis[i] = lis[j] + 1;
                }
            }
        }
        
        int maxLength = 0;
        for (int i = 0; i < n; i++) {
            if (maxLength < lis[i]) {
                maxLength = lis[i];
            }
        }
        return maxLength;
    }
    
    // Function to print the LIS
    public static void printLIS(int[] arr) {
        int n = arr.length;
        int[] lis = new int[n];
        int[] prev = new int[n];
        
        Arrays.fill(lis, 1);
        Arrays.fill(prev, -1);
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                    lis[i] = lis[j] + 1;
                    prev[i] = j;
                }
            }
        }
        
        int maxIndex = 0;
        for (int i = 1; i < n; i++) {
            if (lis[i] > lis[maxIndex]) {
                maxIndex = i;
            }
        }
        
        // Print LIS
        System.out.print("Longest Increasing Subsequence: ");
        printSequence(arr, prev, maxIndex);
        System.out.println();
    }
    
    // Helper function to print the sequence
    private static void printSequence(int[] arr, int[] prev, int index) {
        if (index == -1) {
            return;
        }
        printSequence(arr, prev, prev[index]);
        System.out.print(arr[index] + " ");
    }
    
    public static void main(String[] args) {
        int[] arr = {10, 22, 9, 33, 21, 50, 41, 60, 80};
        System.out.println("Length of Longest Increasing Subsequence: " + findLISLength(arr));
        printLIS(arr);
    }
}
