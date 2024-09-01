public class TilingMxN {
    
    // Recursive approach
    public static int countWaysRecursively(int n, int m) {
        if (n < m) {
            return 1;
        }
        return countWaysRecursively(n - 1, m) + countWaysRecursively(n, m - 1);
    }

    // Dynamic Programming approach
    public static int countWaysDP(int n, int m) {
        if (n < m) {
            return 1;
        }

        int[] dp = new int[n + 1];
        dp[0] = 1;

        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i - 1];
            if (i >= m) {
                dp[i] += dp[i - m];
            }
        }
        return dp[n];
    }

    public static void main(String[] args) {
        int n = 4, m = 3;
        System.out.println("Number of ways to tile a " + n + "x" + m + " floor (Recursive): " + countWaysRecursively(n, m));
        System.out.println("Number of ways to tile a " + n + "x" + m + " floor (DP): " + countWaysDP(n, m));
    }
}
