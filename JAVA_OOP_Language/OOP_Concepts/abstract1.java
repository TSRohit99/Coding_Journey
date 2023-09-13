abstract class R{
    abstract void doit();
   public static void show(){
        System.out.println("Hola");
    }
    final static int b=100;
}

class S extends R{
        void doit(){
        System.out.println("Done");
        //super.b=10;  
    }

}


public class abstract1 {
    public static void main(String[] args) {
        S obj= new S();
        obj.doit();
        S.show(); //static
        System.out.println(S.b); // final, cant reassign the value of b

        /* In abstract we define the methods earlier then implement it on it's child. To make a abstract method we have to make the whole class abstract, WE CAN'T CREATE ANY OBJECT OF ABSTRACT CLASS. WE HAVE TO CREATE IT'S CHILD'S OBJ WHICH IS NOT ABSTRACT. If we inherit any abstract class the child class must fill/ complete the abstract class's all abstract methods. Abstract doesn't work on vars. */


        
    }
}
