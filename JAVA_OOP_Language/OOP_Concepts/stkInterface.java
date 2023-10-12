interface printer {
    void print();
}

interface intstk extends printer {
    void push(int n);
    int pop();

}

class opSTK implements intstk {

    private int s[];
    private int index;

    opSTK(int sz) {
        s = new int[sz];
        index = -1;

    }

    public void push(int data) {
        index++;
        s[index] = data;
    }

    public int pop() {
        return s[index--];
    }

    public void print() {
        for (int i = index; i >= 0; i--) {
            System.out.println(s[i]);
        }
    }

}

public class stkInterface {
    public static void main(String[] args) {
        opSTK obj = new opSTK(5);
        obj.push(10);
        obj.push(20);
        obj.push(30);
        obj.push(40);
        obj.print();

        System.out.println("Poping one item...");
        System.out.println(obj.pop() + " Done");
        System.out.println("Pushing one item...");
        obj.push(50);
        obj.print();

    }
}