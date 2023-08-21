
class que{
    int top = 0;
    int sz = 0;
    int q[];

    boolean isOk(int d) {
        if (d < 100) // Checking the given data, you can change the default value according to your
                     // needs
            return true;
        else
            return false;
    }

    void error() {
        System.out.println("An error occured pls follow the instruction and try again!");

    }

    que(int ArrSz) {
        if (isOk(ArrSz)) {
            sz = ArrSz;
            q = new int[sz];
        } else
            error();

    }

    void enqueue(int data) {
        if (top == sz){
            System.out.println("Queue overflow!! ");
            //you can call a resize function
        }

        else {
        q[top] = data;
        top++;
        }

    }

    int dequeue() {
        if (top == 0) {
            System.out.println("Queue empty!! ");
            //you can call a resize function
            return 404;
        } else {
            int i=0;
            int temp= q[0];
            int c[]= new int[sz];
            while(i<(sz-1)){
                c[i]=q[i+1];
                i++;
            }
         q=c;
         top--;
         return temp;
        }
    }

    void __printer() {
        for (int i =0; i <top; i++) {
            System.out.print(" " + q[i]);
        }
    }
}


public class Queue {
    public static void main(String[] args) {

        que q= new que(5);
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.__printer();
        System.out.println("\nAfter Dequeuing..");
        q.enqueue(11);
        q.enqueue(11);
        q.enqueue(11);
        q.enqueue(11);
        q.enqueue(11);
        q.enqueue(11);
        //q.dequeue();
        q.__printer();
        

        
    }
    
}
