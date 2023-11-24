import java.util.*;

class Student implements Comparable<Student> {
    int id;
    String name;

    Student(int id, String name){
        this.id=id;
        this.name=name;
    }

     //override
    public String toString (){ // here I override the toString() built in method to get the output of my desired format
        return "\nStudent roll "+ this.id +"\n"+ "Name "+ this.name + "\n" 
        ;
    }
    //override
    // public int compareTo(Student that){
    //     return this.id-that.id;
    // }
    //name wise comparism
    public int compareTo(Student that){
        return this.name.compareTo(that.name);
    }
}

public class problem1 {
    public static void main(String[] args) {
        List<Student> list = new ArrayList<Student>();

        list.add(new Student(31, "Dina"));
        list.add(new Student(30, "Rohit"));
        list.add(new Student(57, "Efa"));

        System.out.println(list);
        Collections.sort(list);
        System.out.println("AFter sortingg.....");
        System.out.println(list);

    }
}
