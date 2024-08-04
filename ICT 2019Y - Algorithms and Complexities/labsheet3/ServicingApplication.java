import java.util.Scanner;

public class ServicingApplication {
    private static Servicing[] servicings = new Servicing[20];
    private static int servicingCount = 0;
    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int choice;
        do {
            displayMenu();
            choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    createNewServicing();
                    break;
                case 2:
                    displayServicingInfo();
                    break;
                case 3:
                    displayAverageCharge();
                    break;
                case 4:
                    System.out.println("Exiting program. Goodbye!");
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        } while (choice != 4);
    }

    private static void displayMenu() {
        System.out.println("\n1. Create a new servicing object");
        System.out.println("2. Display information for a specific servicing");
        System.out.println("3. Display average charge for all servicings");
        System.out.println("4. Exit");
        System.out.print("Enter your choice: ");
    }

    private static void createNewServicing() {
        if (servicingCount < 20) {
            Servicing newServicing = new Servicing();
            
            System.out.print("Enter servicing number: ");
            newServicing.setServicingNum(scanner.nextInt());
            scanner.nextLine(); // Consume newline
            
            System.out.print("Enter registration number: ");
            newServicing.setRegistrationNum(scanner.nextLine());
            
            System.out.print("Enter owner name: ");
            newServicing.setOwnerName(scanner.nextLine());
            
            System.out.print("Enter charge: ");
            newServicing.setCharge(scanner.nextDouble());
            
            servicings[servicingCount++] = newServicing;
            System.out.println("New servicing object created successfully.");
        } else {
            System.out.println("Maximum number of servicings reached.");
        }
    }

    private static void displayServicingInfo() {
        System.out.print("Enter servicing number to display: ");
        int servicingNum = scanner.nextInt();
        
        for (int i = 0; i < servicingCount; i++) {
            if (servicings[i].getServicingNum() == servicingNum) {
                System.out.println(servicings[i]);
                return;
            }
        }
        System.out.println("Servicing not found.");
    }

    private static void displayAverageCharge() {
        if (servicingCount == 0) {
            System.out.println("No servicings available.");
            return;
        }
        
        double totalCharge = 0;
        for (int i = 0; i < servicingCount; i++) {
            totalCharge += servicings[i].getCharge();
        }
        
        double averageCharge = totalCharge / servicingCount;
        System.out.printf("Average charge for all servicings: $%.2f\n", averageCharge);
    }
}