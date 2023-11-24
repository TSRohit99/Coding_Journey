import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;

/* Basic Map */

public class maps_Map {
    public static void main(String[] args) {
        
        // Map< String, Integer> mp = new HashMap<>(); // stores data in random order o(1)
        Map< String, Integer> mp = new TreeMap<>(); // here it stores the data in sorted order o(logn)

        //insertion
        mp.put("A", 10);
        mp.put("C", 40);
        mp.put("B", 30);
        System.out.println(mp);

        mp.putIfAbsent("B", 80); //if there's no B then it will work
        System.out.println(mp);

        mp.put("B", 80); //override
        System.out.println(mp);

        //removing part with key, val diffrently or together
        mp.remove("A");
        System.out.println(mp);

        /* Also supports clear() */

        //can check with key, val diffrently or together
        System.out.println(mp.containsKey("C")); 

        //travarsing

        for( Map.Entry<String, Integer> e : mp.entrySet()){
            System.out.println(e);
            System.out.println(e.getKey());
        }




    }
}
