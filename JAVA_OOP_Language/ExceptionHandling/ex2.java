import java.util.*;

public class ex2 {
    public static void main(String[] args) {
        try{
            int a=0;
            System.out.println("a ="+ a);
            int b= 44/a;
            int c[]={1};
            c[42]=99;

        }catch(ArithmeticException e){
            System.out.println("Divide by zero occures "+ e);
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array index out of bounds" + e);
        }finally{
            int a=1;
            System.out.println("Its in final block....");
        }
    }
}
