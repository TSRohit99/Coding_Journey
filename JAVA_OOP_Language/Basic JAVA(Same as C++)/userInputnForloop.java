import java.util.Scanner;


public class userInputnForloop {
    public static void main (String args[]){
         for(int i=0; i<5; i++){
            System.out.println("Hello ma'am");
        }
        boolean bo= true;
        if(bo)
            System.out.println("ITs workingg");



        // taking input in java

        Scanner input = new Scanner(System.in); // have to create object
        String name = input.nextLine(); //object member
        System.out.println("Hello "+name+" boss"); //print
        byte roll = input.nextByte(); 
        System.out.println(roll);
        input.close();//close the input
    }
}
