
class account{
    String name;
    int balance;
    account(String s, int a){
        name=s;
        balance=a;
    }

    void showBalance(){
        System.out.println("Dear "+name +",");
        System.out.println("Your balance : "+ balance);
    }
}


public class Dec_package {
    public static void main(String[] args) {
        account usr= new account("Rohit", 15000);
        usr.showBalance();
        
    }
}
