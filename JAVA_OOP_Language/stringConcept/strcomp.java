
public class strcomp {
    public static void main(String[] args) {
        String s1= "Rohit";
        String s2= "ROHIT";
        
       
        if(s1.equals(s2)){
            System.out.println("Strings are same! ");
        }
        else 
        System.out.println("\ndoesn't have same case letters\n");


        if(s1.equalsIgnoreCase(s2)){
            System.out.println("Strings are same! this function doesnt check the uppper/lower case ");
        }
  


    }
    
}
