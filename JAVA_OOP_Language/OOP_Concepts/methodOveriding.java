class student{
    public void show(){
        System.out.println("Student class");
    }
}
class rohit extends student{
    public void show(){
        System.out.println("Rohit is a CS student");
    }
}



public class methodOveriding{
    public static void main(String[] args) {
        rohit obj= new rohit();
        obj.show();
        // obj.show(); //commet rohit.show() then use it
    }
}