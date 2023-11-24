import java.util.ArrayList;
import java.util.List;

public class arrayList_ListInterface {
    public static void main(String[] args) {

        List<Integer> list = new ArrayList<>(); //using Array
        // List<Integer> list = new LinkedList<>(); //using LL
        // Add operation o(n)
        list.add(10);
        list.add(20);
        list.add(30);
        list.add(40);
        list.add(2, 100);
        System.out.println(list);

        List<Integer> newlist = new ArrayList<>();

        newlist.add(11);
        newlist.add(22);
        list.addAll(newlist);
        System.out.println(list);

        // Get & set operation o(1)
        System.out.println("Item at 2 index " + list.get(2));
        System.out.println("Inserting 90 is at 4 index , the removed item " + list.set(4, 90));
        System.out.println(list);

        // remove o(n)
        System.out.println("Removing one item, removed item " + list.remove(1));
        System.out.println("Removing 100, removed item " + list.remove(Integer.valueOf(100)));
        System.out.println(list);
        // list.clear() to clear the list

        // contains o(n)
        System.out.println("22 is available? " + list.contains(22));

        // itterator
        for (int x : list) {
            System.out.println(x);
        }

    }
}