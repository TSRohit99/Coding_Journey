import java.util.Comparator;
import java.util.LinkedList;
import java.util.PriorityQueue;
import java.util.Queue;

public class LL_Queue {
    public static void main(String[] args) {
        
   /*  Queue<Integer> queue = new LinkedList<>();
    queue.offer(10);
    queue.offer(20);
    queue.offer(30);
    System.out.println(queue);

    System.out.println("First item removed, item : " + queue.poll());
    System.out.println("Front item : " + queue.peek());
    */

    /* We can use other functions like add() remove() element() but they throws erros so the program can crash, but those I used returns bool or value only */

    //priority Queue

    // Queue<Integer> queue = new PriorityQueue<>(); //min 
    Queue<Integer> queue = new PriorityQueue<>(Comparator.reverseOrder()); //Max
    queue.offer(10);
    queue.offer(20);
    queue.offer(30);
    queue.offer(9);
    queue.offer(56);
    System.out.println(queue);

    System.out.println("First item removed, item : " + queue.poll());
    System.out.println("Front item : " + queue.peek());

    }
}
