public class TilingProblem {
    
    // Recursive approach
    public static int countWaysRecursively(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return countWaysRecursively(n - 1) + countWaysRecursively(n - 2);
    }

    // Dynamic Programming approach
    public static int countWaysDP(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }

        int[] dp = new int[n + 1];
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }

    public static void main(String[] args) {
        int n = 4;
        System.out.println("Number of ways to tile a 2x" + n + " board (Recursive): " + countWaysRecursively(n));
        System.out.println("Number of ways to tile a 2x" + n + " board (DP): " + countWaysDP(n));
    }
}
