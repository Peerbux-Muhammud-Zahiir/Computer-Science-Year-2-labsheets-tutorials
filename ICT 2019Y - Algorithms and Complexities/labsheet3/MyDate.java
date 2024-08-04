public class MyDate {
    private int day;
    private int month;
    private int year;

    // Default constructor
    public MyDate() {
        day = 0;
        month = 0;
        year = 0;
    }

    // Constructor with parameters
    public MyDate(int day, int month, int year) {
        assignDate(day, month, year);
    }

    // Method to assign date
    public void assignDate(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    // Display date in short form
    public String displayShort() {
        return String.format("%02d/%02d/%04d", day, month, year);
    }

    // Display date in verbose form
    public String displayVerbose() {
        String[] months = {"January", "February", "March", "April", "May", "June", 
                           "July", "August", "September", "October", "November", "December"};
        return String.format("%d %s %d", day, months[month - 1], year);
    }

    // Change to next day
    public void nextDay() {
        day++;
        if (day > daysInMonth()) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    // Helper method to get days in the current month
    private int daysInMonth() {
        int[] daysPerMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (month == 2 && isLeapYear()) {
            return 29;
        }
        return daysPerMonth[month - 1];
    }

    // Helper method to check if it's a leap year
    private boolean isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Getter methods
    public int getDay() { return day; }
    public int getMonth() { return month; }
    public int getYear() { return year; }
}