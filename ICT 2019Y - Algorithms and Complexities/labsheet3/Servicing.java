public class Servicing {
    private int servicingNum;
    private String registrationNum;
    private String ownerName;
    private double charge;

    // Default constructor
    public Servicing() {
        this.servicingNum = 0;
        this.registrationNum = "";
        this.ownerName = "";
        this.charge = 0.0;
    }

    // Accessor methods
    public int getServicingNum() { return servicingNum; }
    public String getRegistrationNum() { return registrationNum; }
    public String getOwnerName() { return ownerName; }
    public double getCharge() { return charge; }

    // Mutator methods
    public void setServicingNum(int servicingNum) { this.servicingNum = servicingNum; }
    public void setRegistrationNum(String registrationNum) { this.registrationNum = registrationNum; }
    public void setOwnerName(String ownerName) { this.ownerName = ownerName; }
    public void setCharge(double charge) { this.charge = charge; }

    // toString method
    @Override
    public String toString() {
        return "Servicing #" + servicingNum +
               "\nRegistration Number: " + registrationNum +
               "\nOwner Name: " + ownerName +
               "\nCharge: $" + String.format("%.2f", charge);
    }
}