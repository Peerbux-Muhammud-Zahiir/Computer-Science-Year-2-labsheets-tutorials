public class Account {
    private int id;
    private double balance;
    private double annualInterestRate;
    private Date dateCreated;


    public Account(int id,double bal,double rate){
        this.id=id;
        this.balance=bal;
        this.annualInterestRate=rate;
    }

    public boolean withdraw(double balance){
        if(balance>0){
            return true;
        }else{
            return false;
        }
    }

    public void deposit(double bal){
        this.balance=bal;
    }
}
