
enum Size{
    SMALL, MEDIUM, LARGE
}

class choice{
    Size pizzaSize;
    choice(Size pizzaSize){
        this.pizzaSize=pizzaSize;
    }


public void orderPizza(){
    switch (pizzaSize) {
        case SMALL:
            System.out.println("Price is 200 BDT");
            break;
        case MEDIUM:
            System.out.println("Price is 400 BDT");
            break;
        case LARGE:
            System.out.println("tmr budget or baire vai ita dike caio na!!");
            break;
    
        default:
        System.out.println("Asholei pizzza order deuhat aiso ni??");
            break;
    }
}


}
public class enum_ {
    public static void main(String[] args) {
       
        choice pz= new choice(Size.LARGE);
        // choice pz= new choice(Size.MEDIUM);

        pz.orderPizza();
       
    }
    
}
