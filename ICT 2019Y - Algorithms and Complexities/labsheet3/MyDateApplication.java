public class MyDateApplication {
    public static void main(String[] args) {
        // Create two MyDate objects
        MyDate date1 = new MyDate(29, 7, 2024);
        MyDate date2 = new MyDate(30, 7, 2024);

        // Find the earlier date
        MyDate earlierDate = findEarlierDate(date1, date2);

        // Display the earlier date in both formats
        System.out.println("Earlier date (short format): " + earlierDate.displayShort());
        System.out.println("Earlier date (verbose format): " + earlierDate.displayVerbose());

        // Set date2 to next day
        date2.nextDay();

        // Display date2 in both formats
        System.out.println("Date2 after setting to next day (short format): " + date2.displayShort());
        System.out.println("Date2 after setting to next day (verbose format): " + date2.displayVerbose());
    }

    // Helper method to find the earlier date
    private static MyDate findEarlierDate(MyDate date1, MyDate date2) {
        if (date1.getYear() < date2.getYear()) {
            return date1;
        } else if (date1.getYear() > date2.getYear()) {
            return date2;
        } else {
            if (date1.getMonth() < date2.getMonth()) {
                return date1;
            } else if (date1.getMonth() > date2.getMonth()) {
                return date2;
            } else {
                if (date1.getDay() <= date2.getDay()) {
                    return date1;
                } else {
                    return date2;
                }
            }
        }
    }
}