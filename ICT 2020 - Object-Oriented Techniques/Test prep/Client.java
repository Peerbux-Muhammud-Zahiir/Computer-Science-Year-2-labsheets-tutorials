
public class Client{
    private int id;
    private String name;
    private String phone;
    ArrayList<Account> accounts;

    public Client(int id,String name,String phone){
        this.id=id;
        this.name=name;
        this.phone=phone;
        accounts = new Arraylist<>();
    }

    public boolean addAccount(account){
        accoutns.add(account);
        return true;
    }

    public boolean removeAccount(int id){
        for(Account account:accounts){
            if(account.getId(); ==id){
                accounts.remove(account);
                return true;
            }
            return false;
        }
    }
}