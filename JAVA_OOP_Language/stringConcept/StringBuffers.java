public class StringBuffers {
    public static void main(String[] args) {
        
        //StringBuffer is mutable

        StringBuffer sb = new StringBuffer("Hello I AM");
        sb= sb.append(" Rohit");
        System.out.println(sb);
        sb= sb.insert(10, " Rony");
        System.out.println(sb);

        //reverse()

        System.out.println(sb.reverse());
        sb.reverse();

        //delete( int sI, int eI)
        System.out.println(sb.delete(0, 7));

        //replace(sI, eI, "Str")
        System.out.println(sb.replace(0,4, "sen "));

    }
}