import java.util.Scanner;

class rec{
    int w,l;

    boolean isOk(int we, int le){
        return we<100 && le<100;
    }

    void error() {
        System.out.println("AN error occured pls follow the instruction and try again!");

    }

    rec(int we, int le){
        if(isOk(we,le)){
        w=we;
        l=le;
        }
    else
    error();
    }

    int area(){
        return w*l;
    }
}


public class rectConstuctor {
    public static void main(String[] args) {
        //int width =10; 
        Scanner input = new Scanner(System.in); // have to create object
        int width = input.nextInt(); //object member
        int length = input.nextInt(); //object member
        //int length=200;
        rec ar = new rec(width, length);
        if(ar.isOk(width,length))
        System.out.println(ar.area());
        input.close();
        
    }
    
}
