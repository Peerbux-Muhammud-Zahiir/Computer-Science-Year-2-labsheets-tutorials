public class KnapsackProblem {
    
    // Tabulation (Bottom-Up DP) approach
    public static int knapsackTabulation(int[] weights, int[] values, int W) {
        int n = values.length;
        int[][] dp = new int[n + 1][W + 1];
        
        for (int i = 1; i <= n; i++) {
            for (int w = 0; w <= W; w++) {
                if (weights[i - 1] <= w) {
                    dp[i][w] = Math.max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
                } else {
                    dp[i][w] = dp[i - 1][w];
                }
            }
        }
        return dp[n][W];
    }
    
    // Memoization (Top-Down DP) approach
    public static int knapsackMemoization(int[] weights, int[] values, int W) {
        int n = values.length;
        int[][] memo = new int[n][W + 1];
        return knapsackRecursion(weights, values, W, n - 1, memo);
    }

    // Helper recursive function for memoization
    private static int knapsackRecursion(int[] weights, int[] values, int W, int i, int[][] memo) {
        if (i < 0 || W == 0) {
            return 0;
        }
        if (memo[i][W] != 0) {
            return memo[i][W];
        }
        if (weights[i] > W) {
            return memo[i][W] = knapsackRecursion(weights, values, W, i - 1, memo);
        }
        return memo[i][W] = Math.max(knapsackRecursion(weights, values, W, i - 1, memo),
                                     knapsackRecursion(weights, values, W - weights[i], i - 1, memo) + values[i]);
    }
    
    public static void main(String[] args) {
        int[] values = {60, 100, 120};
        int[] weights = {10, 20, 30};
        int W = 50;
        System.out.println("Maximum value in Knapsack (Tabulation): " + knapsackTabulation(weights, values, W));
        System.out.println("Maximum value in Knapsack (Memoization): " + knapsackMemoization(weights, values, W));
    }
}
