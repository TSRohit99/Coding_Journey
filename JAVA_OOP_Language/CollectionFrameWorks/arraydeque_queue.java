import java.util.ArrayDeque;

public class arraydeque_queue {
    public static void main(String[] args) {
        
        ArrayDeque<Integer> dq = new ArrayDeque<>();

        //Insertion
        dq.offer(10);
        dq.offer(20);
        dq.offer(30);
        dq.offer(40);
        System.out.println(dq);
        dq.offerFirst(90);
        dq.offerLast(100);
        System.out.println(dq);

        //deletion
        dq.poll();
        System.out.println(dq);
        dq.pollLast();
        System.out.println(dq);
        dq.pollFirst();
        System.out.println(dq);

        //Front and End

        System.out.println(dq.peek());
        System.out.println(dq.peekLast());
        System.out.println(dq.peekFirst());


    }
    
}