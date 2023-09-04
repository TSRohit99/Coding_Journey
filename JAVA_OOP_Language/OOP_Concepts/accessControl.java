class check{
    private static int a;
      

 public
  check(int a1){
    a=a1;

  }

  public static boolean positive (){
    return a>=0;
  }


}

public class accessControl {
    public static void main(String[] args) {
        check c= new check(-1);
        System.out.println("State : "+ check.positive());
        if(c.positive())
            System.out.println("The given number is positive");
        
        else
           System.out.println("The given number is Negative");
           

        
    }
    
}
