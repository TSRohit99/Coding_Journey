import java.util.*;

public class Collectionsclass {
    public static void main(String[] args) {
        
        List<Integer> list = new ArrayList<>();
        list.add(100);
        list.add(600);
        list.add(300);
        list.add(800);
        list.add(300);
        list.add(600);

        System.out.println("Min Num : " + Collections.min(list));
        System.out.println("Max Num : " + Collections.max(list));
        System.out.println("300 is available : " + Collections.frequency(list, 300));


        Collections.sort(list); //ASC
        System.out.println(list);
        Collections.sort(list, Comparator.reverseOrder()); //DES
        System.out.println(list);

    }
}
