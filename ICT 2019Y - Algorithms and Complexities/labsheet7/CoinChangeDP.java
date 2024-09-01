import java.util.Arrays;

public class CoinChangeDP {
    // DP function to find the minimum number of coins
    public static int minCoins(int[] coins, int amount) {
        // Create a DP array to store the minimum coins for each amount
        int[] dp = new int[amount + 1];
        
        // Initialize the DP array with a large value
        Arrays.fill(dp, amount + 1);
        dp[0] = 0; // 0 coins are needed to make 0 amount

        // Fill the DP array
        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (i >= coin) {
                    dp[i] = Math.min(dp[i], dp[i - coin] + 1);
                }
            }
        }

        // Return the result for the given amount
        return dp[amount] > amount ? -1 : dp[amount];
    }

    // Function to print the coins used to make up the amount
    public static void printCoins(int[] coins, int amount) {
        int[] dp = new int[amount + 1];
        int[] usedCoins = new int[amount + 1];

        Arrays.fill(dp, amount + 1);
        dp[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (i >= coin && dp[i - coin] + 1 < dp[i]) {
                    dp[i] = dp[i - coin] + 1;
                    usedCoins[i] = coin;
                }
            }
        }

        if (dp[amount] > amount) {
            System.out.println("Not possible to make the amount with given coins.");
        } else {
            System.out.println("Coins used to make " + amount + ":");
            while (amount > 0) {
                int coin = usedCoins[amount];
                System.out.print(coin + " ");
                amount -= coin;
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int[] coins = {1, 2, 5}; // Example denominations
        int amount = 11; // Example amount
        int minCoins = minCoins(coins, amount);
        System.out.println("Minimum coins required: " + minCoins);
        printCoins(coins, amount);
    }
}
