public class CoinChangeRecursive {
    // Recursive function to find the minimum number of coins
    public static int minCoins(int[] coins, int amount) {
        // Base case: if the amount is 0, no coins are needed
        if (amount == 0) {
            return 0;
        }

        // Initialize the result as a large number
        int result = Integer.MAX_VALUE;

        // Try every coin that is smaller than the amount
        for (int coin : coins) {
            if (amount >= coin) {
                int subResult = minCoins(coins, amount - coin);

                // Check if including this coin gives a better result
                if (subResult != Integer.MAX_VALUE && subResult + 1 < result) {
                    result = subResult + 1;
                }
            }
        }
        return result;
    }

    public static void main(String[] args) {
        int[] coins = {1, 2, 5}; // Example denominations
        int amount = 11; // Example amount
        System.out.println("Minimum coins required: " + minCoins(coins, amount));
    }
}
