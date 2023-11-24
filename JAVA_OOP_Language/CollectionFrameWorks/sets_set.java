import java.util.*;

public class sets_set {
    public static void main(String[] args) {

        /* In Set all the unique elements can be stored */

        // Set <Integer> st = new HashSet<>(); // stores data in random order o(1)
        // Set <Integer> st = new LinkedHashSet<>(); // same as HashSet() but here data are stored in array/LL type

        Set <Integer> st = new TreeSet<>(); // here it stores the data in sorted order o(logn)
        st.add(10);
        st.add(50);
        st.add(90);
        st.add(70);
        System.out.println(st);

        st.remove(50);
        System.out.println(st);

        System.out.println(st.contains(70));

        /* isEmpty(), size() clear() are the other functions */


    }
}
